#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()

{
    sf::RenderWindow window(sf::VideoMode({300, 300}), "House");

    window.clear();

    sf::RectangleShape RC;
    RC.setSize({160, 110});
    RC.setRotation(0);
    RC.setPosition({70, 130});
    RC.setFillColor(sf::Color(0x8B, 0x45, 0x13));
    window.draw(RC);

    sf::ConvexShape trapeze;
    trapeze.setPosition({0, 0});
    trapeze.setFillColor(sf::Color(0x80, 0x0, 0x0));
    trapeze.setPointCount(4);
    trapeze.setPoint(0, {100, 80});
    trapeze.setPoint(1, {200, 80});
    trapeze.setPoint(2, {250, 130});
    trapeze.setPoint(3, {50, 130});
    window.draw(trapeze);

    sf::RectangleShape RC2;
    RC2.setSize({30, 70});
    RC2.setRotation(0);
    RC2.setPosition({90, 170});
    RC2.setFillColor(sf::Color(0x0, 0x0, 0x0));
    window.draw(RC2);

    sf::RectangleShape RC3;
    RC3.setSize({10, 35});
    RC3.setRotation(0);
    RC3.setPosition({185, 75});
    RC3.setFillColor(sf::Color(0x69, 0x69, 0x69));
    window.draw(RC3);

    sf::CircleShape c1(4);
    c1.setPosition({190, 55});
    c1.setFillColor(sf::Color(0x80, 0x80, 0x80));
    window.draw(c1);

    sf::RectangleShape RC4;
    RC4.setSize({20, 15});
    RC4.setRotation(0);
    RC4.setPosition({180, 60});
    RC4.setFillColor(sf::Color(0x69, 0x69, 0x69));
    window.draw(RC4);

    sf::CircleShape c2(6);
    c2.setPosition({193, 45});
    c2.setFillColor(sf::Color(0x80, 0x80, 0x80));
    window.draw(c2);

    sf::CircleShape c3(7);
    c3.setPosition({197, 34});
    c3.setFillColor(sf::Color(0x80, 0x80, 0x80));
    window.draw(c3);

    sf::CircleShape c4(8);
    c4.setPosition({203, 21});
    c4.setFillColor(sf::Color(0x80, 0x80, 0x80));
    window.draw(c4);

    window.display();

    sf::sleep(sf::seconds(15));
}