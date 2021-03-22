#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int k = 1 , l = 10;
    int* const z = &k;  // konstante zeiger auf die Adresse von K, er kann nicht auf andere Adressen zeigen
    *z = 2;
    // z = &l; das ist nicht erlaubt

    cout << "K = " << k << endl;
  
    //Referenzen Beispiel
    // eine Referenz muss immer intialiesrt werden

    int& r = k; //r ist ein Alias von k

    r = 6;
    cout << "r = " << r << endl;
    cout << "&r = " << &r << endl; // die Speicheradressen beiden variablen sind identisch!
    cout << "&k = " << &k << endl;
    cout << "K = " << k << endl;

    r = l;  // genau k = l -> = 10
    cout << "K = " << k << endl;
    

}