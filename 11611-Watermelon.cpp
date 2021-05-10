#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    scanf("%d", &n);

    if (n > 3 and (n%2) == 0)
        printf("SI\n");
    else
        printf("NO\n");

    return 0;
}