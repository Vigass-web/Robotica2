#include <iostream>
#include <locale.h>

double potencia(double base, double expoente);

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    const double piGigante = 3.1415926535897932384626; // reduzido para praticidade
    
    float raio;
    
    std::cout << "Digite o raio do círculo: ";
    std::cin >> raio;
    
    double areaCirculo = piGigante * potencia(raio, 2);
    
    std::cout << "Área do círculo: " << areaCirculo << std::endl;
    
    return 0;
}

double potencia(double base, double expoente) {
    double resultado = 1;
    for (int contador = 0; contador < expoente; contador++) {
        resultado *= base;
    }
    return resultado;
}