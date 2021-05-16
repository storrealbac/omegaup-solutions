#include<bits/stdc++.h>

using namespace std;

int main() {

    int n, a, b;
    scanf("%d%d%d", &n, &a, &b);
    while (n < 1000) {
        if (n&1)n += (b*(b+1))/2;
        else    n += (a*(a+1))/2;
    }

    printf("%d\n", n);

    return 0;
}