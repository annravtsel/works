#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <cmath>

int main()
{
    constexpr unsigned WINDOW_WIDTH = 800;
    constexpr unsigned WINDOW_HEIGHT = 600;
    constexpr float BALL_SIZE = 40;

    sf::RenderWindow window(sf::VideoMode({WINDOW_WIDTH, WINDOW_HEIGHT}), "Wave Moving Ball");
    sf::Clock clock;
    sf::Clock clock2;
    float speedX = 100.f;

    sf::CircleShape ball(BALL_SIZE);
    ball.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        sf::Vector2f position = ball.getPosition();

        const float dt = clock.restart().asSeconds();
        position.x += speedX * dt;

        if ((position.x + 2 * BALL_SIZE >= WINDOW_WIDTH) && (speedX > 0))
        {
            speedX = -speedX;
        }
        if ((position.x < 0) && (speedX < 0))
        {
            speedX = -speedX;
        }

        const float time = clock2.getElapsedTime().asSeconds();
        constexpr float positionY = 350.f;
        constexpr float amplitudeY = 80.f;
        constexpr float periodY = 2;
        const float wavePhase = time * float(2 * M_PI);
        position.y = positionY + amplitudeY * std::sin(wavePhase / periodY);

        ball.setPosition(position);

        window.clear();
        window.draw(ball);
        window.display();
    }
}
