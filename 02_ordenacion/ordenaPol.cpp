#include <iostream>
using namespace std;


struct monomio{
	int coef;
	int exp;
};

void ordenaPol(int,monomio[]);

int main(){
	int n;
	cout << "Digite la cantidad de datos a almacenar:\n"; cin >> n;
	monomio ter[n];
	for(int i =0;i<n;i++){
		cout << "Digite el coeficiente para el dato "<<i+1<<" : "; cin >> ter[i].coef;
		cout << "Digite el exponente para el dato "<<i+1<<" : "; cin >> ter[i].exp;	
	}
	ordenaPol(n,ter);
	
	for(int i =0;i<n;i++){
		cout << "\nDato: "<<i+1<<endl
		<< "Coeficiente es: "<<ter[i].coef<<" y El exponente es: "<<ter[i].exp;; 
	}
	return 0;
}

void ordenaPol(int n,monomio t[]){
	monomio aux[n];
	for(int i=1;i<n;i++){
		for(int j=n-1;j>=i;j--){
			if(t[j].exp < t[j-1].exp){
				aux[j] = t[j];
				t[j] = t[j-1];
				t[j-1]=aux[j];
			}
		}
	}	
}