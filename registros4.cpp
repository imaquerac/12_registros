#include <iostream>
#include <string>
using namespace std;

struct atleta{
    string nombre;
    string pais;
    string disciplina;
    int medallas;
};

int main(){
    atleta atletas[100];
    int n;

    cout<<"Ingrese el numero de atletas: ";cin>>n;
    cin.ignore();

    for(int i = 0; i < n; i++){
        cout<<"Ingrese datos del atleta "<< i + 1 <<endl;
        cout<<"Nombres: ";
        getline(cin, atletas[i].nombre);
        cout<<"Pais: ";
        getline(cin, atletas[i].pais);
        cout<<"Disciplina: ";
        getline(cin, atletas[i].disciplina);
        cout<<"Numero de medallas: ";
        cin>>atletas[i].medallas;
        cin.ignore();
    }
    system("cls");
    string paisConsulta;
    cout<<"Ingrese el pais para consultar los atletas: ";
    getline(cin, paisConsulta);

    int mayorMedallas = 0;
    cout<<"Atletas del pais "<<paisConsulta<<": ";
    for(int i = 0; i < n; i++){
        if(atletas[i].pais == paisConsulta){
            if(atletas[i].medallas > mayorMedallas){
                mayorMedallas = i;
            }
            cout<<"Nombres: "<<atletas[i].nombre<<endl;
            cout<<"Disciplina: "<<atletas[i].disciplina<<endl;
            cout<<"Numero de medallas: "<<atletas[i].medallas<<endl;
            cout<<"--------------------------------------------"<<endl;
        }
    }
    cout<<"Atleta con el mayor numero de medallas de "<<paisConsulta<<" : "<<atletas[mayorMedallas].nombre<<" - "<<atletas[mayorMedallas].medallas<<endl;

    return 0;
}
