#include<bits/stdc++.h>

using namespace std; 

int main() {

    int x, y, z;
    scanf("%d %d %d\n", &x, &y, &z);

    if (abs(z-x) == abs(z-y))
        printf("raton C\n");
    else if (abs(z-x) < abs(z-y))
        printf("gato A\n");
    else if (abs(z-x) > abs(z-y))
        printf("gato B\n");

    return 0;
}