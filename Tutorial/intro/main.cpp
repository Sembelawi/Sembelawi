// #include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n = 123;
    double d1 = 1.0;
    double d2 = 12.3;
    double d3 = 123.456;
    
    cout << "d1= " << d1 << ", d2 = " << d2 << endl;      
    cout << showpoint << "d1= " << d1 << ", d2 = " << d2 << endl;      // showpoint bewirkt was 
    cout << fixed <<  "d1= " << d1 ;
    cout << ", d2 = " << scientific << d2 << endl;      // showpoint bewirkt was 
    
    
   // Ausgabe Möglichkeiten
  
   cout << "\nn = ... " << endl;
   cout << n << endl;
   cout << hex << n << endl;  // wird in hex ausgegeben
   cout << oct << n << "\n" << endl;

   // Formatieren dafür wird die iomanip Lib benötigt

   cout << setfill('.') << n << endl;
   cout << setw(6) << n << endl;
   cout << n <<"\n" << endl;

   cout << d3 << endl; 
   // cout.imbue(locale("de_DE.UTF-8"));
   cout << d3 << endl; 
}