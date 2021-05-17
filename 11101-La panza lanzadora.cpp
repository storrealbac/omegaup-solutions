#include<bits/stdc++.h>

using namespace std;

int main() {

    int n, min_value = INT_MAX, max_value = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int value; scanf("%d", &value);
        min_value = min(min_value, value);
        max_value = max(max_value, value);
    }

    printf("%d %d\n", min_value, max_value);

    return 0;
}