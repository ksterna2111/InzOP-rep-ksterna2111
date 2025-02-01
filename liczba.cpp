#include <iostream>
using namespace std;
int main()
{
    int liczba;
    cin >> liczba;
    if(liczba>0) {
        cout<< liczba << endl;
    }
    else {
        cout << "Podano niepoprawne dane!" << endl;
    }
    return 0;
}