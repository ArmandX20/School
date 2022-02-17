#include <iostream>
using namespace std;
/* un programa que solicite hasta 15 letras, y despues las muestre de forma reversa */
int main(){
    string cadena;
    char cambio[15];
    int contador =0;
    do{
        cout<<endl<<"ingresa una palabra, no maxima de 15 caracteres: ";
        cin>>cadena;
        contador=cadena.length();
        cout<<"tu palabra escrita de forma inversa es: ";
        for(int i=0; i<=cadena.length(); i++){
            cambio[i]=cadena[contador];
            cout<<cambio[i];
            contador--;
        }
    }while(cadena.length()<=15);
    cout<<"Gracias por usar el programa:D";
    return 0;
}