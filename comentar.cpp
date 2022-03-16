#include <iostream>
using namespace std;
class Rectangulo // clase llamada Rectangulo
{        
private: // Atributos privados que solo se usaran en la clase
    float largo, ancho;

public:                       // Metodos publicos para la herencia
    Rectangulo(float, float); // Constructor que dara tipo de dato a los datos ingresados
    void perimetro();
    void area();
};
//se inicializan las variables
Rectangulo::Rectangulo(float _largo, float _ancho)
{
    largo = _largo;
    ancho = _ancho;
}
//funcion perimetro de nuestra clase Rectangulo
void Rectangulo::perimetro()
{
    float _perimetro;//variable que usara
    _perimetro = (2 * largo) + (2 * ancho);//operacion
    cout << "El perimetro es: " << _perimetro << endl;//proceso
}
//funcion area de nuestra clase Rectangulo
void Rectangulo::area()
{
    float _area;//variable que usara
    _area = largo * ancho; //operacion
    cout << "El area es: " << _area << endl; //proceso
}
int main()//clase principal
{
    Rectangulo r1(11, 7); //creacion de un objeto de la clase Rectangulo, pasando parametros
    /* llamada de metodos de nuestra clase Rectangulo, para obtener el resultado de nuestro objeto  */
    r1.perimetro();
    r1.area();
    //sirve para no hacer tan repentida la ejecucion del programa
    //y esperar la interaccion del usuario
    system("pause");
    return 0;
}