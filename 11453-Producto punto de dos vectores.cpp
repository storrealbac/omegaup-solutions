#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    scanf("%d", &n);
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    size_t sum = 0;
    for (int i = 0; i < n; i++) {
        int element; scanf("%d", &element);
        sum += (element*v[i]);
    }

    printf("%ld\n", sum);

    return 0;
}