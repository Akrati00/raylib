#include <raylib.h>
//must use neovim , go to def,search under word etc shortcuts by telescope are so good see neovim config for more
// snake case is good , pascal or camelcase can be used for types and struct
// there are mainly two ways of defining functions
// u define a struct take state in it and modify the state with function and other is u return the state with function return type former is  better for utility functions
// use formatter like clang format i currently use nvpro repo formatter but modify it as necessary(not important) leader+f works in my neovim config

int main()
{
  const int screenWidth  = 800;
  const int screenHeight = 450;
  InitWindow(screenWidth, screenHeight, "My Raylib Window");
  SetTargetFPS(60);
  while(!WindowShouldClose())
  {  // Detect window close button or ESC key
    // Update
    // Draw
    BeginDrawing();
    ClearBackground(RAYWHITE);  // Set background color to light gray
    EndDrawing();
  }

  // De-initialize and close the window
  CloseWindow();

  return 0;
}
