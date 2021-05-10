#include<bits/stdc++.h>

using namespace std;

int main() {

    int a_size, b_size, a_olor, b_olor;
    scanf("%d%d%d%d", &a_size, &a_olor, &b_size, &b_olor);

    if (a_size > b_size and a_olor > b_olor)
        printf("Hueso 1\n");
    else if (b_size > a_size and b_olor > a_olor)
        printf("Hueso 2\n");
    else
        printf("Perrito confundido :(\n");

    return 0;
}