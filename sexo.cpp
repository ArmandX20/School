#include <iostream>
using namespace std;
// programa que solicite al usuario sus siguientes datos:
// 1.-nombre
// 2.-edad
// 3.-sexo
// y los muestre de forma separada, mujeres/hombres.
string name[20];
int edad[20], sexo[20], i;
void ingreso_datos(){
    for(int i = 0; i<20; i++){
        cout<<endl<<"ingresa tu nombre: ";
        cin>>name[i];
        cout<<endl<<"Edad: ";
        cin>>edad[i];
        cout<<endl<<"sexo: H = 1 | M = 0 : ";
        cin>>sexo[i];
        cout<<endl;
    }
}
void salida(){
    cout<<"-----------Hombres----------"<<endl;
    for(i = 0; i<20; i++){
        if(sexo[i] != 1 && sexo[i] != 0){
            cout<<"EL usuario "<<name[i]<<" su opcion de sexo esta mal."<<endl;
        }else if(sexo[i] == 1){
            cout<<endl;
            cout<<"Nombre: "<<name[i]<<endl;
            cout<<"Edad: "<<edad[i]<<endl;
        }
    }
    cout<<endl<<"-----------Mujeres----------"<<endl;
    for(int i = 0; i<20; i++){
        if(sexo[i] == 0){
            cout<<endl;
            cout<<"Nombre: "<<name[i]<<endl;
            cout<<"Edad: "<<edad[i]<<endl;
        }
    }
}
int main() {
    ingreso_datos();
    salida();
}