#include<bits/stdc++.h>

using namespace std;

int main() {

    int t, m = 0; scanf("%d", &t);

    unordered_map<int, int> telefonos;
    int numero_mayor = 0, frecuencia = 0;
    for(int i = 0; i < t; i++) {
        int numero; scanf("%d", &numero);

        if (telefonos.find(numero) == telefonos.end())
            telefonos[numero] = 1;
        else
            telefonos[numero]++;

        if (frecuencia < telefonos[numero])
            frecuencia = telefonos[numero],
            numero_mayor = numero;

    }

    printf("%d %d\n", frecuencia, numero_mayor);

    return 0;
}