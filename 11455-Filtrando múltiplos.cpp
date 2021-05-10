#include<bits/stdc++.h>

using namespace std;

int main() {

    int n, x;
    scanf("%d", &n);
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (v[i] % x)
            printf("X ");
        else
            printf("%d ", v[i]);
    }
    printf("\n");
    return 0;
}