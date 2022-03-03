#include <iostream>
using namespace std;
int main()
{
    /* declaramos las matrices, vectores y variables que usaremos,
    en float porque en el resultado nos puede dar numeros decimales */
    float matriz[3][3] = {{4, 1, 3}, {2, 1, 4}, {0, 1, 2}};
    float matrizidentidad[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    float matriz3[3][6];
    float vector[6], vector2[6], vector3[6];
    float var1 = 0, var2 = 0, var3 = 0;

    /* for que utilizaremos para concatenar la matriz ingresada y una matriz identidad para realizar las operaciones */
    for (int i = 0; i < 3; i++) // ciclo de filas
    {
        for (int j = 0; j < 3; j++) // primer ciclo de columnas
        {
            matriz3[i][j] = matriz[i][j]; // matriz guardada en las primeras posiciones
        }
        for (int k = 3, j = 0; j < 3; k++, j++) // segundo ciclo de columnas
        {
            matriz3[i][k] = matrizidentidad[i][j]; // guardamos la matriz identidad
        }
    }

    /* mostramos en pantalla nuestra matriz que sacaremos inversa */
    cout << "Matriz inicial:" << endl;
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << matriz[j][i] << "  ";
        }
        cout << endl;
    }

    // necesitamos eliminar el elemento en [2][0],
    // es el proceso para eliminar ese numero de esa posicion
    var1 = matriz[0][0];
    var2 = matriz[2][0];
    for (int i = 0; i < 6; i++)
    {
        vector[i] = matriz3[2][i] * var1;
        vector2[i] = matriz3[0][i] * (-var2);
        matriz3[2][i] = vector[i] + vector2[i];
    }
    // necesitamos eliminar el elemento en [1][0]
    // mismo proceso para convertir el otro numero en cero
    var1 = 0, var2 = 0;
    var1 = matriz[0][0];
    var2 = matriz[1][0];
    for (int i = 0; i < 6; i++)
    {
        vector[i] = matriz3[1][i] * var1;
        vector2[i] = matriz3[0][i] * (-var2);
        matriz3[1][i] = vector[i] + vector2[i];
    }

    var1 = 0, var2 = 0;
    var1 = matriz3[1][1];
    var2 = matriz3[2][1];
    for (int i = 0; i < 6; i++)
    {
        vector2[i] = matriz3[1][i] * -var2;
        vector[i] = matriz3[2][i] * var1;
        matriz3[2][i] = vector[i] + vector2[i];
    }

    var1 = 0, var2 = 0;
    var1 = matriz3[2][2];
    var2 = matriz3[0][2];
    for (int i = 0; i < 6; i++)
    {
        vector2[i] = matriz3[2][i] * -var2;
        vector[i] = matriz3[0][i] * var1;
        matriz3[0][i] = vector[i] + vector2[i];
    }

    var1 = 0, var2 = 0;
    var1 = matriz3[2][2];
    var2 = matriz3[1][2];
    for (int i = 0; i < 6; i++)
    {
        vector2[i] = matriz3[2][i] * -var2;
        vector[i] = matriz3[1][i] * var1;
        matriz3[1][i] = vector[i] + vector2[i];
    }

    var1 = 0, var2 = 0;
    var1 = matriz3[1][1];
    var2 = matriz3[0][1];
    for (int i = 0; i < 6; i++)
    {
        vector2[i] = matriz3[1][i] * -var2;
        vector[i] = matriz3[0][i] * var1;
        matriz3[0][i] = vector[i] + vector2[i];
    }

    // por ultimo convertiremos la diagonal de la matriz
    // en 1, para ya poder obtener la inversa de la matriz

    var1 = 0, var2 = 0;
    var1 = matriz3[0][0];
    var2 = matriz3[1][1];
    var3 = matriz3[2][2];
    for (int i = 0; i < 6; i++)
    {
        vector[i] = matriz3[0][i] / var1;
        vector2[i] = matriz3[1][i] / var2;
        vector3[i] = matriz3[2][i] / var3;
        matriz3[0][i] = vector[i];
        matriz3[1][i] = vector2[i];
        matriz3[2][i] = vector3[i];
    }

    // mostramos la matriz inversa
    cout << endl
         << "Matriz inversa:" << endl;
    for (int j = 0; j < 3; j++)
    {
        for (int i = 3; i < 6; i++)
        {
            cout << matriz3[j][i] << "  ";
        }
        cout << endl;
    }

    return 0;
}