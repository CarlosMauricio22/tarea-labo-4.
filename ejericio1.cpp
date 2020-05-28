#include <iostream>
using namespace std;
int main(void)
{
    int numerador;
    int denominador;
    cout<<endl;
    cout<< "DETERMINAR SI UN NUMERO ES DIVISIBLE  "<<endl;

    cout<< "Digite el numerador: ";
    cin>>numerador;
    cout<< "Digite el denominador: ";
    cin>>denominador;

    if(numerador / denominador == 0)
    {
        cout<<" El numero " << numerador << "si es divisible entre " << denominador <<endl;
    }else
    {
       cout<<" El numero " << numerador << "No es divisible entre" << denominador <<endl;
    }
    return 0;
    


    
}