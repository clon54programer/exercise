#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
    // varibles
    char age[] = "12";
    double conversion;

    cout << "conversion de integer a string\n";

    if (age == "12")
    {
        cout << "es un string\n";
    }

    conversion = atol(age);

    cout << "ahora age es un integer " << age << endl;

    cout << conversion << endl;
    if (conversion == 12)
    {
        cout << conversion << " ahora es un integer age";
    }

    return 0;
}
