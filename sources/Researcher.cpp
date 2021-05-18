#include "Researcher.hpp"
using namespace std;

const int cards_of_cure = 5;

namespace pandemic{

    // can discover a cure without a research statiokn at the city.
    Player& Researcher::discover_cure(Color color){
        int counter = 0;
        for(const auto& key : card){
            if(cities_color.at(key) == color){
                counter++;
            }
        }
        if(counter < cards_of_cure){
            throw std::invalid_argument("You have only "+std::to_string(counter)+" "+ colors_by_order.at(color) + " cards");
        }
        counter = 0;
        for(auto c = card.begin(); c != card.end(); counter++){
            if(cities_color.at(*c) == color) {
                c = card.erase(c);
            }
            else {
                ++c;
            }
        }
        board.set_discovered_cure(color);
        return *this;
    }
};