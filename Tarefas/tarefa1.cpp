// Métodos Numéricos 1 - Tarefa 1
// Louis Ian - 402525

#include <iostream>
#include <cmath>

using namespace std;

int binarioParaDecimal(int numBin){
	int decimal = 0;
	int expoente = 0;

	while(numBin > 0){
		decimal += pow(2,expoente) * (numBin % 10);
		numBin /= 10;
		expoente++;
    }

	return decimal;
}

int decimalParaBinario(int numDec){
	int binario = 0;
    int expoente = 0;

	while(numDec > 0){
		binario += pow(10,expoente)*(numDec % 2);
		numDec /= 2;
		expoente += 1;
    }

	return binario;
}

int main(){

    cout.precision(2);
    cout.setf(ios::fixed);

    int binario = 0, decimal = 0, conversao = 0, resultado = 0;    

    cout << "\n    OPCOES\n\n1 - decimal -> binario\n2 - binario -> decimal\n\n";

    cin >> conversao;

    if( conversao == 1 ){
        cout << "\ndecimal: ";
        cin >> decimal;

        resultado = decimalParaBinario(decimal);
    } else if ( conversao == 2 ){
        cout << "\nbinario: ";
        cin >> binario;

        resultado = binarioParaDecimal(binario);
    }

    cout << resultado;

    return 0;
}