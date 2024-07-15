#include <iostream>
#include <string>
using namespace std;

struct empleado
{
    string nombres;
    char sexo;
    float sueldo;
};

int main()
{
    empleado empleados[100];
    int n;
    cout<<"Ingrese el numero de empleados: ";cin>>n;
    system("cls");
    for (int i = 0; i < n; i++)
    {
        cout<<"Empleado "<< i + 1 <<endl;
        cout<<"Nombres: ";
        cin.ignore();
        getline(cin, empleados[i].nombres);
		cout<<"Sexo (H/M): ";cin>>empleados[i].sexo;
        cout<<"Sueldo : ";cin>>empleados[i].sueldo;
        system("cls");
    }
    int indMax = 0, indMin = 0;
    for(int i = 1; i < n; i++)
    {
        if(empleados[i].sueldo > empleados[indMax].sueldo)
            indMax = i;
        if(empleados[i].sueldo < empleados[indMin].sueldo)
            indMin = i;
    }
    cout<<"Empleado con mayor sueldo: "<<empleados[indMax].nombres<<" - "<<empleados[indMax].sueldo<<endl;
    cout<<"Empleado con menor sueldo: "<<empleados[indMin].nombres<<" - "<<empleados[indMin].sueldo<<endl;
    return 0;
}
