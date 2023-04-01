#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "hello world \n";
    cout << "Vamos a probar los punteros en C++ \n";

    string name = "name";
    string *p;

    p = &name;

    cout << "aqui nos muestra la memoria dinamica \n";
    cout << "el valor de p: \t" << p << "\n";
    cout << "el valor de &name: \t" << &name << '\n';
    cout << "el valor de &p: \t" << &p << "\n";

    cout << "aqui el resulatado \n";
    cout << "el valor de la varible name: \t" << name << "\n";

    cout << "ahora vamos a manipular el espacio en memoria \n";

    cout << "el valor de a sin nada \n";

    // delete p; // con esto liberamos la memoria, es decir eliminamos el puntero

    // aqui se acaba el programa
    cout << name << "\n";
    cout << p << "\n";

    string age = "123";
    string *a;

    a = &age;

    cout << age << "\t" << &age << "\n";

    delete p;
    // delete a; esto manda error
    return 0;
}