#pragma once

#include "RigidBody.h"
#include <glm/vec4.hpp>
#include <Gizmos.h>

class SphereBody : public Rigidbody
{
public:
	SphereBody(glm::vec2 position, glm::vec2 velocity, float mass, float radius, glm::vec4 colour);
	~SphereBody();
	virtual void makeGizmo() override;

	float getRadius() const { return m_radius; }
	glm::vec4 getColour() const { return m_colour; }

protected:
	float m_radius;
	glm::vec4 m_colour;
};

