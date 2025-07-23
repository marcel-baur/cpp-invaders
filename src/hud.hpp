#include "ship.hpp";
class HUD {
    public:
        HUD(Ship* ship);
        ~HUD();
        Ship* ship;
        void Draw();
};