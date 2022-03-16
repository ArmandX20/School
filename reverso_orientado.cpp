#include <iostream>
using namespace std;
/* un programa que solicite hasta 15 letras, y despues las muestre de forma reversa */
class Inversa
{public:
    char cambio[15];
    int contador = 0;

    void transformar(string cadena);
};
void Inversa::transformar(string cadena){
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
}
int main(){
    string cadena;
    
    Inversa texto;

    texto.transformar(cadena);
    
    cout<<endl<<"Gracias por usar el programa:D"<<endl;
    system("pause");
    return 0;
}