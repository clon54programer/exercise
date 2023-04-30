#include <iostream>

using namespace std;

class RegitryUsuary
{
private:
    string name;
    string lastName;
    int ID;
    int phoneNumber;
    string email;

public:
    RegitryUsuary(string x, string y, string email, int id, int number);
    ~RegitryUsuary();
};

RegitryUsuary::RegitryUsuary(string x, string y, string email, int id, int number)
{
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
    return 0;
}
