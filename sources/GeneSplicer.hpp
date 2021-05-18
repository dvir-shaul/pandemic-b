#include "Player.hpp"
//dispatcher can go anywhere
namespace pandemic
{
    class GeneSplicer : public Player
    {
        public:
            GeneSplicer(Board& b, City c) : Player(b, c, "GeneSplicer"){}

            Player& discover_cure(Color color);
    };
}