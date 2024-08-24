/* Copy item from one Container to other Container */

#include<iostream>
#include<string>
#include<tuple>
#include<vector>

#include<algorithm>
#include<map>
#include<iterator>

namespace std{
    ostream& operator<<(ostream &os, const pair<int, string> &p){
        return os << "(" << p.first << " -> " << p.second << ")";
    }
}

int main(){
    std::map<int, std::string> otherContainer;
    std::vector<std::pair<int, std::string>> firstContainer{
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}
    };

    copy_n(begin(firstContainer), 4, inserter(otherContainer, begin(otherContainer)));

    // Print the vector
    std::cout << "Vector v:" << std::endl;
    for(const auto& p : firstContainer) {
        std::cout << "(" << p.first << " -> " << p.second << ")"<< std::endl;
    }

    // Print the map (new-lines) slower
    std::cout << "Map m:" << std::endl;
    for(const auto& p : otherContainer) {
        std::cout << p.first << " -> " << p.second << std::endl;
    }

    // Print the map (single-line) faster
    auto shell_it(std::ostream_iterator<std::pair<int, std::string>>{std::cout, "\n"});
    copy(begin(otherContainer), end(otherContainer), shell_it);

}