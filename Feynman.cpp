#include <iostream>

using namespace std;

int Feynman(int n){
    return n * ( n+1 ) * ( 2*n+1 ) / 6;
}


int main()
{
    int n = 0;
    while (cin >> n && n != 0){
        cout << Feynman(n) << endl;
    }
    return 0;
}