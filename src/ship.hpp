#pragma once
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
        float x;
        float y;
    private:
        void Init();

};