#include<bits/stdc++.h>

using namespace std;

int main() {

    int t, C;
    scanf("%d %d", &t, &C);
    int dentro = 0;
    for(int i = 0; i < t; i++) {

        int c; scanf("%d", &c);

        if (dentro+c <= C) {
            puts("pasa");
            dentro += c;
        } else puts("espera");

    }

    return 0;
}