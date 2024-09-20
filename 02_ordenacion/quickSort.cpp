#include <iostream>
using namespace std;

void quickSort(int [],int );
void reduce(int [], int , int);

int main(){
	int tam;
	
	cout << "Digite el tamaño del arreglo:"; cin >>tam;
	int numeros[tam];
	for (int i=0;i<tam;i++){
		cout << "Digite el valor para "<<i+1<<": ";
		cin >> numeros[i];
	}
	quickSort(numeros,tam-1);
	cout <<"Arreglo ordenado:"<<endl;
	for(int i =0 ;i<tam;i++){
		cout << numeros[i]<< " ";
	}
	return 0;
}
void quickSort(int A[],int n){
	reduce(A, 0 ,n);
}
void reduce(int A[],int inicio,int final){
	int cen, pos,aux;
	int izq = inicio;
	int der = final;
	pos = izq;
	cen = 1;
	while(cen == 1){
		cen = 0;
		while((A[pos] <= A[der]) && (pos != der)){
			der--;
		}
		if (pos != der){
			aux = A[pos];
			A[pos]= A[der];
			A[der]=aux;
			pos = der;
			//recorrido de izquierda a derecha
			while((A[pos] >= A[izq]) && (pos != izq)){
				izq++;
			}
			if (pos != izq){
				aux = A[pos];
				A[pos] = A[izq];
				A[izq] = aux;
				pos = izq;
				cen =1;
			}
		}
		if (pos-1 > inicio){
			reduce(A,inicio,pos-1);
		}
		if (pos+1<final){
			reduce(A, pos+1, final);
		}
	}
}
