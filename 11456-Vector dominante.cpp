#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    scanf("%d", &n);

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    for (int i = 0; i < n; i++) {
        int element; scanf("%d", &element);
        if (element >= v[i]) {
            printf("0\n");
            return 0;
        }
    }

    printf("1\n");

    return 0;
}