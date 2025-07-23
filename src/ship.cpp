#include "ship.hpp";
#include "raylib.h";
#include <algorithm>;
#include <iostream>
#include <vector>

Color yellow = {243, 214, 70, 255};
Ship::Ship() {
    position.x = 350.0f;
    position.y = 750.0f;
    score = 0;
    speed = 200.0f;
    rate = .10f;
}

Ship::~Ship() {

}

void Ship::Shoot() {
    if (this->lastShot + this->rate > GetTime()) {
       return; 
    }
    bullets.push_back(ShipBullet({position.x + 25, position.y - 30 / 2}));
    this->lastShot = GetTime();
}

void Ship::Draw() {
    DrawRectangleRoundedLines({position.x, position.y, 50, 30}, 0.1f, 5, 1, yellow);
    for (int i = 0; i < this->bullets.size(); i++) {
        this->bullets[i].Update();
        this->bullets[i].Draw();
        if (this->bullets[i].Offscreen()) {
            this->bullets.erase(this->bullets.begin() + i);
        }
    }
}

void Ship::HandleInput() {
    if (IsKeyDown(KEY_A)) {
        position.x = std::max(position.x - GetFrameTime() * speed, 60.0f);
    }
    if (IsKeyDown(KEY_D)) {
        position.x = std::min(position.x + GetFrameTime() * speed, 690.0f);
    }
    if (IsKeyDown(KEY_SPACE)) {
        Shoot();
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