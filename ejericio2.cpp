#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cout<<endl;
    cout<< "DETERMINAR SI UN NUMERO ES PAR O IMPAR "<<endl;

    cout<< "Digite el numero: ";
    cin>> n;
    if(n%2==0)
    {
        cout<<" El numero " << n << endl<< " si es par " <<endl;
    }else
    {
       cout<<" El numero " << n << endl<< " Es impar " <<endl;
    }
    return 0;
}