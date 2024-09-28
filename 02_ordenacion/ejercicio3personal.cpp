#include <iostream>
#include <string>
using namespace std;

struct Fecha{
    int dia;
	int mes; 
	int anio;
};

struct Personal{
    string dni;
	string nombre;
    Fecha fechaNacimiento;  
};

void ordenaPorFecha(Personal [], int);
bool compararFechas(Fecha, Fecha);

int main(){
    int n;
    cout << "Digite la cantidad de personas: "; cin >> n;
    Personal personas[n];
    
    for(int i = 0; i < n; i++){
        cout << "DNI: "; cin >> personas[i].dni;
        cout << "Nombre: "; cin.ignore(); getline(cin, personas[i].nombre); //en una linea para simplificar codigo
        cout << "Dia de nacimiento: "; cin >> personas[i].fechaNacimiento.dia;
        cout << "Mes de nacimiento: "; cin >> personas[i].fechaNacimiento.mes;
        cout << "Año de nacimiento: "; cin >> personas[i].fechaNacimiento.anio;
    }

    cout << "\nOrdenado por fecha de nacimiento\n";
    ordenaPorFecha(personas, n);
    for(int i = 0; i < n; i++){
        cout << personas[i].dni << " " << personas[i].nombre << " " 
             << personas[i].fechaNacimiento.dia << "/" << personas[i].fechaNacimiento.mes 
             << "/" << personas[i].fechaNacimiento.anio << endl;
    }
    return 0;
}

void ordenaPorFecha(Personal a[], int n) {
    Personal aux;
    int j;
    for (int i=1; i<n;i++) {
        aux = a[i]; 
        j = i-1;
        while (j>=0 && compararFechas(aux.fechaNacimiento, a[j].fechaNacimiento)) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = aux;
    }
}


bool compararFechas(Fecha a, Fecha b) {
    if (a.anio != b.anio) {
        return a.anio < b.anio;
	}
    if (a.mes != b.mes){
        return a.mes < b.mes;
	} 
    return a.dia < b.dia;
}

