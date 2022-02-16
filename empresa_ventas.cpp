#include <iostream>
using namespace std;
// crear un programa que lea los precios de 5 articulos
//y las cantidades vendidas por 
//una empresa en sus 4 sucursales
// mostrar:
// 1. cantidades totales de cada articulos
// 2. cantidad de articulos en la sucursal 2
// 3. cantidad del articulo 3 en la sucursal 1
// 4. recaudacion total de cada sucursal
// 5. recaudacion total de la empresa
// 6. la sucursal de mayor recaudacion
int main(){
    int precio[5], venta1[5], venta2[5], venta3[5], venta4[5];
    int sumaItem1=0, sumaItem2=0, sumaItem3=0, sumaItem4=0, item2=0;
    int sucursal1=0, sucursal2=0, sucursal3=0, sucursal4=0, recaudacionTotal=0;
    for(int i=0; i<5; i++){
        cout<<endl<<"Ingresa el precio del articulo "<<i+1<<": ";
        cin>>precio[i];
    }
    for(int i=0; i<5; i++){
        cout<<"Venta de la tienda 1, del articulo "<<i+1<<": ";
        cin>>venta1[i];
    }
    for(int i=0; i<5; i++){
        cout<<"Venta de la tienda 2, del articulo "<<i+1<<": ";
        cin>>venta2[i];
    }
    for(int i=0; i<5; i++){
        cout<<"Venta de la tienda 3, del articulo "<<i+1<<": ";
        cin>>venta3[i];
    }
    for(int i=0; i<5; i++){
        cout<<"Venta de la tienda 4, del articulo "<<i+1<<": ";
        cin>>venta4[i];
    }
    cout<<"cantidades totales de cada articulos:"<<endl;
    sumaItem1 = venta1[0]+venta2[0]+venta3[0]+venta4[0];
    sumaItem2 = venta1[1]+venta2[1]+venta3[1]+venta4[1];
    sumaItem3 = venta1[2]+venta2[2]+venta3[2]+venta4[2];
    sumaItem4 = venta1[3]+venta2[3]+venta3[3]+venta4[3];
    cout<<"Articulo 1.- "<<sumaItem1<<endl;
    cout<<"Articulo 2.- "<<sumaItem2<<endl;
    cout<<"Articulo 3.- "<<sumaItem3<<endl;
    cout<<"Articulo 4.- "<<sumaItem4<<endl;

    for(int i=0; i<5; i++){
        item2 += venta2[i];
        sucursal1 += venta1[i]*precio[i];
        sucursal2 += venta2[i]*precio[i];
        sucursal3 += venta3[i]*precio[i];
        sucursal4 += venta4[i]*precio[i];
    }
    recaudacionTotal = sucursal1+sucursal2+sucursal3+sucursal4;
    cout<<endl<<"cantidad de articulos en la sucursal 2: "<<item2<<endl;
    cout<<endl<<"cantidad del articulo 3 en la sucursal 1: "<<venta1[2]<<endl;
    cout<<endl<<"recaudacion total de cada sucursal "<<endl;
    cout<<"Sucursal 1.- "<<sucursal1<<endl;
    cout<<"Sucursal 2.- "<<sucursal2<<endl;
    cout<<"Sucursal 3.- "<<sucursal3<<endl;
    cout<<"Sucursal 4.- "<<sucursal4<<endl;
    cout<<"Recaudacion total de la empresa: "<<recaudacionTotal<<endl;

    if(sucursal1>sucursal2 && sucursal1>sucursal3 && sucursal1>sucursal4){
        cout<<"La sucursal 1, fue la que vendio mas, con: "<<sucursal1<<" de recaudacion";
    }else if(sucursal2>sucursal1 && sucursal2>sucursal3 && sucursal2>sucursal4){
        cout<<"La sucursal 2, fue la que vendio mas, con: "<<sucursal2<<" de recaudacion";
    }else if(sucursal3>sucursal1 && sucursal3>sucursal2 && sucursal3>sucursal4){
        cout<<"La sucursal 3, fue la que vendio mas, con: "<<sucursal3<<" de recaudacion";
    }else if(sucursal4>sucursal1 && sucursal4>sucursal2 && sucursal4>sucursal3){
        cout<<"La sucursal 4, fue la que vendio mas, con: "<<sucursal4<<" de recaudacion";
    }else{
        cout<<"Ninguna sucursal es mayor que las otras";
    }
    cin.get();
    return 0;
}