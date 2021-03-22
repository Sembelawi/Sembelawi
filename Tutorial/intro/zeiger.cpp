#include <iostream>
#include <limits>

using namespace std;

int main(){
    int i = 1, j = 2;   

    const int* z1 = &i;    // const bezieht sich auf int in beiden Fällen(identisch)
    int const* z2 = &i;  

    int* const z3 = &j;
    cout << z1 << endl
         << z2 << endl;     

    cout << z3 << endl;   //constant zeiger
    // z3 = &j;            //versuch z3 auf andere adresse zu zeigen-> Error

    int const* const z4 = &j; //constant zeiger auf constant int
    cout << "Z4  " << z4 << endl;
    // *z4 = 5; fehler konstanter Wert kann nicht geändert werden
    int const* const * z5 = &z4;

    cout <<"Z5  " << z5 << endl;
    cout <<"*Z5  " << *z5 << endl;          //wert in z5
    cout <<"**Z5  " << *(*z5) << endl;      //wert in j, da z4 auf die von j zeigt


}