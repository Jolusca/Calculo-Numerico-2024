#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int decimalParaBinario(int numero){
    int numeroBinario = 0;
    int digito = 1;
    while(numero>0){
        numeroBinario += (numero%2)*digito;
        numero /=2;
        digito *=10;
    }
    return numeroBinario;
}

int binarioParaDecimal(int numero){
    int numeroDecimal = 0;
    int expoente = 0;
    while (numero!=0){
        int digito = numero%10;
        numeroDecimal += digito*pow(2,expoente);
        numero /=10; //remove o ultimo digito
        expoente++;
    }
    return numeroDecimal;

}

int main(int argc, char const *argv[])
{
    while (true){
        setlocale(LC_ALL, "Portuguese");
        /*declarando variáveis*/
        int opcao, numero, convertido = 0;
        cout << "\nDigite o número a ser convertido:\n";
        cin >> numero;
        cout << "\nqual opção? \n 1- Binário para decimal \n 2- Decimal para binário\n";
        cin >> opcao;
        switch (opcao)
        {
        case 1:
            /* chamar Binário para decimal*/
            convertido = binarioParaDecimal(numero);
            cout << "o número em Decimal é " << convertido << endl;
            continue;
        case 2:
            convertido = decimalParaBinario(numero);
            cout << "o número em Binário é " << convertido << endl;
            continue;
        default:
            cout << "Opção inválida!" <<endl;
            continue;
        }
    }
}