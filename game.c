#include <raylib.h>

typedef struct {
    int x;
    int y;
    int width;
    int height;
} Platform;

int main(){
    InitWindow(800, 450, "Rapid Roll Start 🌕");
    SetTargetFPS(60);

    int ballX = 400;
    int ballY = 200;
    int speed = 4;

    // 🟩 Ek simple platform
    Platform p;
    p.x = 200;
    p.y = 300;
    p.width = 200;
    p.height = 20;

    while (!WindowShouldClose()){

        // --- MOVEMENT CONTROL ---
        if(IsKeyDown(KEY_RIGHT)) ballX += speed;
        if(IsKeyDown(KEY_LEFT))  ballX -= speed;
    
        // Gravity constant (ball falls down)
        ballY += 3;  // ↓ gravity
    
        // --- COLLISION (Ball standing on platform) ---
        if (ballY + 20 >= p.y &&          // Ball bottom reaches platform Y
            ballX >= p.x &&               // Ball within platform left
            ballX <= p.x + p.width) {     // Ball within platform right
            
            ballY = p.y - 20;             // Stop ON platform
        }
    
        BeginDrawing();
        ClearBackground(BLACK);
    
        DrawRectangle(p.x, p.y, p.width, p.height, GREEN); // Platform
        DrawCircle(ballX, ballY, 20, YELLOW);              // Ball
    
        EndDrawing();
    }
    

    CloseWindow();
    return 0;
}
