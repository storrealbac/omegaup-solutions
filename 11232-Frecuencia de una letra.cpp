#include<bits/stdc++.h>

using namespace std;

int main() {

    string word;
    int counter = 0;
    char character;

    cin >> word >> character;

    for (int i = 0; i < word.size(); i++)
        if (word[i] == character) counter++;

    printf("%d\n", counter);

    return 0;
}