#include<bits/stdc++.h>

using namespace std;

int main() {

    int h, w;
    scanf("%d %d", &h, &w);

    map<int, int> bodega;
    for (int i = 0; i < h*w; i++) {
        int objeto; scanf("%d", &objeto);
        if (bodega.find(objeto) == bodega.end())
            bodega[objeto] = 1;
        else bodega[objeto] ++;
    }

    for ( pair<int, int> pares : bodega )
        printf("%d ", pares.second);
    puts("");
    return 0;
}