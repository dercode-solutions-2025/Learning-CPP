#include <iostream>
#include <string>
#include <list>

int main() {
    std::list<std::string> grid = {"H", "e", "l", "l", "o", " ", "W", "o", "r", "l", "d", "!"};
    for (const std::string& item : grid) {
        std::cout << item;
    }
    return 0;
}
