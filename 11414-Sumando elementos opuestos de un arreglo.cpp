#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    scanf("%d", &n);
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0, j = n-1; i != j+1; i++, j--) {
        printf("%d ", arr[i]+arr[j]);
    }
    printf("\n");

    return 0;
}