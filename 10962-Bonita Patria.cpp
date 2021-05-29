#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    scanf("%d", &t);

    if (!(t < 40 and t >= 1)) {
        printf("ERROR\n");
        return 0;
    }

    int m = 0, pos;
    for (int i = 1; i <= t; i++) {
        int kid; scanf("%d", &kid);
        if (kid > m)
            m = kid, pos = i;
    }

    printf("%d\n", pos);

    return 0;
}