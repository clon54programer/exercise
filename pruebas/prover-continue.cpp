#include <iostream>

using namespace std;

/*en este archivo voy a practicar el uso de continue*/

int main(int argc, char const *argv[])
{
    cout << "ingrese su contraseña" << endl;

    // varibles
    int intentos = 0;
    const string contraseña = "juan16";
    const string name = "juan";

    string password;
    string nombre;
    // bucle
    while (true)
    {
        cout << "coloque su contraseña\n";

        cin >> password;

        if (password == contraseña)
        {
            cout << "en horabuena";
            break;
        }
        else if (password != contraseña)
        {
            cout << "la contraseña es incorrecta \n";
            continue;
        }

        for (int i = 0; i <= 3; i++)
        {
            cout << "coloque su nombre \n";
            cin >> nombre;
            if (nombre == name)
            {
                cout << "nombre de usuario correcto\n";
            }
            else
            {
                cout << "nombre de usuario incorrecro\n";
            }
        }
    }
    return 0;
}
