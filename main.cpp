#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //"*" apuntador; "&" halla la direccion de la variable//

    int a = 0;
    int *p = &a;
    int b = *p;

    cout <<"Direccion de p: "<< &p <<endl;
    cout <<"Direccion de a: "<< &a <<endl;
    cout <<"Contenido de p: "<< p <<endl;
    cout <<"Contenido en la memoria a la que apunta de p: "<< *p<<endl;

    *p=10; //si le quita el "*" sale error, es una variable apuntador//

    cout <<"Contenido en la memoria a la que apunta de p: "<< *p<<endl;
    cout <<"Contenido de a: "<< a <<endl;

    cout <<"Contenido de p+100: "<< p+100 <<endl; //p es un puntero, se puede sumar cosas? si pero tiene que ser la misma variable//
    //1 aqui es un espacio de dato para almacenar el mismo variable, seria 4 bytes
    //al apuntador le suma 4 bytes
    //(p+1) el contenido de la memoria, *(p+1) saca el contenido de la memoria, *(p+1)+1

    *(p+100)=45;

    cout <<"Contenido de p+100: "<< *(p+100) <<endl;
    //

    cout << a <<endl;

    return 0;
}
