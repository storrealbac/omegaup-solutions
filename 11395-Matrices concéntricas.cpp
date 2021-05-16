#include<bits/stdc++.h>
using namespace std;

int n, grid[351][351];

int dist(int x, int y) {
  int a = n/2;
  return a - max(abs(a - x), abs(a - y));
}

int main() {

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) {
            int x; scanf("%d", &x);
            if (dist(i, j) != x) {
                printf("0\n");
                return 0;
            }
        }

    printf("1\n");
    return 0;
}