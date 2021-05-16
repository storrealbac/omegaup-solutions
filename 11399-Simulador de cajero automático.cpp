#include<bits/stdc++.h>

using namespace std;

int main() {

    char option;
    int money = 1000, ammount;
    while (scanf("%c", &option) != EOF) {
        switch (option) {
            case 'C':
                printf("$%d\n", money);
                break;
            case 'D':
                scanf("%d", &ammount);
                money += ammount;
                break;
            case 'R':
                scanf("%d", &ammount);
                money -= ammount;
                break;
            case 'S':
                return 0;
        }
    }
    return 0;
}