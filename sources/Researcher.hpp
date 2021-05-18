#include "Player.hpp"
//dispatcher can go anywhere
namespace pandemic{

    class Researcher : public Player{

        public:
            Researcher(Board& b, City c) : Player(b, c, "Researcher"){}

            Player& discover_cure(Color color);
    };
};