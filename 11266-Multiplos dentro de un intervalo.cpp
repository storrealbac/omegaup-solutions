#include<bits/stdc++.h>

using namespace std;

int main() {

    int from, to;
    scanf("%d %d\n", &from, &to);

    for (int i = 1; i <= ((to)/from); i++)
        printf("%d ", i*from);
    printf("\n");
    return 0;
}