#include<bits/stdc++.h>
#define range(L, from, to) (L >= from and L <= to)

using namespace std;

int main() {

    int L;
    scanf("%d", &L);

    if range(L, 0, 3) {
        printf("BEBE\n");
    } else if range(L, 4, 14) {
        printf("NINO\n");
    } else if range(L, 15, 18) {
        printf("JOVEN\n");
    } else if range(L, 19, 65) {
        printf("ADULTO\n");
    } else {
        printf("ADULTO 3RA\n");
    }

    return 0;
}