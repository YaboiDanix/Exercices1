#include <iostream>
#include <print>
#include <string>


int main() {
    int pv = 0;
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
    //exercice 1.3
    if (pv >= 75) {
        std::println("Point de vie intact");
    }else if (pv<75 && pv >= 41)
    {
        std::println("egratinure");
    }else if (pv < 41 && pv >= 1) {
        std::println("point de vie critique");
    }else if (pv <= 0) {
        std::println("mort");
    }





    return 0;
}
