#include<bits/stdc++.h>

using namespace std;

int main() {

    vector<int> numbers;
    int in;
    while (scanf("%d", &in) != EOF)
        numbers.push_back(in);

    sort(numbers.begin(), numbers.end());
    numbers.erase( unique( numbers.begin(), numbers.end() ), numbers.end() );
    
    printf("[");
    while(!numbers.empty()) {
        if (numbers.size() > 1)
            printf("'%d', ", numbers.back()),
            numbers.pop_back();
        else
            printf("'%d']\n", numbers.back()),
            numbers.pop_back();
    }

    return 0;
}