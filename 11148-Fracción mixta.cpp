#include<bits/stdc++.h>

using namespace std;

int main() {

    int a, b;
    scanf("%d%d", &a, &b);

    ((a % b) != 0) ? printf("%d %d/%d\n", a/b, a%b, b) : printf("%d\n", a/b);

    return 0;
}