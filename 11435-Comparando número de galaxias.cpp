#include<bits/stdc++.h>

using namespace std;

int main() {

    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    (a < b)  ? printf("True ")  : printf("False ");
    (c > a)  ? printf("True ")  : printf("False ");
    (a == b) ? printf("True ")  : printf("False ");
    (a != c) ? printf("True ")  : printf("False ");
    (c <= b) ? printf("True\n") : printf("False\n");

    return 0;
}