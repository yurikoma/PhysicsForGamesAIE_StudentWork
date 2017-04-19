#include "Sphere.h"
#include "Gizmos.h"



Sphere::Sphere(glm::vec2 position, glm::vec2 velocity, float mass, float radius, glm::vec4 colour): Rigidbody(position, velocity, radius, mass)
{
	m_radius = radius;
	m_colour = colour;
}

Sphere::Sphere(glm::vec2 position, float angle, float speed, float mass, float radius, glm::vec4 colour) : Rigidbody(position, angle, speed, radius, mass)
{
	m_radius = radius; 
	m_colour = colour;
}


Sphere::~Sphere()
{
}

void Sphere::makeGizmo()
{
	aie::Gizmos::add2DCircle(m_position, m_radius, 12, m_colour);
}

