#include <iostream>
#include <conio.h>

using namespace std;

void Input(bool respuest = false)
{
    cout << "gracias por pasar";
}

int main(int argc, char const *argv[])
{
    cout << "hello world\n";

    bool respuest;
    cin.get() >> respuest; // get hace cuando le de enter manda la respuesta

    Input(respuest);

    return 0;
}
