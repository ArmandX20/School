#include <iostream>
using namespace std;
/* el programa va a solicitar la fecha de nacimiento del usuario para poder decirle por consola que tipo de horoscopo es */
int main() {
    int day[2], month[2], rango= 2;//array que se utilizan para guardar los datos

    for(int i = 0; i<rango; i++){//for que solicita los datos y los guarda en los array
        cout<<endl<<"Ingresa el dia: ";
        cin>>day[i];
        cout<<"Día ingresado = "<<day[i]<<endl;
        cout <<"ingresa el mes: ";
        cin>>month[i];
        cout<<"Mes ingresado = "<<month[i]<<endl;
    }


    for(int i = 0; i<rango; i++){//imprime en pantalla todos los signos de los usuarios
        cout<<endl;
        switch(month[i]){
            case 1: //enero
                if(day[i]>=1 && day[i]<=20){
                    cout<<"el usuario con mes: "<<month[i]<<endl;
                    cout<<"y dia: "<<day[i]<<endl;
                    cout <<"Eres Capricornio";
                }else if(day[i]>=21 && day[i]<=31){
                    cout<<"el usuario con mes: "<<month[i]<<endl;
                    cout<<"y dia: "<<day[i]<<endl;
                    cout <<"Eres Acuario";
                }else{
                    cout<<"Fecha ingresada incorrecta";
                }
                break;
            case 2: //Febrero
                if(day[i]>=1 && day[i]<=18){
                    cout<<"el usuario con mes: "<<month[i]<<endl;
                    cout<<"y dia: "<<day[i]<<endl;
                    cout <<"Eres Acuario";
                }else if(day[i]>=19 && day[i]<=28){
                    cout<<"el usuario con mes: "<<month[i]<<endl;
                    cout<<"y dia: "<<day[i]<<endl;
                    cout <<"Eres Piscis";
                }else{
                    cout<<"Fecha ingresada incorrecta";
                }
                break;
            case 3: //Marzo
                if(day[i]>=1 && day[i]<=20){
                    cout<<"el usuario con mes: "<<month[i]<<endl;
                    cout<<"y dia: "<<day[i]<<endl;
                    cout <<"Eres Piscis";
                }else if(day[i]>=21 && day[i]<=31){
                    cout<<"el usuario con mes: "<<month[i]<<endl;
                    cout<<"y dia: "<<day[i]<<endl;
                    cout <<"Eres Aries";
                }else{
                    cout<<"Fecha ingresada incorrecta";
                }
                break;
            case 4: //Abril
                if(day[i]>=1 && day[i]<=20){
                    cout<<"el usuario con mes: "<<month[i]<<endl;
                    cout<<"y dia: "<<day[i]<<endl;
                    cout <<"Eres Aries";
                }else if(day[i]>=21 && day[i]<=31){
                    cout<<"el usuario con mes: "<<month[i]<<endl;
                    cout<<"y dia: "<<day[i]<<endl;
                    cout <<"Eres Tauro";
                }else{
                    cout<<"Fecha ingresada incorrecta";
                }
                break;
            case 5: //Mayo
                if(day[i]>=1 && day[i]<=21){
                    cout<<"el usuario con mes: "<<month[i]<<endl;
                    cout<<"y dia: "<<day[i]<<endl;
                    cout <<"Eres Tauro";
                }else if(day[i]>=22 && day[i]<=31){
                    cout<<"el usuario con mes: "<<month[i]<<endl;
                    cout<<"y dia: "<<day[i]<<endl;
                    cout <<"Eres Géminis";
                }else{
                    cout<<"Fecha ingresada incorrecta";
                }
                break;
            case 6: //Junio
                if(day[i]>=1 && day[i]<=21){
                    cout<<"el usuario con mes: "<<month[i]<<endl;
                    cout<<"y dia: "<<day[i]<<endl;
                    cout <<"Eres Géminis";
                }else if(day[i]>=22 && day[i]<=31){
                    cout<<"el usuario con mes: "<<month[i]<<endl;
                    cout<<"y dia: "<<day[i]<<endl;
                    cout <<"Eres Cáncer";
                }else{
                    cout<<"Fecha ingresada incorrecta";
                }
                break;
            case 7: //Julio
                if(day[i]>=1 && day[i]<=22){
                    cout<<"el usuario con mes: "<<month[i]<<endl;
                    cout<<"y dia: "<<day[i]<<endl;
                    cout <<"Eres Cáncer";
                }else if(day[i]>=23 && day[i]<=31){
                    cout<<"el usuario con mes: "<<month[i]<<endl;
                    cout<<"y dia: "<<day[i]<<endl;
                    cout <<"Eres Leo";
                }else{
                    cout<<"Fecha ingresada incorrecta";
                }
                break;
            case 8: //Agosto
                if(day[i]>=1 && day[i]<=22){
                    cout<<"el usuario con mes: "<<month[i]<<endl;
                    cout<<"y dia: "<<day[i]<<endl;
                    cout <<"Eres Leo";
                }else if(day[i]>=23 && day[i]<=31){
                    cout<<"el usuario con mes: "<<month[i]<<endl;
                    cout<<"y dia: "<<day[i]<<endl;
                    cout <<"Eres Virgo";
                }else{
                    cout<<"Fecha ingresada incorrecta";
                }
                break;
            case 9: //Septiembre
                if(day[i]>=1 && day[i]<=22){
                    cout<<"el usuario con mes: "<<month[i]<<endl;
                    cout<<"y dia: "<<day[i]<<endl;
                    cout <<"Eres Virgo";
                }else if(day[i]>=23 && day[i]<=31){
                    cout<<"el usuario con mes: "<<month[i]<<endl;
                    cout<<"y dia: "<<day[i]<<endl;
                    cout <<"Eres Libra";
                }else{
                    cout<<"Fecha ingresada incorrecta";
                }
                break;
            case 10: //Octubre
                if(day[i]>=1 && day[i]<=22){
                    cout<<"el usuario con mes: "<<month[i]<<endl;
                    cout<<"y dia: "<<day[i]<<endl;
                    cout <<"Eres Libra";
                }else if(day[i]>=23 && day[i]<=31){
                    cout<<"el usuario con mes: "<<month[i]<<endl;
                    cout<<"y dia: "<<day[i]<<endl;
                    cout <<"Eres Escorpio";
                }else{
                    cout<<"Fecha ingresada incorrecta";
                }
                break;
            case 11: //Noviembre
                if(day[i]>=1 && day[i]<=22){
                    cout<<"el usuario con mes: "<<month[i]<<endl;
                    cout<<"y dia: "<<day[i]<<endl;
                    cout <<"Eres Escorpio";
                }else if(day[i]>=23 && day[i]<=31){
                    cout<<"el usuario con mes: "<<month[i]<<endl;
                    cout<<"y dia: "<<day[i]<<endl;
                    cout <<"Eres Sagitario";
                }else{
                    cout<<"Fecha ingresada incorrecta";
                }
                break;
            case 12: //Diciembre
                if(day[i]>=1 && day[i]<=21){
                    cout<<"el usuario con mes: "<<month[i]<<endl;
                    cout<<"y dia: "<<day[i]<<endl;
                    cout <<"Eres Sagitario";
                }else if(day[i]>=22 && day[i]<=31){
                    cout<<"el usuario con mes: "<<month[i]<<endl;
                    cout<<"y dia: "<<day[i]<<endl;
                    cout <<"Eres Capricornio";
                }else{
                    cout<<"Fecha ingresada incorrecta";
                }
                break;
            default:
                cout<<"el mes: "<<month[i]<<endl;
                cout<<"Mes ingresado incorrecto"<<endl;
                cout<<"y dia: "<<day[i]<<endl;
                
        }
    }
    return 0;
}