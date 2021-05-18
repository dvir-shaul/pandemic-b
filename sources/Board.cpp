#include "Board.hpp"

using namespace std;

namespace pandemic{ 

    int &Board::operator[](City city){
        return this->disease_level[city];
    }

    std::ostream& operator<<(ostream& os, Board& board){
        for(auto& level : board.disease_level){
            os << "[" << city_by_string.at(level.first) << "," << level.second << "]" << endl;
        }
        
        for(const auto& station : board.research_station){
            os << "there is a Research stations at: " << city_by_string.at(station) << endl;
        }
        for(size_t i = 0; i < 4; i++){
            os << "Color of the cure is: " << colors_by_order.at(i)<<endl;
        }
        return os;
    }

    bool Board::is_clean(){
        for(auto& any_city : disease_level){
            if(any_city.second != 0){
                return false;
            }
        }
        return true;
    }

    // remove the cures that discovered.
    void Board::remove_cures(){
        discovered_cure.clear();
    }

    // remove the research satations that built.
    void Board::remove_stations(){
        this->research_station.clear();
    }

    // build a research station.
    void Board::build(City city){
        this->research_station.insert(city);
    }

    // discover a cure.
    void Board::set_cure(Color color){
        this->discovered_cure.insert(color);
    }
};