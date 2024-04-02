#include <iostream>
#include <unordered_map>

using namespace std;

void GoodVersusEvil(int n){
    unordered_map<int, int> good = {
        {0,1}, //hobbits
        {1,2}, //men
        {2,3}, //elves
        {3,3}, //dwarves
        {4,4}, //eagles
        {5,10} //wizards
    };
    unordered_map<int, int> evil = {
        {0,1}, //orcs
        {1,2}, //men
        {2,2}, //wargs
        {3,2}, //goblins
        {4,3}, //uruk hai
        {5,5}, //trolls
        {6,11} //wizards
    };
    int i = 0, j = 0;
    int current_good = 0, current_evil = 0;
    int goodCount = 0, evilCount = 0;
    while (i < n){
        for (; j < good.size(); j++){
            cin >> current_good;
            goodCount += good[i] * current_good;
        }
        j = 0;
        for (; j < evil.size(); j++){
            cin >> current_evil;
            evilCount += evil[i] * current_evil;
        }
        j = 0;
        if (goodCount > evilCount){
            cout << "Battle " << i+1 << " Good triumps over Evil" << endl;
        }
        else if (goodCount == evilCount){
            cout << "Battle " << i+1 << " No victor on this battle field" << endl;
        }
        else {
            cout << "Battle " << i+1 << " Evil erradicates all trace of Good" << endl;
        }
        goodCount = 0;
        evilCount = 0;
        i++;
    }
}

int main() {
    int n = 0;
    cin >> n;
    GoodVersusEvil(n);
    return 0;
}
