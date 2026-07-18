#pragma once
#include <raylib.h>

class Ball {

private:

    float x;
    float y;
    float speedX;
    float speedY;
    float radius;
    Color color;

public:

    Ball(float startX, float startY, float speedX, float speedY, float radius, Color color);
    void Draw();
    void Update();
};
