#include <iostream>
using namespace std;
bool czy_bezkwadratowa(int n) {
    for(int i=2; i<(n/2)+1; i++) {
        if(n%(i*i)==0) {
            return false;
        }
    }
    return true;
}
int main()
{
    int liczba;
    cin >> liczba;
    cout<< liczba << " czy bezkwadratowa: " << czy_bezkwadratowa(liczba) << endl;
    return 0;
}