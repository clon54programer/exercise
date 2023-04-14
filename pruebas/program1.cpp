#include <iostream>

using namespace std;

class Personal
{
private:
    /* data */
public:
    Personal(/* args */);
    ~Personal();
};

Personal::Personal(/* args */)
{
}

Personal::~Personal()
{
}

int main(int argc, char const *argv[])
{
    cout << "ingrese su nombre\n";
    string name;
    cin >> name;
    cout << "ingrese su salario";
    double salay;
    cin >> salay;

    return 0;
}
