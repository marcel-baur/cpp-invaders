#pragma once
#include "bullet.hpp"
#include "raylib.h"
#include <vector>
class Ship {
    public:
        Ship();
        ~Ship();
        void Draw();
        void Update();
        void HandleInput();
        void Shoot();
        int score;
        float speed;
        Vector2 position;
        std::vector<ShipBullet> bullets;
        double rate;
    private:
        void Init();
        double lastShot;

};