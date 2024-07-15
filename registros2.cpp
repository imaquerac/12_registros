#include <iostream>
#include <string>
using namespace std;

struct persona {
    string nombre;
    string dni;
    int edad;
};

int main() {
    persona personas[100];
    int n;
    cout<<"Ingrese el numero de personas: ";cin>>n;
    cin.ignore();
    
    for(int i = 0; i < n; i++) {
        cout<<"Ingrese datos de la persona "<< i + 1 <<endl;
        cout<<"Nombres: ";
        getline(cin, personas[i].nombre);
        cout<<"DNI: ";cin>>personas[i].dni;
        cout<<"Edad: ";cin>>personas[i].edad;
        cin.ignore();
    }
    system("cls");

    int mayores = 0;
    for(int i = 0; i < n; i++){
        if(personas[i].edad > 50){
            mayores++;
        }
    }
    cout<<"Cantidad de personas mayores a 50: "<<mayores<<endl;

    cout<<"--------------------------------------------"<<endl;
    cout<<"Promedio de las edades de las personas: "<<endl;
    int suma = 0;
    for(int i = 0; i < n; i++){
        suma += personas[i].edad;
    }
    cout<<"Promedio: "<< suma / n <<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<"Datos de las personas ingresadas: "<<endl;
    for(int i = 0; i < n; i++){
        cout<<"Nombre: "<<personas[i].nombre<<endl;
        cout<<"DNI: "<<personas[i].dni<<endl;
        cout<<"Edad: "<<personas[i].edad<<endl;
        cout<<"--------------------------------------------"<<endl;
    }

    return 0;
}
