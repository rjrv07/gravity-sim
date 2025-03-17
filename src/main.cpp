#include <random>
#include <SFML/Graphics.hpp>

float getRandomSignedFloat(float min = -1000.f, float max = 1000.f) {
    static std::random_device rd; // Seed for random number engine
    static std::mt19937 gen(rd()); // Mersenne Twister PRNG
    std::uniform_real_distribution<float> dist(min, max); // Uniform distribution

    return dist(gen); // Generate a random float in [min, max]
}

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
