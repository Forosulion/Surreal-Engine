#pragma once
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/quaternion.hpp>
#include <glm/gtx/quaternion.hpp>
#include "Engine_Name_Math.h"

class Camera
{
public:
	Camera();
	Camera(const glm::vec3& eye, const glm::vec3& up, const float& pitch, const float& yaw);
	const glm::mat4 getViewMatrix() const { return m_viewMatrix; };
	void onUpdate(GLFWwindow* widnow);

private:

	void _updateViewMatrix();
	glm::quat _getRotationQuat();

private:
	float m_pitch, m_yaw, m_oldMouseX, m_oldMouseY,
		m_fieldOfView, m_aspectRatio, m_near, m_far;
	glm::vec3 m_camPos;
	glm::vec3 m_upVector;
	glm::mat4 m_viewMatrix, m_perspectiveMatrix;
};

