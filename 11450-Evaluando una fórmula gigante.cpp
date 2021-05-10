#include<bits/stdc++.h>

using namespace std;

int main() {

    double x, y, z;
    scanf("%lf %lf %lf", &x, &y, &z);
    printf("%lf\n", (((2*x+y)/(z))*(y*y*y-z))/(((x+2*y+3*z)/(z-2*y-3*x))+(x*x)+(z*z)) );
    return 0;
}