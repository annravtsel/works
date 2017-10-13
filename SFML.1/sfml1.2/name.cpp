#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()

{
    sf::RenderWindow window(sf::VideoMode({500, 500}), "Name");

    window.clear();

    sf::RectangleShape RC;
    RC.setSize({60, 20});
    RC.setRotation(0);
    RC.setPosition({50, 100});
    RC.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(RC);

    sf::RectangleShape RC2;
    RC2.setSize({20, 50});
    RC2.setRotation(0);
    RC2.setPosition({70, 120});
    RC2.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(RC2);

    sf::ConvexShape ParalGram;
    ParalGram.setRotation(0);
    ParalGram.setPosition({0, 0});
    ParalGram.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    ParalGram.setPointCount(4);
    ParalGram.setPoint(0, {130, 100});
    ParalGram.setPoint(1, {150, 100});
    ParalGram.setPoint(2, {130, 170});
    ParalGram.setPoint(3, {110, 170});
    window.draw(ParalGram);

    sf::ConvexShape ParalGram2;
    ParalGram2.setRotation(0);
    ParalGram2.setPosition({0, 0});
    ParalGram2.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    ParalGram2.setPointCount(4);
    ParalGram2.setPoint(0, {140, 100});
    ParalGram2.setPoint(1, {160, 100});
    ParalGram2.setPoint(2, {180, 170});
    ParalGram2.setPoint(3, {160, 170});
    window.draw(ParalGram2);

    sf::RectangleShape RC3;
    RC3.setSize({30, 10});
    RC3.setRotation(0);
    RC3.setPosition({130, 140});
    RC3.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(RC3);

    sf::RectangleShape RC4;
    RC4.setSize({60, 20});
    RC4.setRotation(0);
    RC4.setPosition({190, 100});
    RC4.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(RC4);

    sf::RectangleShape RC5;
    RC5.setSize({20, 30});
    RC5.setRotation(0);
    RC5.setPosition({210, 120});
    RC5.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(RC5);

    sf::RectangleShape RC6;
    RC6.setSize({60, 20});
    RC6.setRotation(0);
    RC6.setPosition({190, 150});
    RC6.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(RC6);

    window.display();

    sf::sleep(sf::seconds(15));
}