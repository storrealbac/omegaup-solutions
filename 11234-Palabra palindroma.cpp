#include<bits/stdc++.h>

using namespace std;

int main() {

    string word, reversed;
    cin >> word;

    reversed = word;
    reverse(reversed.begin(), reversed.end());

    (reversed == word) ? printf("SI\n") : printf("NO\n");

    return 0;
}