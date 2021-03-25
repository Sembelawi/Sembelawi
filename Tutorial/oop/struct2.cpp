#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Strukturen
struct Komplex
{
    /* data */
    double re, im;

    // Implizite Inline Funktionen
    void ausgeben()
    {
        cout << re << ((im < 0) ? "" : " + ") << im << "i";
    }

    Komplex mul(const Komplex& k)
    {
        Komplex p;

        p.re = re * k.re - im * k.im;
        p.im = re * k.im + im * k.re;

        return p;
    }
};

int main()
{
    Komplex a = {1.0, 2.0};
    Komplex b = {3.0, 4.0};
    Komplex c = a.mul(b);

    cout << "a = ";
    a.ausgeben(),

    cout << "\nb = ";
    b.ausgeben();

    cout << "\nc = ";
    c.ausgeben()    ;
}