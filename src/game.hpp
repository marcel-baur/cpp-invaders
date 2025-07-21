#pragma once
class Game{
    public:
        Game();
        ~Game();
        void Draw();
        void Update();
        void HandleInput();
        bool running;
        int score;
    private:
        void Init();

};