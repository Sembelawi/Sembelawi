#include <iostream>
#include <vector>
#include <string>

using namespace std;

// codes aus der Youtube Videos 
//Bindungsregeln video 011
void f1(int& i){ cout << "f(int& i)" << endl;}
void f2(const int& i){ cout << "f(const int& i)" << endl;}

int main()
{   
    int k = 0;
    const int& r = k;   // das ist erlaubt   

    const int c = 1;
    const int& r2 = c;   // ohne const wird eine Fehlermeldung geben

    // f1(c);  -> das ist  verboten
    f2(c);      // -> das geht

    f1(k);
    f2(k);
    
}