#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    scanf("%d", &n);

    int t, d, old_t, old_d, m = 0;
    scanf("%d%d", &old_t, &old_d);
    for (int i = 0; i < n-1; i++) {
        scanf("%d%d", &t, &d);
        m = max(m, (d-old_d)/(t-old_t) );
        old_d = d, old_t = t;
    }
    printf("%d\n", m);

    return 0;
}