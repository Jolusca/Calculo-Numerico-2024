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
        /*declarando vari�veis*/
        int opcao, numero, convertido = 0;
        cout << "\nDigite o numero a ser convertido:\n";
        cin >> numero;
        cout << "\nqual opcao? \n 1- Binario para decimal \n 2- Decimal para binario\n";
        cin >> opcao;
        switch (opcao)
        {
        case 1:
            /* chamar Bin�rio para decimal*/
            convertido = binarioParaDecimal(numero);
            cout << "o numero em Decimal eh " << convertido << endl;
            continue;
        case 2:
            convertido = decimalParaBinario(numero);
            cout << "o numero em Binário eh " << convertido << endl;
            continue;
        default:
            cout << "Opcao invalida!" <<endl;
            continue;
        }
    }
}