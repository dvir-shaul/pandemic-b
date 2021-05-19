#include "GeneSplicer.hpp"
using namespace std;

const int cards_of_cure = 5;

namespace pandemic{

    // can discover cure with 5 cards that are not the same color.
    Player& GeneSplicer::discover_cure(Color color){
        if(board.get_research_station().count(city) == 0){
        throw invalid_argument("There is no a research station at " + city_by_string.at(city));
        }
        if(cards_of_cure > card.size()){
            throw invalid_argument("You have only " + to_string(card.size()) + " " + colors_by_order.at(color) + " cards");
        }
        int counter = 0;
        for(auto c = card.begin(); c != card.end(); counter++){
            c = card.erase(c);
        }
        board.set_discovered_cure(color);
        return *this;
    }
};