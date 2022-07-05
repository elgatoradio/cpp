#include <iostream>

using namespace std;

int main()
{
    int lista[] = { 100, 200, 300, 400, 500, 600};
    int limite = sizeof(lista) / sizeof(lista[0]);
    for (int i = 0; i < limite; i++)
    {
        cout << lista[i] << endl;
    }
}
