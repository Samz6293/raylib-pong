#include "paddle.h"
#include <raylib.h>

const float PADDING = 10;

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

void Paddle::MoveUp() {

    y -= speed;
    if (y < PADDING) {
        y = PADDING;
    }
}

void Paddle::MoveDown() {

    y += speed;
    if (y+height+PADDING > GetScreenHeight()) {
        y = GetScreenHeight() - height - PADDING;
    }
}
