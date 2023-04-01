#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char letra = 'a';
    char *puntero = &letra;
    cout << (int *)&letra << "\n";
    // cout << puntero;
    cout << (int *)puntero << "\n"; // haci se debe colocar para que no mande caracteres

    letra = 'b';
    cout << (int *)&letra << "\n";

    string letra2 = "jau";
    string *p = &letra2;

    cout << "letra2 \t" << &letra2 << "\n p \t" << p;

    return 0;
}
