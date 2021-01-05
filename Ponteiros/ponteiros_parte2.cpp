#include <iostream>
using namespace std;

int main() {

    int array[] = {1, 2, 3, 4, 5};
    int *parray = array;
    int **pparray = &parray;
    int i = 0;
    
    while(i < 5) {
        cout << *parray << endl;
        parray++;
        i++;
    }    

    cout << **pparray << endl;

    return 0;
}
