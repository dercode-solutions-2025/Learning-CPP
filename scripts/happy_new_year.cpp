#include <iostream>
#include <stdio.h>
#include <chrono>
#include <thread>
using namespace std;
int x = 0;
int main() {
    do {
        std::this_thread::sleep_for(std::chrono::seconds(x));
        x++;
    } while(x < 11);
    printf("Happy New Year!");
}
