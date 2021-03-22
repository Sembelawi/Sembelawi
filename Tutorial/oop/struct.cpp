#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Strukturen
struct Komplex
{
    /* data */
    double re, im;
};

void ausgeben(const Komplex& k){

    cout << k.re << " + " << k.im << "i";
}

Komplex mul(const Komplex& k1, const Komplex& k2){
    Komplex p;

    p.re = k1.re*k2.re - k1.im*k2.im;
    p.im = k1.re*k2.im + k1.im*k2.re;

    return p;
}

int main()
{   
    Komplex a = {1.0, 2.0};
    Komplex b = {3.0, 4.0};
    Komplex c = mul(a,b);

    cout << "a = ";
    ausgeben(a),
    cout << "\nb = ";
    ausgeben(b);
   
    cout << "\nc = ";
    ausgeben(c);

}