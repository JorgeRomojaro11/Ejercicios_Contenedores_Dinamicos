#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros = {10, 20, 30, 40, 50};

    std::cout << "Iterando a través del vector de números:" << std::endl;
    for(const auto& numero : numeros) {
        std::cout << "- " << numero << std::endl;
    }

    std::cout << "Fin de la iteración." << std::endl;

    return 0;
}
