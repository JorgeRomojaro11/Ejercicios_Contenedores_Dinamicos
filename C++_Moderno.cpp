#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

auto cuadrado = [](int num) { return num * num; };

int main() {
    std::cout << "Cuadrado de 5: " << cuadrado(5) << std::endl;
    std::cout << "Números en el vector:" << std::endl;
    std::vector<int> numeros = {1, 2, 3, 4, 5};
    std::for_each(numeros.begin(), numeros.end(), [](int num) {
        std::cout << "- " << num << std::endl;
    });
}
