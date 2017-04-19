#pragma once

#include "glm/vec3.hpp"

enum ShapeType
{
	PLANE = 0,
	SPHERE = 1,
	BOX = 2,
};

class PhysicsObject
{
public:
	PhysicsObject();
	~PhysicsObject();

	virtual void fixedUpdate(glm::vec2 gravity, float timeStep) = 0;
	virtual void debug() = 0;
	virtual void makeGizmo() = 0;
	virtual void resetPosition() {};

protected:
	ShapeType m_shapeID;
};

