#include<bits/stdc++.h>

using namespace std;

int main() {

    string str, reversed;
    cin >> str; 
    transform(str.begin(), str.end(), str.begin(), [](unsigned char c){ return tolower(c); });
    reversed = str;
    reverse(reversed.begin(), reversed.end());

    size_t counter = 0;
    for (int i = 0; i < str.size(); i++)
        if (str[i] == reversed[i])
            counter++;
            
    printf("%ld\n", counter);

    return 0;
}