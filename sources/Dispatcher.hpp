#include "Player.hpp"
//dispatcher can go anywhere
namespace pandemic
{
    class Dispatcher : public Player
    {
        public:
            Dispatcher(Board& b, City c) : Player(b, c, "Dispatcher"){}

            Player& fly_direct(City city);
    };
}