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

    cout << "selecione un numero que este intervalo de " << numeroDeBalas << endl;
    cin >> InputNimber;

    return 0;
}