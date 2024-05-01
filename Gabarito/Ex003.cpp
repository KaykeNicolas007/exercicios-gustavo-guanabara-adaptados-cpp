/*Ex003 - Crie um programa que leia dois números e mostre a soma entre eles.*/

#include <iostream>
using namespace std;

int main(){
    //Declarações
    int n1, n2;

    //Entrada de Dados
    cout << "\nDigite um numero: ";
    cin >> n1;
    cout << "Digite um segundo numero: ";
    cin >> n2;

    //Saída
    cout << "A soma entre " << n1 << " e " << n2 << " resulta em: " << n1 + n2 <<endl;
}
