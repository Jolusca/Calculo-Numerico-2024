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
        cout << "\nDigite o n�mero a ser convertido:\n";
        cin >> numero;
        cout << "\nqual op��o? \n 1- Bin�rio para decimal \n 2- Decimal para bin�rio\n";
        cin >> opcao;
        switch (opcao)
        {
        case 1:
            /* chamar Bin�rio para decimal*/
            convertido = binarioParaDecimal(numero);
            cout << "o n�mero em Decimal � " << convertido << endl;
            continue;
        case 2:
            convertido = decimalParaBinario(numero);
            cout << "o n�mero em Bin�rio � " << convertido << endl;
            continue;
        default:
            cout << "Op��o inv�lida!" <<endl;
            continue;
        }
    }
}