#include <iostream>

int main(){
    /*int abc;
    abc=4;
    abc=abc+2;
    int a;
    std::cout << "a=" << a << ".\n";
    std::printf("перменная: %d\n", abc);
    std::cout << "abc=" << abc << "\n";

    int b;
    std::cin >> b;
    std::cout << "часы:" << b/60 << "\nминуты:" << b%60 << "\n";
    return 0;

    int k;
    std::cin >>k;
    if ((k%2)==0) {
        std::cout << "четное \n";
    }
    else {
        std::cout << "нечетное \n";
    }
    return 0;

    int attack;
    float multiplier;
    int def;
    std::cin >> attack >> multiplier >> def;
    std::cout << attack*multiplier-def << "\n";
    return 0;

    int d;
    std::cin >> d;
    while (d>0) {
        std::cout << "привет: \n";
        d=d-1;
    }*/

    int f;
    int g;
    std::cin >> f >> g;
    while (f+1>0) {
        std::cout << "#";
        if (f==1) {
            std::cout << "\n";
        }
        f=f-1;
    }
    while (g>0) {
        std::cout << "#";
        while (f>0) {
            std::cout << " ";
        }
        g=g-1;
    }
}