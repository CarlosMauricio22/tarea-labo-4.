#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cout<<endl;
    cout<< "DETERMINAR SI UN NUMERO POSITIVO, NEGATIVO O NEUTRO "<<endl;

    cout<< "Digite el numero: ";
    cin>> n;

    if(n<0)
    {
        cout<<" El numero " << n << endl<< "Es negativo " <<endl;
    }
    else if(n>0)
    {
       cout<<" El numero " << n << endl<< "Es positivo " <<endl;
    }
    else{
    
        cout<<" El numero " << n << endl<< "Es neutro " <<endl;
    }
    return 0;
}