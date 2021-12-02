#pragma once
#include <glm/glm.hpp>
#include <glm/gtc/quaternion.hpp>
#include <glm/gtx/quaternion.hpp>
class Camera
{
public:


	Camera();
	Camera(const glm::vec3& eye, const glm::vec3& up, const float& pitch, const float& yaw);
	inline glm::mat4 getViewMatrix() { return m_viewMatrix; };
	void onUpdate();



private:

	void _updateViewMatrix();
	glm::quat _getRotationQuat();

private:

	float m_pitch, m_yaw;
	glm::vec3 m_camPos;
	glm::vec3 m_upVector;
	glm::mat4 m_viewMatrix;
};

