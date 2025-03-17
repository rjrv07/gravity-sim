//
// Created by Roelie Rossouw on 2025/03/14.
//

#ifndef BODY_H
#define BODY_H
#include <vector>

#include "SFML/System/Vector2.hpp"


class Body {
    sf::Vector2f pos;
    sf::Vector2f vel;
    float mass = 0.f;

public:
    static constexpr float G = 6.6743e-11;

    Body(sf::Vector2f pos, sf::Vector2f vel, float mass);

    void update(std::pmr::vector<Body> &bodies);

    [[nodiscard]] sf::Vector2f getPos() const { return pos; }
    [[nodiscard]] float getMass() const { return mass; }
};


#endif //BODY_H
