#include <iostream>
#include <windows.h>
using namespace std;

void shellSort(int [], int);

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int tam;
	cout << "Digite el tamaño del arreglo:"; cin >>tam;
	int numeros[tam];
	for (int i=0;i<tam;i++){
		cout << "Digite el valor para "<<i+1<<": ";
		cin >> numeros[i];
	}
	shellSort(numeros,tam);
	for (int i =0 ; i < tam; i++){
		cout << numeros[i]<<" ";
	}
	return 0;
}

void shellSort(int A[], int n){
	n--;
	int cen,aux;
	int k = n+1;
	while(k>1){
		k/=2;
		cen = 1;
		while(cen == 1){
			cen = 0;
			int i = 0;
			while(i+k <= n){
				if (A[i+k] < A[i]){
					aux = A[i];
					A[i] = A[i+k];
					A[i+k] = aux;
					cen = 1;
				}
				i++;
			}
		}
	}
}