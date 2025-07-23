#include "bullet.hpp";
#include "raylib.h";
#include <iostream>

ShipBullet::ShipBullet(Vector2 init) {
    this->damage = 5;
    this->position = init;
    this->speed = 300.0f;
}

ShipBullet::~ShipBullet() {
}

void ShipBullet::Update() {
    this->position.y = this->position.y - GetFrameTime() * this->speed;
}

void ShipBullet::Draw() {
    DrawCircle(this->position.x, this->position.y, 5.0f, RED);
}

bool ShipBullet::Offscreen() {
    if (this->position.y < 0) {
        return true;
    }
    return false;
}


