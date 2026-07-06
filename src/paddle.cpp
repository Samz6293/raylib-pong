#include "paddle.h"

Paddle::Paddle (float startX, float startY, float startWidth, float startHeight, float startSpeed, Color startColor) {

    x = startX;
    y = startY;
    width = startWidth;
    height = startHeight;
    speed = startSpeed;
    color = startColor;
}

void Paddle::Draw() {
    DrawRectangle( (int) x, (int) y, (int) width, (int) height, color);
}
