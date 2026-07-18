#include <raylib.h>
#include "paddle.h"
#include "ball.h"

int main() {

    /*
    game load
    */

    // game window
    const int windowWidth = 800;
    const int windowHeight = 800;
    InitWindow(windowWidth, windowHeight, "Pong");

    // fps lock
    SetTargetFPS(60);

    // game objects
    Paddle playerPaddle(10, (float) windowHeight/2 - 12, 15, 100, 20, YELLOW);
    Ball ball(GetScreenWidth() / 2.0, GetScreenHeight() / 2.0, 5, 5, 10, WHITE);


    while (!WindowShouldClose()) {

        /*
        game update
        */

        ball.Update();

        if (IsKeyDown(KEY_W)) {
            playerPaddle.MoveUp();
        }
        if (IsKeyDown(KEY_S)) {
            playerPaddle.MoveDown();
        }

        /*
        game draw
        */
        BeginDrawing();
        ClearBackground(BLACK);
        playerPaddle.Draw();
        ball.Draw();


        EndDrawing();

    }

    CloseWindow();
}
