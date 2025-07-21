#include "raylib.h"
#include "hud.hpp"

HUD::HUD(Ship* ship) {
    ship = ship;
}

HUD::~HUD() {}

void HUD::Draw() {
    // DrawText(TextFormat("Position: x: %02.02f, y: %02.02f", ship->y, ship->speed), 80, 80, 20, YELLOW);
}