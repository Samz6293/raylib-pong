#pragma once
#include <raylib.h>

class Paddle {
private:

    // The paddle's internal state. Only the paddle can touch these.
    float x;
    float y;
    float width;
    float height;
    float speed;
    Color color;

public:

    // The Constructor: This runs exactly once when a paddle is created.
    // It demands starting values so it can assign them to the private variables above.
    Paddle(float startX, float startY, float startWidth, float startHeight, float startSpeed, Color startColor);

    // The Interface: Actions the main game loop is allowed to ask the paddle to do.
    void Draw();
    void MoveUp();
    void MoveDown();
};
