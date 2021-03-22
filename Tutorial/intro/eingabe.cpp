#include <iostream>
#include <limits>

using namespace std;

int main(){
    int i;

    cin >> i ;
    if (cin.fail())
    {
        /* code */
        cout << "error";
        cin.clear();
        cin.ignore(numeric_limits<int>::max(), '\n');
        
    }
    else
    {
        cout << i << endl;
    }
    
    
    

}