/*Ex002 - Faça um programa que leia o nome de uma pessoa e mostre uma
mensagem de boas-vindas.*/

#include <iostream>
using namespace std;

int main(){
    //Declarações
    string nome;
    
    //Entrada de Dados
    cout << "\nDigite o seu nome: ";
    cin >> nome;

    //Saída
    cout << "Seja muito bem vindo, " << nome << "!\n";
}
