#include <iostream>
using namespace std;

int main()
{
    // declaramos nuestra matriz inicial
    int matriz[3][3] = {{4, 1, 3}, {2, 1, 4}, {0, 1, 2}};
    // creamos la matriz que usaremos para trasponer
    int matrizTras[3][3];
    // vectores que almacenaran las filas
    int vector1[3], vector2[3], vector3[3];
    // almacenamos las filas dentro de nuestros vectores
    // y posterior en la matriz traspuesta los vectores con el nuevo orden
    for (int i = 0; i < 3; i++)
    {
        vector1[i] = matriz[i][0];
        vector2[i] = matriz[i][1];
        vector3[i] = matriz[i][2];
        matrizTras[0][i] = vector1[i];
        matrizTras[1][i] = vector2[i];
        matrizTras[2][i] = vector3[i];
    }

    // mostramos nuestra matriz normal
    cout << "Matriz normal" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz[i][j] << "  ";
        }
        cout << endl;
    }

    // mostramos la matriz ya traspuesta
    cout << "Matriz Traspuesta" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            cout << matrizTras[i][k] << "  ";
        }
        cout << endl;
    }

    return 0;
}