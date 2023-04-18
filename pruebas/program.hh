#ifndef PROGRAM.HH
#define PROGRAM .HH

void salary(int u)
{
    if (u <= 500)
    {
        std::cout << "su salario es de bajo impacto para le empresa\n";
    }
    else if (u > 500 && u <= 100)
    {
        std::cout << "su salrio es de medio impacto para la emprese\n";
    }
    else if (u > 1000)
    {
        std::cout << "su salario es de alto impacto para la impresa";
    }
}
#endif