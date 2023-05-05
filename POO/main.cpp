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
    double result = 0.0;

    cout << "deme un numero\n";
    cin >> x;
    cout << "deme otro numero\n";
    cin >> y;

    result = myOBJ.suma(x, y);
    cout << "el resultado es " << result;
    return 0;
}