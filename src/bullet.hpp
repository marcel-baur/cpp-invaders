#include <vector>
#include "raylib.h"

class ShipBullet {
    public:
        ShipBullet(Vector2 init);
        ~ShipBullet();
        int damage;
        void Update();
        void Draw();
        bool Offscreen();
    
    private:
        Vector2 position;
        float speed;
};