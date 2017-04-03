#include <iostream>
#include <vector>
using namespace std;

/*
	Caso de teste passo a passo:
	troco = 26
	M = {1, 2, 5, 10, 20}

	Começando pela a maior moeda
	auxMoedas = 26/20 = 1
	troco = 26-1*20 = 6
	quantMoedas = 1

	auxMoedas =6/10 = 
	troco = 6-0*20 = 6
	quantMoedas = 1 + 0 = 1

	auxMoedas = 6/5 = 1
	troco = 6-1*5 = 1
	quantMoedas = 1+1 = 2

	auxMoedas = 1/1 = 1
	troco = 1-1*1 = 0
	quantMoedas = 2+1 = 3
*/
int numMoedas(vector<int>& moedas, int troco) {
	int quantMoedas = 0, auxMoedas, x;
	//Correto
	for(x = moedas.size()-1; x >= 0; x--){
		int auxMoedas = troco/moedas[x]; 
		troco -= auxMoedas*moedas[x]; 
		quantMoedas += auxMoedas;
	}
	return quantMoedas;
}

int main(int argc, char *argv[]){
	vector<int> moedas;
	int troco, quantidade, x, entrada;

    cout << "Informe a quantidade de moedas que tem disponível: ";
    cin >> quantidade;
    cout << endl << "Informe as moedas: " << endl;
    for(x = 0; x < quantidade; x++){
        cout << x+1 << "ª moeda: ";
        cin >> entrada;
        moedas.push_back(entrada);
    }
    cout << "Informe o troco: ";
    cin >> troco;

	cout << "A quantidade de moedas mínimas é: " << numMoedas(moedas, troco) << endl;
	return 0;
}
