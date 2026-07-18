#include "ball.h"
#include <raylib.h>

Ball::Ball (float startX, float startY, float speedX, float speedY, float radius, Color color) {
    x = startX;
    y = startY;
    this->speedX = speedX;
    this->speedY = speedY;
    this->radius = radius;
    this->color = color;
}

void Ball::Update() {

    x += speedX;
    y += speedY;

    if (y + radius >= GetScreenHeight() || y - radius <= 0) {
        speedY *= -1;
    }
}

void Ball::Draw() {
    DrawCircle( (int) x, (int) y, radius, color);
}
