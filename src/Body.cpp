//
// Created by Roelie Rossouw on 2025/03/14.

#include "Body.h"


/**
 *
 * @param pos initial position
 * @param vel initial velocity
 * @param mass mass of the body
 */
Body::Body(sf::Vector2f pos, sf::Vector2f vel, float mass) {
    this->pos = pos;
    this->vel = vel;
    this->mass = mass;
}

void Body::update(std::pmr::vector<Body> &bodies) {
    for (auto &b : bodies) {
        if (this == &b) continue;
        this->vel += G * b.mass() / (b.getPos() - this->pos).lengthSquared();
    }
    pos += vel;
}
