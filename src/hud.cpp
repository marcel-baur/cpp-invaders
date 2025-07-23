#include "raylib.h"
#include "hud.hpp"

HUD::HUD(Ship* ship) {
    this->ship = ship;
}

HUD::~HUD() {}

void HUD::Draw() {
    DrawText(TextFormat("Position: x: %02.02f, y: %02.02f", ship->position.x, ship->position.y), 80, 80, 20, YELLOW);
}