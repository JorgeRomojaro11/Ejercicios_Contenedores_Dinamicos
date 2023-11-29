#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numeros = {50, 20, 60, 10, 30, 40};
    std::sort(numeros.begin(), numeros.end());
    std::cout << "Números ordenados de manera ascendente:" << std::endl;

    for (int num : numeros) {
        std::cout << "- " << num << std::endl;
    }
    int maxNum = *std::max_element(numeros.begin(), numeros.end());


