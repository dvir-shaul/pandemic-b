#include "Player.hpp"
//dispatcher can go anywhere
namespace pandemic{

    class Virologist : public Player{

        public:
            Virologist(Board& b, City city) : Player(b, city, "Virologist"){}
            Player& treat(City _city);
    };
};