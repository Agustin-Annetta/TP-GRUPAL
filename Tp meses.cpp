
#include <iostream>
using namespace std;

int main()
{
    cout << "Ingrese el numero de mes:\n";
    int m;
    cin >> m;
    cout << "Ingrese el anio en formato aaaa:\n";
    int a;
    cin >> a;

    bool bis;

    int resto1 = a % 4;

    bool cond1;
    if (resto1 == 0) { //Si el resto es 0, entonces es divisible por 4
        cond1 = 1;     //Si se cumple la condicion la variable cond1 sera true
    }
    else {
        cond1 = 0;
    }

    int resto2 = a % 100;
    bool cond2;
    if (resto2 == 0) {
        cond2 = 1;
    }
    else {
        cond2 = 0;
    }

    int resto3 = a % 400;
    bool cond3;
    if (resto3 == 0) {
        cond3 = 1;
    }
    else {
        cond3 = 0;
    }
    /*Para que sea bisisesto tiene que ser
    Opcion 1: -Divisible por 4 y no divisible por 100
    Opcion 2: -Si es divisible por 4, por 100 y por 400*/

    bool Opcion1;
    if (cond1 == 1 and cond2 == 0) { //si se cumple la condicion 1 y no se cumple la 2 es año bisiesto
        Opcion1 = 1;

    }
    else {
        Opcion1 = 0;

    }

    bool Opcion2;
    if (cond2 == 1 || cond3 == 1) { //si se cumple la condicion 3 y  se cumple la 2 es año bisiesto
        Opcion2 = 1;

    }
    else {
        Opcion2 = 0;
    }
    // std::cout << Opcion1;
    if (Opcion1 == 1 or Opcion2 == 1) {
        cout << a;
        cout << " es anio bisiesto\n";
        bis = 1;
    }
    else {
        cout << a;
        cout << " no es anio bisiesto\n";
        bis = 0;
    }

    if (m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12) {
        cout << " el mes tiene 31 dias\n";
    }
    if (m == 4 or m == 6 or m == 9 or m == 11) {
        cout << " el mes tiene 30 dias\n";
    }
    if (m == 2 and bis == 1) {
        cout << " el mes tiene 29 dias\n";
    }
    if (m == 2 and bis == 0) {
        cout << " el mes tiene 28 dias\n";
    }

}   
