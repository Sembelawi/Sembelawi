#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{   
    int* k = new int;       //zu jedem New soll ein Delete Befehl geben!

    *k = 1;
    delete k;

    int* zeiger = new int[2];             // für Arrays verwendet man new[]
    
    zeiger[0] = 0;
    zeiger[1] = 1;

    for (int i = 0; i < 2; i++)
    {
        /* code */
        cout << "array  " << i << " =  " <<zeiger[i] << endl;
    }
        
    delete[] zeiger;


}