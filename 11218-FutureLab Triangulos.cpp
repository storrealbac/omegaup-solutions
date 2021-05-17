#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    scanf("%d", &n);

    vector<int> longitudes(n);
    for (int i = 0; i < n; i++)
        scanf("%d", &longitudes[i]);

    sort(longitudes.begin(), longitudes.end());

    for (int i = longitudes.size()-1; i >= 2; i--)
        if (longitudes[i] < (longitudes[i-1]+longitudes[i-2])) {
            printf("%d\n", longitudes[i]+longitudes[i-1]+longitudes[i-2]);
            return 0;
        }
        
    printf("-1\n");
    return 0;
}