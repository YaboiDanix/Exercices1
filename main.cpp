#include <iostream>
#include <print>
#include <string>


int main() {
    int pv = 0;
    std::println("PV : {}", pv);
    //exercice 1.1
    std::println("exercice 1.1");
    if (pv == 0) {
        std::println("game over");
    }
    //exercice 1.2
    std::println("exercice 1.2");
    int munitions = 7;
    if (munitions % 2) {
        std::println("munitions est impair");
    }
    else
    {
        std::println("munitions est pair");
    }
    //exercice 1.3
    std::println("exercice 1.3");
    if (pv >= 75) {
        std::println("Point de vie intact");
    }else if (pv<75 && pv >= 41)
    {
        std::println("egratinure");
    }else if (pv < 41 && pv >= 1)
    {
        std::println("point de vie critique");
    }else if (pv <= 0)
    {
        std::println("mort");
    }
//exercice 1.4
    std::println("exercice 1.4");
    char touche = 'z';
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
    std::println("exercice 1.6");
    int choix = 0;
    do {
        std::cin >> choix;
    }while (choix < 1 || choix > 3 );
    std::println("merci");
//exercice 1.7
    std::println("exercice 1.7");
    for (int l = 1; l <= 10; l++) {
        std::println("7 * {} = {}", l, 7*l);
    }
    for (int l =10; l>=1 ;l--) {
        std::println("7 * {} = {}", l, 7*l);
    }
    //exercice 1.8
    std::println("exercice 1.8");
    int b = 1;
    while (b < 100) {
        std::println("{}", b);
        b++;
        if (b / 17) {
            break;
        }
    }
    int c = 0;
    while (c < 30) {
        c++;
        if (c % 3 == 0) {
            continue;
        }
        std::println("{}", c);
    }
//exercice 1.9
        std::println("exercice 1.9");
        for (int a = 1; a < 30 ;a++) {
            if (a % 3 == 0 && a % 5 == 0) {
            std::println("FizzBuzz");
            }else if (a % 3 == 0) {
                std::println("Fizz");
            }else if (a % 5 == 0) {
                std::println("Buzz");
            }
            std::println("{}", a);
        }

    return 0;
}
