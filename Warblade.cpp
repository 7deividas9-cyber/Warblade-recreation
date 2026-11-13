#include "raylib-cpp.hpp"
#include "src/entity.hpp"
#include "src/tools.hpp"
#include <vector>

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    // Texture/Sprite initializations ALWAYS goes AFTER window initialization
    InitWindow(screenWidth, screenHeight, "raylib [core] example - input keys");

    Player player;

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
 	    //----------------------------------------------------------------------------------
        //if (IsKeyDown(KEY_RIGHT)) ballPosition.x += 2.0f;
        //if (IsKeyDown(KEY_LEFT)) ballPosition.x -= 2.0f;
        //if (IsKeyDown(KEY_UP)) ballPosition.y -= 2.0f;
        //if (IsKeyDown(KEY_DOWN)) ballPosition.y += 2.0f;
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();
            ClearBackground(RAYWHITE);
            player.Draw();
		EndDrawing();
        //----------------------------------------------------------------------------------
    }
    return 0;
}
