#include <iostream>

using namespace std;

class RegitryUsuary
{
private:
    string name;
    string lastName;
    int ID;
    int phoneNumber;
    string correo;

public:
    RegitryUsuary(string x, string y, string email, int id, int number);
    ~RegitryUsuary();
};

RegitryUsuary::RegitryUsuary(string x, string y, string email, int id, int number)
{
    name = x;
    lastName = y;
    correo = email;
    ID = id;
    phoneNumber = number;
}

RegitryUsuary::~RegitryUsuary()
{
}

int main(int argc, char const *argv[])
{
    // crearemos un login
    setlocale(LC_ALL, "es_ES.UTF-8");
    // varibles
    string nombre;
    string apellido;
    int ID;
    int numeroDeTelefono;
    string correo;

    cout << "buenos dias señor usuario\n por favor deme unos datos para poder registrarse";
    cout << "ingrese su nombre\n";
    cin >> nombre;

    cout << "ingrese su apellido\n";
    cin >> apellido;

    cout << "ingrese su ID\n";
    cin >> ID;

    cout << "ingrese su numero de telefono\n";
    cin >> numeroDeTelefono;

    cout << "ingrese su correo electronico\n";
    cin >> correo;

    return 0;
}
