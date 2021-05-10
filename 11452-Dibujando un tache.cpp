#include<bits/stdc++.h>

using namespace std;

void spaces(int n) {
    for(int i = 0; i < n; i++)
        printf(" ");
}

int main() {

    int n, mid, start = 0;
    scanf("%d", &n);

    mid = n-2;
    for(int i = 0; i < (n/2); i++) {
        spaces(start);
        printf("@");
        spaces(mid);
        printf("@\n");
        start++, mid-=2;
    }
    
    spaces(start--);
    printf("@\n");
    mid += 2;
    
    for (int i = 0; i < (n/2); i++) {
        spaces(start);
        printf("@");
        spaces(mid);
        printf("@\n");
        start--, mid+=2;
    }

    return 0;
}