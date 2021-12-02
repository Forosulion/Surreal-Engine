#pragma once
#include "Camera.h"

Camera::Camera()
	:m_camPos(glm::vec3(0.0f)), m_upVector(glm::vec3(0.0f, 1.0f, 0.0f)), m_pitch(0), m_yaw(0)
{
	_updateViewMatrix();
}

Camera::Camera(const glm::vec3& eye, const glm::vec3& up, const float& pitch, const float& yaw)
	:m_camPos(eye), m_upVector(up), m_pitch(pitch), m_yaw(yaw)
{
	_updateViewMatrix();
}

void Camera::onUpdate()
{
	_updateViewMatrix();
}


void Camera::_updateViewMatrix()
{
	glm::quat rotation = _getRotationQuat();
	m_viewMatrix = glm::translate(glm::mat4(1.0f), m_camPos) * glm::toMat4(rotation);
	m_viewMatrix = glm::inverse(m_viewMatrix);
}

glm::quat Camera::_getRotationQuat()
{
	return glm::quat(glm::vec3(m_pitch, m_yaw, 0.0f));
}
