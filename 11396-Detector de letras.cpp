#include<bits/stdc++.h>

using namespace std;

bool vocalMayuscula(char c) {
    char vocales[] = {'A', 'E', 'I', 'O', 'U'};
    for(int i = 0; i < sizeof(vocales); i++)
        if (c == vocales[i])
            return true;
    return false;
}

bool consonanteMayuscula(char c) {
    char consonantes[] = {'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'X', 'Z', 'W'};
    for (int i = 0; i < sizeof(consonantes); i++)
        if (c == consonantes[i])
            return true;
    return false;
}

int main() {

    char c;
    int stop = 0;
    while(stop < 10) {
        c = getchar();
        if (vocalMayuscula(c) )
            printf("V "), stop++;
        else if (consonanteMayuscula(c))
            printf("C "), stop++;
        else if (c == 'Y')
            printf("S "), stop++;
    }
    printf("\n");
    return 0;
}