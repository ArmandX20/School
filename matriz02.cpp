#include <iostream>
using namespace std;

char letters[4][6], option;

char primero()
{
    for (int i = 3; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < 6; j++)
            {
                cout<<"posicion: ["<<i<<"]"<<"["<<j<<"] : ";
                cin >> option;
                letters[i][j] = option;
            }
        }
        else
        {
            for (int j = 5; j >= 0; j--)
            {
                cout<<"posicion: ["<<i<<"]"<<"["<<j<<"] : ";
                cin >> option;
                letters[i][j] = option;
            }
        }
    }
    return letters[4][6];
}

char segundo()
{
    for (int i = 0; i < 6; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < 4; j++)
            {
                cout<<"posicion: ["<<j<<"]"<<"["<<i<<"] : ";
                cin >> option;
                letters[j][i] = option;
            }
        }
        else
        {
            for (int j = 3; j >= 0; j--)
            {
                cout<<"posicion: ["<<j<<"]"<<"["<<i<<"] : ";
                cin >> option;
                letters[j][i] = option;
            }
        }
    }
    return letters[4][6];
}

char tercero()
{
    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < 6; j++)
            {
                cout<<"posicion: ["<<i<<"]"<<"["<<j<<"] : ";
                cin >> option;
                letters[i][j] = option;
            }
        }
        else
        {
            for (int j = 5; j >= 0; j--)
            {
                cout<<"posicion: ["<<i<<"]"<<"["<<j<<"] : ";
                cin >> option;
                letters[i][j] = option;
            }
        }
    }
    return letters[4][6];
}
char cuarta()
{
    for (int i = 1; i < 5; i++)
    {
        cout<<"posicion: [2]"<<"["<<i<<"] : ";
        cin>>option;
        letters[2][i] = option;
    }
    for (int i = 4; i >= 0; i--)
    {
        cout<<"posicion: [1]"<<"["<<i<<"] : ";
        cin>>option;
        letters[1][i] = option;
    }
    cout<<"posicion: [2]"<<"[0] : ";
    cin>>option;
    letters[2][0] = option;
    for (int i = 0; i < 6; i++)
    {
        cout<<"posicion: [3]"<<"["<<i<<"] : ";
        cin>>option;
        letters[3][i] = option;
    }
    cout<<"posicion: [2]"<<"[5] : ";
    cin>>option;
    letters[2][5] = option;
    cout<<"posicion: [1]"<<"[5] : ";
    cin>>option;
    letters[1][5] = option;
    for (int i = 5; i >= 0; i--)
    {
        cout<<"posicion: [0]"<<"["<<i<<"] : ";
        cin>>option;
        letters[0][i] = option;
    }

    return letters[4][6];
}

int main()
{
    int option01 = 0;
    
    cout<<"¿De que forma quieres que te muestre las letras?";
    cin>>option01;

    switch (option01)
    {
    case 1:
        cout << "Ingresa tus caracteres :D"<<endl;
        primero();
        break;
    case 2:
        cout << "Ingresa tus caracteres :D"<<endl;
        segundo();
        break;
    case 3:
        cout << "Ingresa tus caracteres :D"<<endl;
        tercero();
        break;
    case 4:
        cout << "Ingresa tus caracteres :D"<<endl;
        cuarta();
        break;

    default:
        cout<<"opcion ingresada incorrecta D:";
        break;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << letters[i][j] << "  ";
        }
        cout << endl;
    }
}