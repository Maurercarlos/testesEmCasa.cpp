// Simulador de saída de notas de Caixa Eletronico

#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

int num;

int num1, num2, num3, num4;

cout << "Bem vindo ao sistema da Bank Automation S.A." << endl;

cout << "Digite o número que deseja: " << endl;
cout << &num1 << "1. Saque no caixa. " << endl;
cout << &num2 <<"2. Pagamento em cheque. " << endl;
cout << &num3 <<"3. Depósito sem cartão. " << endl;
cout << &num4 << "4. Desbloqueio de conta do celular, pelo caixa. " << endl; 

cin >> num;

if (num == &num1) {
    cout << "Saque no caixa." << endl;
} else if (num == &num2) {
    cout << "Pagamento em cheque." << endl;
} else if (num == &num3) {
    cout << "Depósito em cartão" << endl;
} else if (num == &num4) {
    cout << "Desbloqueio de conta do celular, pelo caixa" << endl;
} else {
    cout << "NÚMERO INVÁLIDO. Digite um número de 1 a 4." << endl;
}


return 0;

}