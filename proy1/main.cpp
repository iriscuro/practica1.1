#include <iostream>

using namespace std;

int main()
{
    /*
    int a,b,c,d,f;
    float p;
    cout << ">>El promedio de 5 numeros<<" << endl;
    cout << "Ingresa 5 numeros:"<< endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> f;
    //a=5;
    cout << "El promedio es : " << (p=(a+b+c+d+f)/5) << endl;
    //cin >> a;
    //cout <<"El resultado de la suma es: " << (a+b)<<endl;

    */
    //short int a= 32766;
    short int a= 2147483647;
    short int b =a+1;
    cout << b << endl;
    b =b+1;
    cout << (b- 2*b)+b << endl;
    // llego al limite 32767 hasta 32767 y se vuelve negativo b= -32768
    return 0;
}
