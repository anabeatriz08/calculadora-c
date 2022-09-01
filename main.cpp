//Calculadora c++ com switch case

#include <iostream>
#include <locale.h> // biblioteca RESOLVE ACENTUAÇÃO

using namespace std;

int main() {
    setlocale(LC_ALL, ""); // permite acentuação

    int num1, num2, opcao, operacao;

    cout << "****** Calculadora ******" << endl;

    cout << "Primeiro número: " << endl;
    cin >> num1;
    cout << "Segundo número: " << endl;
    cin >> num2;

    cout << "Qual operação você deseja realizar?" << endl;
    cout << "1 - SOMA" << endl;
    cout << "2 - SUBTRAÇÃO" << endl;
    cout << "3 - MULTIPLICAÇÃO" << endl;
    cout << "4 - DIVISÃO" << endl;
    cout << " \n ";
    cin >> opcao;
    cout << " \n ";

    switch(opcao) {
        case 1:
            cout << "A soma é: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "A subtração é: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "A multiplicação é: " << num1 * num2 << endl;
            break;
        case 4:
            cout << "A divisão é: " << num1 / num2 << endl;
            break;
    }
    return 0;
}
