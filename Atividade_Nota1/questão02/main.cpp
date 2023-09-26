#include <iostream>
#include <vector>
#include <string>

using namespace std;

void insertionSort(string &nome) {
    
    int tamanhoPalavra = nome.length();
    
    for (int i = 1; i < tamanhoPalavra; i++) {
        char aux = nome[i];
        int j = i - 1;
        
        while (j >= 0 && nome[j] < aux) {
            nome[j + 1] = nome[j];
            j--;
        }
    
        nome[j + 1] = aux;
    }
}

int main() {

    string palavra = "pericles";

    insertionSort(palavra);

    cout << palavra << endl;

    return 0;

}
