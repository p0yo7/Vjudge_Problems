#include <iostream>
#include <unordered_set>

using namespace std;

int MagicMultiple(int k){
    unordered_set<char> digits;
    int i = 1, current_val = 0;
    string current_string = "";
    while (digits.size() < 10){
        current_val = i*k;
        current_string = to_string(current_val);
        for (char digit : current_string){
            digits.insert(digit);
        }
        i++;
    }
    return i-1;
}

int main() {
    int k = 0;
    cin >> k;
    if (k == 0) return 0;
    cout << MagicMultiple(k) << endl;
    return 0;
}
