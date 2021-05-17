#include<bits/stdc++.h>

using namespace std;

int main() {

    string word; cin >> word;
    int cut_size; scanf("%d", &cut_size);

    cout << word.substr(0, cut_size) << word.substr(word.size()-cut_size, cut_size) << endl;

    return 0;
}