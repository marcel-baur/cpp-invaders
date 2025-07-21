#include "ship.hpp";
class HUD {
    public:
        HUD(Ship* ship);
        ~HUD();
        float ship_x;
        float ship_y;
        Ship* ship;
        void Draw();
};