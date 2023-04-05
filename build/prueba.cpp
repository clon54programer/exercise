#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "hello world \n";
    string option;

    cin >> option;

    if (option == "true")
    {
        cout << "gracias";
    }
    else
    {
        cout << "xd\n";
        return -1; // forma de matar erroes
    }

    return 0;
}
