#pragma once
#include "PhysicsObject.h"

#include "glm\vec3.hpp"

class Plane : public PhysicsObject
{
public:
	Plane();
	~Plane();

	virtual void makeGizmo() {};

protected: 
	glm::vec3 m_normal;
	glm::vec3 m_distanceToOrigin;
};

