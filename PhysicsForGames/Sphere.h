#pragma once

#include "RigidBody.h"
#include <glm/vec4.hpp>
#include <Gizmos.h>

class Sphere : public Rigidbody
{
public:
	Sphere(glm::vec2 position, glm::vec2 velocity, float mass, float radius, glm::vec4 colour);
	Sphere(glm::vec2 position, float angle, float speed, float mass, float radius, glm::vec4 colour);
	~Sphere();

	virtual void makeGizmo() override;

	float getRadius() { return m_radius; }
	glm::vec4 getColour() { return m_colour; }

protected:
	float m_radius;
	glm::vec4 m_colour;
};


