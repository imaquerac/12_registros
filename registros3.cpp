#include <iostream>
#include <string>
using namespace std;

struct persona{
    string nombre;
    string diaNacimiento;
    int mesNacimiento;
    int anioNacimiento;
};

int main(){
    persona personas[100];
    int n;
    cout<<"Ingrese el numero de personas: ";cin>>n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        cout<<"Ingrese datos de la persona "<< i + 1 <<endl;
    	cout<<"Nombres: ";
        getline(cin, personas[i].nombre);
        cout<<"Dia de nacimiento: ";cin>>personas[i].diaNacimiento;
        cout<<"Mes de nacimiento: ";cin>>personas[i].mesNacimiento;
        cout<<"Anio de nacimiento: ";cin>>personas[i].anioNacimiento;
        cin.ignore();
    }
    system("cls");
    int op;
    do
    {
        cout<<"Ingrese el numero de mes que desea mostrar (Para salir ingresar 0): ";
        cin>>op;
        for(int i = 0; i < n; i++)
        {
            if(personas[i].mesNacimiento == op)
            {
                cout<<"Nombre : "<<personas[i].nombre << endl;
                cout<<"Fecha de nacimiento : "<<personas[i].diaNacimiento<< "/" <<personas[i].mesNacimiento<< "/" <<personas[i].anioNacimiento<<endl;
                cout<<"---------------------------------------------<<endl;
            }
        }
    } while(op != 0);
    return 0;
}
