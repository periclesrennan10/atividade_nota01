#include <iostream>
#include <vector>
#include <string>

using namespace std;

void insertionSort(vector<string>& arr) {
    int n = arr.size();

    for (int i = 1; i < n; i++) {
        string aux = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > aux) {
            arr[j + 1] = arr[j];
            j--;
        }
    
        arr[j + 1] = aux;
    }
}

int main() {

    vector<string> nomes = {"Lucas", "Matheus", "Pedro", "Luis", "Pericles"};

    for (string n : nomes) {
        cout << n << " ";
    }
    cout << endl;

    insertionSort(nomes);

    for (string n : nomes) {
        cout << n << " ";
    }
    cout << endl;

    return 0;

}
