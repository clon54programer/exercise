#include <iostream>

using namespace std;

class Personal
{
private:
    string name;
    double salary;
    int añosEnLaEmpresa;
    char puesto;

public:
    Personal(string n, double s, int y, char p);
    ~Personal();
};

Personal::Personal(string n, double s, int y, char p)
{
}

Personal::~Personal()
{
}

int main(int argc, char const *argv[])
{
    // variables de interacion
    string name;
    double salay;
    int añosEnLaEmpresa;
    char puesto;

    cout << "ingrese su nombre\n";
    cin >> name;

    cout << "ingrese su salario\n";
    cin >> salay;

    cout << "ingrese cuantos años a trabajado en le empresa\n";
    cin >> añosEnLaEmpresa;

    cout << "escriba p si tiene entre 0 hasta 2 años en la empresa,\n escriba j si tiene 2 entre y 5 años en la empresa,\n escroba e si tine mas de 5 años en la empresa  \n";

    return 0;
}
