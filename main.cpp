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
//exercice 1.4
    char touche = 's';
    switch (touche) {
        case 'z':
            std::println("avancer");
            break;
        case 's':
            std::println("reculer");
            break;
        case 'q':
            std::println("gauche");
            break;
        case 'd':
            std::println("droite");
        default:
            std::println("touche inconnue");
    }
    //exercice 1.5
    int compte = 10;
    while (compte > 0) {
        std::println("{}", compte);
        compte--;
    }
    std::println("decollage");
//exercices 1.6
    int choix = 0;
    do {
        std::cin >> choix;
    }while (choix < 1 || choix > 3 );
    std::println("merci");
//exercice 1.7
    
    return 0;
}
