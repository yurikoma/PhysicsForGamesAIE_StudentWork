#pragma once
#include "PhysicsObject.h"

#include "glm/vec3.hpp"
#include "glm/vec2.hpp"

class Rigidbody : public PhysicsObject
{
public:
	Rigidbody(glm::vec2 position, glm::vec2 velocity, float rotation, float mass);
	Rigidbody(glm::vec2 position, float angle, float speed, float rotation, float mass);
	~Rigidbody();

	virtual void fixedUpdate(glm::vec2 gravity, float timestep);
	virtual void debug();
	void applyForce(glm::vec2 force);
	void applyForceToActor(Rigidbody* actor2, glm::vec2 force);

	glm::vec2 getPosition() { return m_position; }
	float getRotation() { return m_rotation; }
	glm::vec2 getVelocity() { m_velocity; }
	float getMass() { return m_mass; }

protected:
	glm::vec2 m_position;
	float m_rotation;
	glm::vec2 m_velocity;
	float m_mass;
};

