#include "SphereBody.h"



SphereBody::SphereBody(glm::vec2 position, glm::vec2 velocity, float mass, float radius, glm::vec4 colour)
	: Rigidbody(ShapeID::SPHERE,position,velocity,0,mass)
	, m_radius(radius)
	, m_colour(colour)
{
}


SphereBody::~SphereBody()
{
}

void SphereBody::makeGizmo()
{
	aie::Gizmos::add2DCircle(m_position, m_radius, 16, m_colour);
}
