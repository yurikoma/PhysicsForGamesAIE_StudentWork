#include <gl_core_4_4.h>
#include <memory>
#include <iostream>

#include "Font.h"
#include "Input.h"

#include "PhysicsForGamesApp.h"

#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/ext.hpp>
#include <glm/gtx/transform.hpp>
#include <Gizmos.h>

#include "Sphere.h"
#include "Rocket.h"

#include <random>



PhysicsForGamesApp::PhysicsForGamesApp() {

}

PhysicsForGamesApp::~PhysicsForGamesApp() {

}

bool PhysicsForGamesApp::startup() {
	
	aie::Gizmos::create(255U, 255U, 65535U, 65535U);

	m_physics_scene.setGravity(glm::vec2(0, -10));

	auto ball = new SphereBody(glm::vec2(0, 0), glm::vec2(10, 20), 3.0f, 1.0f, glm::vec4(1.f, 0.f, 0.f, 1.f));
	m_physics_scene.addActor(ball);
	return true;


	//m_2dRenderer = new aie::Renderer2D();
	//m_font = new aie::Font("./font/consolas.ttf", 32);
	//return true;
}

// no drawing code here
void PhysicsForGamesApp::update(float deltaTime) {

	aie::Gizmos::clear();

	m_physics_scene.update(deltaTime);
	m_physics_scene.updateGizmos();
	//return true;

	// input example
	//aie::Input* input = aie::Input::getInstance();

	// exit the application
	//if (input->isKeyDown(aie::INPUT_KEY_ESCAPE))
		//quit();
}

void PhysicsForGamesApp::draw(const glm::mat4& projection, const glm::mat4& view, float time) {

	static float aspectRatio = 16 / 9.f;
	aie::Gizmos::draw2D(glm::ortho<float>(-100, 100, -100 / aspectRatio, 100 / aspectRatio, -1.0f, 1.0f));

	// wipe the screen to the background colour
	//clearScreen();

	// begin drawing sprites
	//m_2dRenderer->begin();

	// draw your stuff here!

	// output some text
	//m_2dRenderer->drawText(m_font, "Press ESC to quit", 0, 0);

	// done drawing sprites
	//m_2dRenderer->end();
}

void PhysicsForGamesApp::shutdown() {

	//delete m_font;
	//delete m_2dRenderer;
}