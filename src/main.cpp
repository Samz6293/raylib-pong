#include <raylib.h>
#include "paddle.h"

int main() {

    // game window
    const int windowWidth = 800;
    const int windowHeight = 800;
    InitWindow(windowWidth, windowHeight, "Pong");

    // fps lock
    SetTargetFPS(60);

    // game objects
    Paddle playerPaddle(10, (float) windowHeight/2 - 12, 15, 100, 20, YELLOW);

    while (!WindowShouldClose()) {

        if (IsKeyDown(KEY_W)) {
            playerPaddle.MoveUp();
        }
        if (IsKeyDown(KEY_S)) {
            playerPaddle.MoveDown();
        }

        BeginDrawing();
        ClearBackground(WHITE);
        playerPaddle.Draw();


        EndDrawing();

    }

    CloseWindow();
}
