#include<bits/stdc++.h>

using namespace std;

int main() {

    int d, m, y;
    while(scanf("%d/%d/%d\n", &d, &m, &y) != EOF) {
        if (y <= 73)    printf("%d/%d/20%d\n", d, m, y);
        else            printf("%d/%d/19%d\n", d, m, y);

    }

    return 0;
}