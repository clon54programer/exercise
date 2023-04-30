#include <iostream>
#include <fstream>

using namespace std;

class RegitryUsuary
{
private:
    string name;
    string lastName;
    int ID;
    long long phoneNumber;
    string correo;

public:
    RegitryUsuary(string x, string y, string email, int id, long long number);
    ~RegitryUsuary();
};

RegitryUsuary::RegitryUsuary(string x, string y, string email, int id, long long number)
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
    long long numeroDeTelefono;
    string correo;

    cout << "buenos dias señor usuario\n por favor deme unos datos para poder registrarse\n";
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

    cout << "nombre " << nombre << "\t apellido " << apellido << endl;
    cout << "ID " << ID << " \n numero de telefono " << numeroDeTelefono << "\n correo " << correo << endl;

    RegitryUsuary Usuario(nombre, apellido, correo, ID, numeroDeTelefono);

    ofstream userData("data.txt"); // creamos un archivo para guardar la informacion

    userData << "nombre del usuario: " << nombre << "\n apellido del usuario: " << apellido << "\n correo del usuario: " << correo << "\nId del usuario: "
             << ID << "\nnumero del usuario" << numeroDeTelefono;

    return 0;
}
