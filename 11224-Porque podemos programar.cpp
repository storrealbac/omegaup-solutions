#include<bits/stdc++.h>
#define exp1 (x+(x*x))
#define exp2 ((5*x)+3)
#define exp3 (exp1/exp2)

using namespace std;

int main() {

    double x;
    scanf("%lf", &x);
    printf("%lf\n", ((exp3)+x)*((exp3)/(exp3+(2*x))));

    return 0;
}