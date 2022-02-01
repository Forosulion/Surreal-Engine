#pragma once
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/quaternion.hpp>
#include <glm/gtx/quaternion.hpp>
#include "Math.h"

namespace engine_name_placeholder {

	class Camera
	{
	public:
		Camera();
		Camera(const glm::vec3& eye, const glm::vec3& up, const float& pitch, const float& yaw);
		const glm::mat4 getViewMatrix() const { return m_viewMatrix; };
		void onUpdate(GLFWwindow* widnow);

	private:

		void _updateViewMatrix();


		//changesadas
	private:
		float m_pitch = 0, m_yaw = 0, m_oldMouseX = 0, m_oldMouseY = 0,
			m_fieldOfView = 0, m_aspectRatio = 0, m_near = 0, m_far = 0;
		glm::vec3 m_camPos = {};
		glm::vec3 m_upVector = {};
		glm::mat4 m_viewMatrix = {}, 
			m_perspectiveMatrix = {};
	};
}


