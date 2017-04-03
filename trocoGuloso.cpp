#include <iostream>
#include <vector>
using namespace std;

int numMoedas(vector<int>& moedas, int troco) {
	int quantMoedas = 0, auxMoedas, x;
	
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