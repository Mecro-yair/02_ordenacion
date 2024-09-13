#include <iostream>
using namespace std;
void InterDirectoDer(int a[],int n);
void mostrarFuncion(int arreglo[],int tamanio);
int main(){
	int n;
	int op;
	cout << "Digite la capacidad de arreglo:"<<endl
	; cin >> n;
	int arreglo[n];
	int aux[n];
	
	for(int i = 0; i<n ; i++){
		cout << "Digite el valor para arreglo [ "<<i+1<<" ]: ";
		cin >> arreglo[i];
	}
	//copia de seguridad
	for(int i=0 ; i<n;i++){
		aux[i] = arreglo[i];
	}
	//menu
	do{
		cout << "Menu de opciones:\n"
			<<"1. Intercambio directo por la derecha .\n"
			<<"2. Intercambio directo izquierdo.\n"
			<<"3. Intercambio directo con señal.\n"
			<<"4. Intercambio directo bidireccional.\n"
			<<"0. Salir.\n";
		cin >> op;
		switch (op){
			case 1:
				InterDirectoDer(arreglo,n-1);
				mostrarFuncion(arreglo,n);
					
		}
	}while(op !=0);
	
	return 0;
}
void InterDirectoDer(int a[],int n){
	int aux = 0;
	for(int i =0;i<n-1;i++){
		for(int j = 0; j<n-i;j++){
			if (a[j] > a[j+1]){
				aux = a[j];
				a[j]= a[j+1];
				a[j+1]= aux;	
			}
		}
	}
}
void mostrarFuncion(int arreglo[],int tamanio){
	for(int i =0 ; i<tamanio; i++){
		cout << arreglo[i]<<" ";
	}
	cout << endl;
}