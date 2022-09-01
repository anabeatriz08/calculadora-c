//Calculadora c++ com switch case

#include <iostream>
#include <locale.h> // biblioteca RESOLVE ACENTUA��O

using namespace std;

int main() {
    setlocale(LC_ALL, ""); // permite acentua��o

    int num1, num2, opcao, operacao;

    cout << "****** Calculadora ******" << endl;

    cout << "Primeiro n�mero: " << endl;
    cin >> num1;
    cout << "Segundo n�mero: " << endl;
    cin >> num2;

    cout << "Qual opera��o voc� deseja realizar?" << endl;
    cout << "1 - SOMA" << endl;
    cout << "2 - SUBTRA��O" << endl;
    cout << "3 - MULTIPLICA��O" << endl;
    cout << "4 - DIVIS�O" << endl;
    cout << " \n ";
    cin >> opcao;
    cout << " \n ";

    switch(opcao) {
        case 1:
            cout << "A soma �: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "A subtra��o �: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "A multiplica��o �: " << num1 * num2 << endl;
            break;
        case 4:
            cout << "A divis�o �: " << num1 / num2 << endl;
            break;
    }
    return 0;
}
