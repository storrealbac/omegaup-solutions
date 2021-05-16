#include<bits/stdc++.h>
#define pendl printf("\n")
using namespace std;

int ah, aw, bh, bw;
int A[6][6], B[6][6];

void suma() {
    if (aw != bw or bh != ah) printf("X\n");
    else {
        for(int i = 0; i < aw; i++) {
            for (int j = 0; j < ah; j++)
                printf("%d ", A[i][j]+B[i][j]);
            pendl;
        }
    }
}
void resta() {
    if (aw != bw or bh != ah) printf("X\n");
    else {
        for(int i = 0; i < aw; i++) {
            for (int j = 0; j < ah; j++)
               printf("%d ", A[i][j]-B[i][j]);
            pendl;
        }
    }
}

void multiplicacion() {
    if (ah != bw) printf("X\n");
    else {
       for(int i = 0; i < aw; i++) {
           for (int j = 0; j < bh; j++) {
                int response = 0;
                for (int k = 0; k < ah; k++)
                    response += A[i][k]*B[k][j];
                printf("%d ", response);
            }
            pendl;
        }
    }
}

void traspuesta() {
    for(int i = 0; i < ah; i++) {
        for (int j = 0; j < aw; j++) {
            printf("%d ", A[j][i]);
        }
        pendl;
    }
}
int main() {

    scanf("%d %d", &aw, &ah);

    for (int i = 0; i < aw; i++)
        for(int j = 0; j < ah; j++)
            scanf("%d", &A[i][j]);

    scanf("%d %d", &bw, &bh);
    for (int i = 0; i < bw; i++)
        for(int j = 0; j < bh; j++)
            scanf("%d", &B[i][j]);

    string operacion;
    while(cin >> operacion) {
        if (operacion == "SUMA")                suma();
        else if (operacion == "RESTA")          resta();
        else if (operacion == "MULTIPLICACION") multiplicacion();
        else if (operacion == "TRASPUESTA")     traspuesta();
        else break;
    }

    return 0;
}