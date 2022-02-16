#include <iostream>
using namespace std;
// vamos a solicitar al usuario su numero de cuenta
//despues si esta en el sistema mostraremos un menu
// 1.Ver saldo actual
// 2.Aumentar
// 3.Decrementar
// 4.Salir
// realizar la operacion solicitada y hacer que se
//repita hasta que el usuario decida salirse
int registro[] = {123456,154877,789456,2129662,2129666};
int usuario, opcion, saldo = 0, operacion, i = 0, j = 0;
bool value1, value2 = true;
void entrada(){
    do{
        i=0;
        cout<<"ingresa tu No. Cuenta: ";cin>>usuario;
        do{
            if(registro[i]==usuario){
                value1 = false;
                break;
            }else{
                value1 = true;
            }
            i++;
        }while(i<5);
        if(value1 == false){
            cout<<"EL usuario ingresado es correcto :D";
        }else{
            cout<<"EL usuario ingresado es incorrecto D:"<<endl;
            cout<<"Intentalo de nuevo"<<endl;
        }       
    }while(value1==true);
    
}
void menu(){
    do{
        cout<<endl<<"                     MENU     ";
        cout<<endl<<"1:Saldo actual | 2:Incrementar | 3:Decrementar | 4:Salir"<<endl;
        cout<<"Opcion: ";
        cin>>opcion;
        switch(opcion){
            case 1:
                cout<<"Tu saldo actual es: $"<<saldo<<endl;
                break;
            case 2:
                cout<<"Ingresa la cantidad a depositar: $";cin>>operacion;
                if(operacion >= 0){
                    saldo +=operacion;
                    cout<<"EL saldo actualizado es: $"<<saldo;
                    operacion = 0;
                }else{
                    cout<<"No puedes ingresar numeros negativos";
                }
                
                break;
            case 3:
                cout<<"Ingresa la cantidad a retirar: $";cin>>operacion;
                if(operacion>saldo){
                    cout<<"Saldo insuficiente";
                }else{
                    saldo -=operacion;
                    cout<<"EL saldo actualizado es: $"<<saldo;
                }
                operacion = 0;
                break;
            case 4:
                cout<<"Gracias por visitarnos :D";
                value2 = false;
                break;
            default:
                cout<<"Opcion ingresada erronea D:";
        }
    }while(value2==true);
}
int main() {
    entrada();
    menu();
}