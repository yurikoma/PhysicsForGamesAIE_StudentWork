#pragma once

#include "PhysicsObject.h"
#include <list>
//#include <vector>
#include "glm/vec2.hpp"

class PhysicsScene
{
public:
	PhysicsScene();
	~PhysicsScene();

	void addActor(PhysicsObject* actor);
	void removeActor(const PhysicsObject* actor);

	void update(float dt);
	void updateGizmos();
	void debugScene();

	void setGravity(const glm::vec2& gravity) { m_gravity = gravity; }
	glm::vec2 getGravity() const { return m_gravity; }

	void setTimeStep(const float timeStep) { m_timeStep = timeStep; }
	float getTimeStep() const { return m_timeStep; }

protected:
	glm::vec2 m_gravity;
	float m_timeStep;
	std::list<PhysicsObject*> m_actors;
};

