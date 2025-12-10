#include "raylib.h"

int main(){
    InitWindow(800, 450, "Ball Drawing 🌕");
    SetTargetFPS(60);

    int ballX = 400;
    int ballY = 200;

    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(LIGHTGRAY);

        DrawCircle(ballX, ballY, 40, RED); // (pos X ,Y, radius, color)

        DrawText("Yeh ball hai! 😆", 350, 50, 20, BLACK); // (text, pos X, Y, font size, color)

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
