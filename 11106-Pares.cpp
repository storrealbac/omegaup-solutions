#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {

    int n;
    scanf("%d", &n);
    vector<ll> pares;

    for(int i = 0; i < n; i++) {
        ll value; scanf("%lld", &value);
        if (value%2 == 0)   pares.push_back(value);
    }

    if (pares.empty()) printf(":(");
    for (int i = 0; i < pares.size(); i++)
        printf("[%lld] ", pares[i]);
    printf("\n");

    return 0;
}