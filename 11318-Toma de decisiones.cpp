#include<bits/stdc++.h>

using namespace std;

int main() {
    
    int a, b;
    scanf("%d%d", &a, &b);
    
    if (a+b == 5) {
        b += 3;
        printf("%d\n", (2*a)+b);
    } else {
        a--;
        if (((7*a)+b) & 1)  printf("%d\n", a*b);
        else printf("%d\n", a-b);
    }

    return 0;
}