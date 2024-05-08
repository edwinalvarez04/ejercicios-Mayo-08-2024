#include <iostream>
using namespace std;
int main()
{
    int n;

    cout<< "ingrese un numero entero:";
    int n ;
    cin>>n;
    int primero =1;//hipotesis
    for(int = n-1; int >= 2; i =i-1)
    {
        int modulo= n % i;
        if (modulo==0)
        {
            cout<< n << "no es primo" << "\n";
            primo = 0 
            break;


        }

    }
    if (primo)
    {
        cout<< n << "es primo"
    }

}