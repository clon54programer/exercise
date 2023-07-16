#include <iostream>
#include <cstdlib>

using namespace std;

// ruleta rusa terminada pero tiene un error, si el numero ingresado es igual al intervalo manda error.

double RuletaRusa(int *balas)
{
    *balas = rand() % *balas;
    return *balas;
}

int main(int argc, char const *argv[])
{
    // variables
    double InputNimber;
    int numeroDeBalas;

    cout << "deme el numerro de balas" << endl;
    cin >> numeroDeBalas;

    while (true)
    {
        try
        {
            cout << "selecione un numero que este intervalo de " << numeroDeBalas << endl;
            cin >> InputNimber;
            if (InputNimber > numeroDeBalas)
            {
                throw(InputNimber);
            }
            else if (InputNimber < numeroDeBalas)
            {
                break;
            }
        }
        catch (int error)
        {
            cout << "ingrese otro numero" << endl;
            cin >> InputNimber;
            break;
        }
    }

    double resultado = RuletaRusa(&numeroDeBalas);

    cout << "resultado: " << resultado << endl;
    cout << InputNimber << endl;

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