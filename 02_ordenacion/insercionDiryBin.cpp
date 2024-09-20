#include <iostream>
#include <windows.h>
using namespace std;
void insercionBin(int [],int );
void insercionDir(int [],int );
int main(){
	SetConsoleOutputCP(CP_UTF8);
	int tam,op;
	cout << "Digite el tamaño del arreglo: ";
	cin >>tam;
	int numeros[tam];
	for(int i=0;i<tam;i++){
		cout << "Digite el valor para "<<i+1<<": ";
		cin >> numeros[i];
	}
	tam--;
	cout << "Metodo de inserción\n"
		<< "1. Insercion directa.\n"
		<< "2. Insercion Binaria.\n";
	cin >> op;
	if (op==1){
		insercionDir(numeros,tam);
	}else if(op ==2){
		insercionBin(numeros,tam);
	}
	
	for(int i = 0; i<=tam;i++){
		cout << numeros[i]<< " ";
	}
	return 0;
}
void insercionDir(int A[],int n){
	int aux,k;
	for(int i= 1;i<=n;i++){
		aux = A[i];
		k = i -1;
		while(k>=0 && aux <A[k]){
			A[k+1] = A[k];
			k--;
		}
		A[k+1]=aux;
	} 
}
void insercionBin(int A[],int n){
	int aux,izq,der,m,j;
	for(int i = 1; i<=n;i++){
		aux = A[i];
		izq = 0;
		der = i-1;
		while(izq <= der){
			m = (izq+der)/2;
			if(aux < A[m]){
				der = m-1;
			}else{
				izq = m+1;
			}
		}
		j = i-1;
		while(j >=izq){
			A[j+1]= A[j];
			j--;
		}
		A[izq]=aux;
	}
}