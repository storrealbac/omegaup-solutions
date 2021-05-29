#include<bits/stdc++.h>

using namespace std;

int main() {

    float xa, ya, xb, yb, dist;
    scanf("%f %f %f %f", &xa, &ya, &xb, &yb);

    dist = sqrt( pow(xa-xb, 2) + pow(ya-yb, 2) );
    if (dist >= 150)
        puts("sana");
    else
        puts("insana");

    return 0;
}