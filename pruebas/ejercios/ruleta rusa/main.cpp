#include <iostream>
#include <cstdlib>

using namespace std;

double RuletaRusa(double x, int balas)
{
    x = rand() % balas;
    return x;
}

int main(int argc, char const *argv[])
{
    // variables
    int InputNimber;
    int numeroDeBalas;

    cout << "deme el numerro de balas" << endl;
    cin >> numeroDeBalas;

    while (true)
    {
        cout << "selecione un numero que este intervalo de " << numeroDeBalas << endl;
        cin >> InputNimber;

        if (InputNimber > numeroDeBalas)
        {
            cout << "el numero ingresado supera el intervalo, por favor ingrese otro" << endl;
            continue;
        }
        cout << "selecione un numero que este intervalo de " << numeroDeBalas << endl;
        cin >> InputNimber;
    }

    double resultado = RuletaRusa(InputNimber, numeroDeBalas);

    cout << "resultado: " << resultado << endl;

    if (resultado != InputNimber)
    {
        cout << "has ganado\n fin del juego";
    }
    else
    {
        cout << "has perdido\n fin del juego";
    }

    return 0;
}