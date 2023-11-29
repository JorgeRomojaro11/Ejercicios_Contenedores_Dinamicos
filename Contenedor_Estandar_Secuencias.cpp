#include <iostream>
#include <list>
#include <stack>

int main() {
    std::list<float> lista = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::stack<float, std::list<float>> pila(lista);
    std::cout << "Contenido de la pila (en orden inverso):" << std::endl;

    while (!pila.empty()) {
        std::cout << "- Elemento en la cima: " << pila.top() << std::endl;
        pila.pop();
    }
    std::cout << "Fin del proceso de la pila." << std::endl;

    return 0;
}


