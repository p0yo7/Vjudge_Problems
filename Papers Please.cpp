#include <iostream>

using namespace std;

string PapersPlease(int n){
    int i = 0;
    int current_val;
    bool flag = true;
    while(i < n && flag){
        cin >> current_val;
        i++;
        if (current_val & 1) continue;
        else {
            if (!(current_val % 3 == 0 || current_val % 5 == 0)){
                flag = false;
            }
        }
    }
    if (flag){
        return "APPROVED";
    }
    else {
        return "DENIED";
    }
}


int main()
{
    int n = 0;
    cin >> n;
    cout << PapersPlease(n) << endl;
    return 0;
}