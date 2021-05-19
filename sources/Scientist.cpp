#include "Scientist.hpp"

using namespace std;

namespace pandemic{

    // can discover cure that he have less than 5 cards.
    Player& Scientist::discover_cure(Color color) {
    if(board.get_research_station().count(city) == 0){
        throw invalid_argument("There isnt a research station at "+ city_by_string.at(city));
    }
    int counter = 0;
    for(const auto& key : card){
        if(cities_color.at(key) == color){
            counter++;
        }
    }
    if(counter < chance_left){
        throw invalid_argument("player have only " + to_string(counter) + " color " + colors_by_order.at(color) + " cards");
    }
    counter = 1;
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