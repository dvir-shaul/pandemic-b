#include "Player.hpp"
//dispatcher can go anywhere
namespace pandemic{

    class Scientist : public Player{

        int chance_left;
        
        public:
            Scientist(Board& b, City c, int num) : Player(b, c, "Scientist"), chance_left(num){}

            Player& discover_cure(Color color);
    };
};