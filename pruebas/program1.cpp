#include <iostream>
#include "program.hh"

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
    int verificacion(char x);
};
// este es un contructyor en c++
Personal::Personal(string n, double s, int y, char p)
{
    name = n;
    salary = s;
    añosEnLaEmpresa = y;
    puesto = p;
}

Personal::~Personal()
{
}
// esta funcion se encarga de guardar el pusto que ocupa el empleado
int Personal::verificacion(char x)
{
    if (x == 'p')
    {
        return 1;
    }
    else if (x == 'j')
    {
        return 2;
    }
    else if (x == 'e')
    {
        return 3;
    }
    else
    {
        cout << "coloca la letra de forma incorrecta\n";
    }
}

void Jerequia(int y)
{
    if (y == 1)
    {
        cout << "usted es un empleado comun \n";
    }
    else if (y == 2)
    {
        cout << "usted tiene un pueste de gerencia en alguna sede de la empresa\n";
    }
    else if (y == 3)
    {
        cout << "usted hace parte de la junta directiva de la empresa\n";
    }
}

int main(int argc, char const *argv[])
{
    //  variables de interacion
    string name;
    double salay;
    int añosEnLaEmpresa;
    char puesto;
    // caracteres especiales
    setlocale(LC_ALL, "es_Es.UTF-8");

    cout << "ingrese su nombre\n";
    cin >> name;

    cout << "ingrese su salario\n";
    cin >> salay;

    cout << "ingrese cuantos años a trabajado en la empresa\n";
    cin >> añosEnLaEmpresa;

    cout << "escriba p si tiene un puesto normal,\n escriba j si tiene un puesto de gerencia,\n escriba e si tiene un puesto ejecutivo \n";
    cin >> puesto;

    // creando objeto
    Personal myOBJ(name, salay, añosEnLaEmpresa, puesto);
    cout << "nombre: \t" << name << "\n salario: \t " << salay << "\naños en la empresa: \t" << añosEnLaEmpresa << "\n puesto: \t" << puesto << endl;

    int Verificacion = myOBJ.verificacion(puesto);

    Jerequia(Verificacion);

    salary(salay);
    return 0;
}
