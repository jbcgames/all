#include <iostream>
#include "operaciones.cpp"
using namespace std;

int main()
{
    double a;
    double b;
    int ing;

    while(true){
        cout<<"Ingrese la operacion a realizar"<<endl<<"Suma-1"<<endl<<"Resta-2"<<endl<<"multiplicacion-3"<<endl<<"division-4"<<endl;
        cin>>ing;
    switch (ing) {
    case 1:
        cout<<"Numero 1"<<endl;
        cin >> a;
        cout<<"Numero 2"<<endl;
        cin >> b;
        cout << "La suma de los dos numeros es: " <<suma(a,b)<< endl;
        return 0;
    case 2:
        cout<<"Numero 1"<<endl;
        cin >> a;
        cout<<"Numero 2"<<endl;
        cin >> b;
        cout << "La resta de los dos numeros es: " <<resta(a,b)<< endl;
        return 0;
    case 3:
        cout<<"Numero 1"<<endl;
        cin >> a;
        cout<<"Numero 2"<<endl;
        cin >> b;
        cout << "La multiplicacion de los dos numeros es: " <<multiplicacion(a,b)<< endl;
        return 0;
    case 4:
        cout<<"Numero 1"<<endl;
        cin >> a;
        cout<<"Numero 2"<<endl;
        cin >> b;
        cout << "La division de los dos numeros es: " <<division(a,b)<< endl;
        return 0;
    default:
        system("cls");
        cout<<"esta opcion no es valida"<<endl;

    }
    }
    return 0;



}
//https://github.com/jbcgames/all.git
