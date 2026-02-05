#pragma once
#include "Framework/GameObject.h"
#include "Framework/Animation.h"

class Sheep :
	public GameObject
{

public:
	Sheep();
	~Sheep();

	void handleInput(float dt) override;
	void update(float dt) override;

	void checkWallAndBounce();
	void setWorldSize(sf::Vector2f);

private:
	 /*
	enum class Direction { UP, DOWN, LEFT, RIGHT, UP_RIGHT, DOWN_RIGHT, DOWN_LEFT, UP_LEFT, NONE };
	Direction m_direction = Direction::NONE;
    float m_speed = 300.0f;
	float m_inputBuffer = 0.f;
	const float INPUT_BUFFER_LENGTH = 0.1f;
	const float APPROX_ONE_OVER_ROOT_TWO = 0.70710678f;	// 1 / sqrt(2)
	*/

	
	const float ACCELERATION = 30.0f;
	const float DRAG_FACTOR = 0.95f;
	const float COEFF_OF_RESTITUTION = 0.8f;

	sf::Vector2f m_acceleration;

	sf::Vector2f m_worldSize;

	Animation m_walkDown;
	Animation m_walkUp;
	Animation m_walkUpRight;
	Animation m_walkRight;
	Animation m_walkDownRight;

	Animation* m_currentAnimation;
};

