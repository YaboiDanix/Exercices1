#include <iostream>
#include <print>
#include <string>


int main() {
    int pv = 42 ;
    std::println("PV : {}", pv);
    //exercice 1.1
    if (pv == 0) {
        std::println("game over");
    }
    //exercice 1.2
    int munitions = 7;
    if (munitions % 2) {
        std::println("munitions est impair");
    }
    else
    {
        std::println("munitions est pair");
}




    return 0;
}
