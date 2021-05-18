#include "Player.hpp"
//FieldDoctor can treat any city that neighbouring his city
namespace pandemic
{
    class FieldDoctor : public Player
    {
        public:
            FieldDoctor(Board& b, City c) : Player(b, c, "FieldDoctor"){}

            Player& treat(City city);
    };
}