#include "Rigidbody.h"

#include <iostream>



Rigidbody::Rigidbody(glm::vec2 position, glm::vec2 velocity, float rotation, float mass)
{
}

Rigidbody::Rigidbody(glm::vec2 position, float angle, float speed, float rotation, float mass)
{
}


Rigidbody::~Rigidbody()
{
}

void Rigidbody::fixedUpdate(glm::vec2 gravity, float timeStep)
{
	applyForce(gravity * m_mass * timeStep);
	m_position += m_velocity * timeStep;
}

void Rigidbody::debug()
{
	std::cout << "position: " << m_position.x << ', ' << m_position.y << std::endl;
}

void Rigidbody::applyForce(glm::vec2 force)
{
	m_velocity += force / m_mass;
}

void Rigidbody::applyForceToActor(Rigidbody * a_pActor2, glm::vec2 force)
{
	a_pActor2->applyForce(force);
	applyForce(-force);
}
