#include "PhysicsScene.h"
#include "PhysicsObject.h"
#include <algorithm>
#include <iostream>



PhysicsScene::PhysicsScene() : m_gravity (0.0f, -1.0f), m_timeStep (0.05f)
{
}


PhysicsScene::~PhysicsScene()
{
	for (auto i : m_actors)
	{
		delete i;
	}
}

void PhysicsScene::addActor(PhysicsObject * actor)
{
	if (actor && std::find(begin(m_actors), end(m_actors), actor) == end(m_actors))
	{
		m_actors.push_back(actor);
	}
}

void PhysicsScene::removeActor(const PhysicsObject* actor)
{
	if (actor)
	{
		auto found = find(begin(m_actors), end(m_actors), actor);

		if (found != m_actors.end())
		{
			m_actors.erase(found);
		}
	}
}

void PhysicsScene::update(float dt)
{
	//update physics at a fixed time step
	static float timer = 0;
	timer += dt;
	if (timer >= m_timeStep) {
		timer -= m_timeStep;

		for (auto actor : m_actors)
		{
			actor->fixedUpdate(m_gravity, m_timeStep);
		}
	}
}

void PhysicsScene::updateGizmos()
{
	for (auto i : m_actors)
	{
		i->makeGizmo();
	}
}

void PhysicsScene::debugScene()
{
	int count = 0;
	for (auto i : m_actors)
	{
		std::cout << count << " : ";
		i->debug();
		count++;
	}
}
