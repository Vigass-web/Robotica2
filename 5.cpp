#include <iostream>
#include <iomanip>
#include <locale.h>
#include <math.h>

int main() {
    using namespace std;
    setlocale(LC_ALL, "Portuguese");
    
    int idade;
    char nome[20];
    
    cout << "Digite seu nome" << endl;
    cin.getline(nome, 20);
    cout << "Digite sua idade" << endl;
    cin >> idade;
    
    if ((idade > 16 && idade < 18) || idade > 65) {
        cout << "Olá " << nome << ", você vota se quiser, pois tem " << idade << endl;
    } else if (idade >= 18 && idade <= 65) {
        cout << "Olá " << nome << ", o voto é obrigatório para você, pois tem " << idade << endl;
    } else {
        cout << "Olá " << nome << ", você ainda não pode votar, pois tem " << idade << " anos." << endl;
    }

    return 0;
}