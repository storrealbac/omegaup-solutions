#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    scanf("%d", &n);

    int matrix[n][n], index = 0;
    memset(matrix, 0, sizeof(matrix));

    // first diagonal
    int i;
    for(i = 0; i < n; i++)
        matrix[i][i] = ++index;

    // second diagonal
    i--;
    for (int j = 0; j < n; j++, i--)
        if (matrix[j][i] == 0)
            matrix[j][i] = ++index;

    printf("Matriz X:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("La matriz X invertida es:\n");
    for(int i = 0; i < n; i++) {
        for(int j = n-1; j >= 0; j--) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }



    return 0;
}