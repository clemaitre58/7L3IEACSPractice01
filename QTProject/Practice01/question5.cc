#include "question5.h"


void display_gate(const int & logic_operator) {
    switch(logic_operator) {
    case AND :
        display_and();
        break;
    case OR :
        display_or();
        break;
    }
}

void display_and() {
    std::cout << "i" << "\t" << "j" << "\t" << "z" << "\t" << "=" << "\t" << "result" << std::endl;
    for (int i = 0; i <= 1; i++)
        for(int j = 0; j <= 1; j++)
            for(int z = 0; z <= 1; z++) {
                std::cout << i << "\t" << j << "\t" << z << "\t" << "=" << "\t" << int(i & j & z) << std::endl;
            }
    std::cout << "\n";
}

void display_or() {
    std::cout << "i" << "\t" << "j" << "\t" << "z" << "\t" << "=" << "\t" << "result" << std::endl;
    for (int i = 0; i <= 1; i++)
        for(int j = 0; j <= 1; j++)
            for(int z = 0; z <= 1; z++) {
                std::cout << i << "\t" << j << "\t" << z << "\t" << "=" << "\t" << int(i | j | z) << std::endl;
            }
    std::cout << "\n";
}
