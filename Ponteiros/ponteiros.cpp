#include <iostream>
using namespace std;

void foo(int *n) {
    *n = 20;
}

int main() {

    /*
    int var = 10;  
    
    foo(&var);    
    cout << var << endl;    
    */

    int *vet = new int[10];
    *vet = 10;
    *(vet + 1) = 20;
    cout << *vet << endl;
    cout << *(vet + 1) << endl;

   return 0;
}