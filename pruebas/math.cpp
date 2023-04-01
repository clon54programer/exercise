#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "escriba si o no para continuar o presione enter \n";

    string interacion;
    getline(cin, interacion);

    cout << interacion << '\n';
    cout << "gracias por interatuar en este programa\n";

    cin >> interacion;
    cout << "gracias por interatuar";
    return 0;
}