#include <iostream>
using namespace std;

// adivinar el numero que eligio el 
// usuario de un lista de numeros mostrados

int main(){
    int lista[] = {1,7,15,28,36,58,69,80};
    int opcion;
    char validacion;
    bool value = true;
    cout<<"Vamos a adivinar el numero que eligas"<<endl;
    cout<<"Eligue un numero de la siguiente lista:"<<endl;
    cout<<lista[0]<<" | "<<lista[1]<<" | "<<lista[2]<<" | "<<lista[3]<<" | "<<lista[4]<<" | "<<lista[5]<<" | "<<lista[6]<<" | "<<lista[7]<<" | ";
    cout<<endl<<"opcion: ";cin>>opcion;
    
    for(int i = 0; i<8; i++){
        if(lista[i]!=opcion){
            value = false;
        }else{
            value = true;
            break;
        }
    }
    if(value==true){
        cout<<endl<<"¿el numero que elegiste es mayor a "<<lista[3]+1<<"?y/n : ";
        cin>>validacion;
        if(validacion=='y'){
            cout<<"¿EL numero es mayor que "<<lista[5]+1<<"?y/n : ";
            cin>>validacion;
            if(validacion=='y'){
                cout<<"¿El numero es mayor que "<<lista[6]+1<<"?y/n : ";
                cin>>validacion;
                if(validacion=='y'){
                    cout<<"El numero que elegiste es: "<<lista[7];
                }else{
                    cout<<"El numero que elegiste es: "<<lista[6];
                }
            }else{
                cout<<"¿El numero es mayor que "<<lista[4]+1<<"?y/n : ";
                cin>>validacion;
                if(validacion=='y'){
                    cout<<"El numero que elegiste es: "<<lista[5];
                }else{
                    cout<<"El numero que elegiste es: "<<lista[4];
                }
            }
        }else if(validacion=='n'){
            cout<<"¿EL numero es mayor que "<<lista[1]+1<<"?y/n : ";
            cin>>validacion;
            if(validacion=='n'){
                cout<<"¿El numero es mayor que "<<lista[0]+1<<"?y/n : ";
                cin>>validacion;
                if(validacion=='n'){
                    cout<<"El numero que elegiste es: "<<lista[0];
                }else{
                    cout<<"El numero que elegiste es: "<<lista[1];
                }
            }else{
                cout<<"¿El numero es mayor que "<<lista[2]+1<<"?y/n : ";
                cin>>validacion;
                if(validacion=='y'){
                    cout<<"El numero que elegiste es: "<<lista[3];
                }else{
                    cout<<"El numero que elegiste es: "<<lista[2];
                }
            }
        }else{
            cout<<"Opcion elegida incorrecta D:";
        }
    }else{
        cout<<"El numero "<<opcion<<" no esta dentro de la lista D:";
    }
    return 0;
}