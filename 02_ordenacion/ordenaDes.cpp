#include <iostream>
using namespace std;

struct articulo{
    string cod;
    string descript;
    float precio;
    int cant;
    float monInv;
};

void ordenaDes(articulo[], int n);

int main(){
    int n;
    cout << "Digite la cantidad de articulos: "; 
    cin >> n;
    articulo ter[n];
    
    for (int i = 0; i < n; i++){
    	cout << "\nArticulo " << i + 1 << ":\n";
        cout << "Digite el codigo: "; cin.ignore();  getline(cin, ter[i].cod); 
        cout << "Digite la descripcion: "; getline(cin, ter[i].descript);  
        cout << "Digite el precio: "; cin >> ter[i].precio;
        cout << "Digite la cantidad: "; cin >> ter[i].cant; cin.ignore(); 

        ter[i].monInv = ter[i].precio * ter[i].cant;
    }
    
    ordenaDes(ter, n);
    
    for (int i = 0; i < n; i++){
        cout << "\nArticulo " << i + 1 << ":\n";
        cout << "El codigo: " << ter[i].cod << endl;
        cout << "La descripcion: " << ter[i].descript << endl;
        cout << "El precio: " << ter[i].precio << endl;
        cout << "La cantidad: " << ter[i].cant << endl;
        cout << "El monto de inventario: " << ter[i].monInv << endl;
    }
    
    return 0;
}

void ordenaDes(articulo a[], int n){
    articulo aux;
    
    for (int i=0; i<n; i++) {
        for (int j=0; j < n -1; j++){
            if (a[j].monInv < a[j +1].monInv){
                aux = a[j];
                a[j] = a[j +1];
                a[j +1] = aux;
            }
        }
    }
}
