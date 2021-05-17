#include<bits/stdc++.h>

using namespace std;

int main() {

    int p, q;
    scanf("%d%d", &p, &q);
    if(((p*p*p)+(q*q*q*q)- (2*(p*p))) < 680)
        printf("%d\n%d\n", p, q);

    return 0;
}