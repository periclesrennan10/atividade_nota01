#include <iostream>
#include <string>
using namespace std;


void selectionSort(string nomes[], int n) {
	
	string aux;
	
    for (int i = 0; i < n - 1; i++) {
        int menorIndex = i;
        
        for (int j = i + 1; j < n; j++) {
            if (nomes[j].length() < nomes[menorIndex].length()) {
                menorIndex = j;
            }
        }
        if (menorIndex != i) {
            string aux = nomes[i];
            nomes[i] = nomes[menorIndex];
            nomes[menorIndex] = aux;
        }
    }
}

int main() {
    int n;

    cout << "Quantos nomes deseja ordenar? ";
    cin >> n;
    
    string nomes[n];

    for (int i = 0; i < n; i++) {
        cout << "Digite o nome " << i + 1 << ": ";
        cin >> nomes[i];
    }

    selectionSort(nomes, n);

    cout << "Nomes ordenados pelo tamanho:" << endl;
    for (int i = 0; i < n; i++) {
        cout << nomes[i] << endl;
    }

    return 0;
}



