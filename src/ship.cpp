#include "ship.hpp";
#include "raylib.h";
#include <algorithm>;

Color yellow = {243, 214, 70, 255};
Ship::Ship() {
    x = 350.0f;
    y = 750.0f;
    score = 0;
    speed = 200.0f;
}

Ship::~Ship() {

}

void Ship::Shoot() {

}

void Ship::Draw() {
    DrawRectangleRoundedLines({x, y, 50, 30}, 0.1f, 5, 1, yellow);
    DrawText(TextFormat("Position: x: %02.02f, y: %02.02f", x, y), 80, 80, 20, YELLOW);
}

void Ship::HandleInput() {
    if (IsKeyDown(KEY_A)) {
        x = std::max(x - GetFrameTime() * speed, 60.0f);
        return;
    }
    if (IsKeyDown(KEY_D)) {
        x = std::min(x + GetFrameTime() * speed, 690.0f);
        return;
    }
    if (IsKeyDown(KEY_SPACE)) {
        Shoot();
        return;
    }
    /*
    if (IsKeyDown(KEY_S)) {
        y += GetFrameTime() * speed;
        return;
    }
    if (IsKeyDown(KEY_W)) {
        y -= GetFrameTime() * speed;
    }*/
}