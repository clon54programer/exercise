#include <iostream>
#include "header/mate.h"

using namespace std;

int main(int argc, char const *argv[])
{
    // creamos un objecto
    carro myOBJ;

    // variables
    double x = 0.0;
    double y = 0.0;
    double result = myOBJ.suma(x, y);

    cout << "deme un numero\n";
    cin >> x;
    cout << "deme otro numero\n";
    cin >> y;

    cout << "el resultado es " << result;
    return 0;
}