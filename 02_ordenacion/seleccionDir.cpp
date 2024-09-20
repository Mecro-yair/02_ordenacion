#include <iostream>
#include <windows.h>
using namespace std;

void SeleccionDir(int [], int );

int main() {
	SetConsoleOutputCP(CP_UTF8);
	int tam;
	cout << "Digite el tamaño del arreglo: "; cin>>tam;
	int A[tam];
	for(int i =0;i<tam;i++){
		cout << "Digite el valor para "<<i+1<<": ";
		cin >> A[i];
	}
	
	cout << "El arreglo ordenado queda de esta forma: ";
    SeleccionDir(A, tam);
    for (int i = 0; i < tam; i++) {
        cout << A[i] << " ";
    }
    return 0;
}

void SeleccionDir(int A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int menor = A[i];
        int k = i;
        for (int j = i + 1; j < n; j++) {
            if (A[j] < menor) {
                menor = A[j];
                k = j;
            }
        }
        A[k] = A[i];
        A[i] = menor;
    }
}