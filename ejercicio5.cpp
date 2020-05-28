#include <string.h>
#include <iostream>
using namespace std;

int main (void)
{
    char texto [ 20 ];
    int largo;
    cout << "Problemas con una palabra: ";
    cin >> texto;
    largo = strlen (texto);
    cout << " la primera letra digitada es: " << texto [ 0 ] << endl;

    cout << "La ultima letra digitada es: " << texto [largo- 1 ] <<endl;
    
    if (texto [ 0 ] == texto [largo- 1])
    {
        cout<< "La palabra inicia y termina con la misma letra ";
    }
    else
    {
        cout << "No inicia y termina con la misma letra";
    }
}