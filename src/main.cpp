#include "raylib.h"
#include <iostream>
#include "ship.hpp"
#include "hud.hpp"

#pragma region imgui
#include "imgui.h"
#include "rlImGui.h"
#include "imguiThemes.h"
#pragma endregion



int main(void)
{
	Ship ship = Ship();
	HUD hud = HUD(&ship);
	Color grey = {29, 29, 27, 255};
	Color yellow = {243, 214, 70, 255};
	int offset = 50;
	int wHeight = 700;
	int wWidth = 750;

	InitWindow(wWidth + offset, wHeight + 2 * offset, "Space Invaders");

	// Texture2D ship = LoadTexture("Graphics/spaceship.png");
	SetTargetFPS(60);
	while (WindowShouldClose() == false) {
		BeginDrawing();
		ship.Draw();
		ship.HandleInput();
		hud.Draw();
		ClearBackground(grey);
		DrawRectangleRoundedLines({10, 10, 780, 780}, 0.18f, 20, 2, yellow);
		DrawLineEx({25, 730}, {775, 730}, 3, yellow);

		EndDrawing();
	}
	CloseWindow();

}