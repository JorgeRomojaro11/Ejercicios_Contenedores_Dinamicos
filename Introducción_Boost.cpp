#include <iostream>
#include <boost/lexical_cast.hpp>

int main() {
    std::string s = "12345";
    std::cout << "Conversión de cadena a número usando Boost.LexicalCast:" << std::endl;
    try {
        int i = boost::lexical_cast<int>(s);

        std::cout << "Número: " << i << std::endl;

    } catch (const boost::bad_lexical_cast& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << "Fin del programa." << std::endl;

    return 0;
}

