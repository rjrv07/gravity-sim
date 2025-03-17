#include <SFML/Graphics.hpp>

int main() {
    auto window = sf::RenderWindow(sf::VideoMode({1500u, 800u}), "CMake SFML Project");
    window.setFramerateLimit(120);

    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }

        window.clear();
        window.display();
    }
}
