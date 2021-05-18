#include "Player.hpp"
//OperationsExpert  can build new reaeaserch
namespace pandemic
{
    class OperationsExpert : public Player
    {
        public:
            OperationsExpert(Board& b, City c) : Player(b, c, "OperationsExpert"){}

            Player& build();
    };
}