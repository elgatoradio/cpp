#include <iostream>

using namespace std;

int main()
{
    int limite = 0;
    int modulo = 0;
    cout << "¿hasta que numero quieres que imprima los numeros pares? ";
    cin >> limite;
    for (int i=1; i <= limite; i++)
    {
        if (i > 100)
        {
            break;;
        }
        else if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
}
