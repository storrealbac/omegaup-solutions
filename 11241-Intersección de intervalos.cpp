#include<bits/stdc++.h>

using namespace std;

int main() {

    int a_min, a_max, b_min, b_max, pertenece = 0;
    scanf("%d %d %d %d\n", &a_min, &a_max, &b_min, &b_max);
    if (b_min >= a_min and b_min <= a_max)  pertenece = 1;
    if (b_max >= a_min and b_max <= a_max)  pertenece = 1;
    if (a_min >= b_min and a_min <= b_max)  pertenece = 1;
    if (a_max >= b_min and a_max <= b_max)  pertenece = 1;

    printf("%d\n", pertenece);

    return 0;
}