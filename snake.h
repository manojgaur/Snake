#ifndef SNAKE_H
#define SNAKE_H

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

const int DIRECT_UP = 0;
const int DIRECT_DOWN = 1;
const int DIRECT_LEFT = 2;
const int DIRECT_RIGHT = 3;


class Snake{
	public:
	void setSprite(sf::Sprite sprite, int numberOfSquares, sf::RenderWindow *App);
	sf::Sprite getSprite();

	void pollEvent(sf::Event *event);
	void logic();
	void render();

	void reset(int size=-1);
	
	private:
	int m_speed;
	int m_squareSize;
	int m_prevSquareDirect;
	sf::Vector2<float> startPosition;
	sf::Rect m_appRect;
	
	
	int m_direction;
	sf::Sprite m_sprite;
	std::vector< sf::Vector2<float> > m_squaresVector;
	
	sf::Clock m_clock;
};

#endif
