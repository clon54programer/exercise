#include <iostream>

using namespace std;

class Estudiantes
{
public:
    string estudiantes[10];
    double notas[10];

    void AnalisisNotas(string y, double x);
};

// verifica si la nota es baja, basica, promedio, buena y excelenta
void Estudiantes::AnalisisNotas(string y, double x)
{
    if (x <= 2.9)
    {
        cout << "El alumno " << y << " tiene una nota muy baja \n";
    }
    else if (x > 2.9 && x <= 3.5)
    {
        cout << "El alumno " << y << " tiene una nota muy basica\n";
    }
    else if (x > 3.5 && x < 4.0)
    {
        cout << "El alumno " << y << " tiene una promedio, debe mejor \n";
    }
    else if (x == 5.0)
    {
        cout << "El alumno " << y << " tiene una excelente nota \n";
    }

    else
    {
        cout << "El alumno " << y << " tiene una buena notas \n";
    }
}

int main(int argc, char const *argv[])
{
    // objetos
    Estudiantes Grado10;
    Estudiantes Notas10;

    // estudieantes
    Grado10.estudiantes[0] = "Guillermo";
    Grado10.estudiantes[1] = "juan";
    Grado10.estudiantes[2] = "david";
    Grado10.estudiantes[3] = "juanjo";
    Grado10.estudiantes[4] = "agustin";
    Grado10.estudiantes[5] = "maria";
    Grado10.estudiantes[6] = "gilma";
    Grado10.estudiantes[7] = "weon";
    Grado10.estudiantes[8] = "diego";
    Grado10.estudiantes[9] = "dayana";

    // notas
    Grado10.notas[0] = 1.0;
    Grado10.notas[1] = 3.0;
    Grado10.notas[2] = 3.7;
    Grado10.notas[3] = 4.0;
    Grado10.notas[4] = 2.5;
    Grado10.notas[5] = 1.0;
    Grado10.notas[6] = 4.0;
    Grado10.notas[7] = 3.0;
    Grado10.notas[8] = 5.0;
    Grado10.notas[9] = 1.23;

    // variables de interacion
    double arrayCurrentIndex;

    // comienzo de el programa
    cout << "bienvenido profesor ";

    while (true)
    {
        cout << "Que va a hacer va agregar una nota o va a ver las notas. \n si va a regitras coloque 1 sino es coloque 2 \n";

        int ruta;
        int numeroDeLista;

        cin >> ruta;

        if (ruta == 1)
        {
            cout << "este el numero del los estudinates \n";

            // muestra los estudiantes y su numero de lista
            for (int a = 0; a <= Grado10.estudiantes->length(); a++)
            {
                cout << "el estudiante " << Grado10.estudiantes[a] << " el numero que ocupa es " << a << "\n";
            }

            cout << " \tcual es el estudante a editar \n";

            cin >> numeroDeLista;

            cout << "este es el estudiante a editar" << Grado10.estudiantes[numeroDeLista] << "\n";
            cout << "coloque su nueva nota";

            cin >> arrayCurrentIndex;
            arrayCurrentIndex = Grado10.notas[numeroDeLista];

            cout << Grado10.estudiantes[numeroDeLista] << " esta es su nueva nota \n";

            break;
        }
        else
        {
            // muestra las nota de los estudiantes
            for (int i = 0; i <= Grado10.estudiantes->length(); i++)
            {
                cout << "estudiante \t" << Grado10.estudiantes[i] << "\t su nota es \t" << Grado10.notas[i] << "\n";
                Grado10.AnalisisNotas(Grado10.estudiantes[i], Grado10.notas[i]);
            }
            cout << "si termino coloque 3\n";

            cin >> ruta;
            if (ruta == 3)
            {

                cout << "revision terminada";
                break;
            }
        }
    }

    return 0;
}