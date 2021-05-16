#include<bits/stdc++.h>

using namespace std;

bool display[100][100];
char to_replace;
string numbers;

vector<vector<vector<bool>>> all_numbers = {
    { 
        {1, 1, 1},
        {1, 0, 1},
        {1, 0, 1},
        {1, 0, 1},
        {1, 1, 1}
    }, 
    { 
        {1},
        {1},
        {1},
        {1},
        {1}
    },
    { 
        {1, 1, 1},
        {0, 0, 1},
        {1, 1, 1},
        {1, 0, 0},
        {1, 1, 1}
    },
    { 
        {1, 1, 1},
        {0, 0, 1},
        {1, 1, 1},
        {0, 0, 1},
        {1, 1, 1}
    },
    { 
        {1, 0, 1},
        {1, 0, 1},
        {1, 1, 1},
        {0, 0, 1},
        {0, 0, 1}
    },
    { 
        {1, 1, 1},
        {1, 0, 0},
        {1, 1, 1},
        {0, 0, 1},
        {1, 1, 1}
    },
    { 
        {1, 1, 1},
        {1, 0, 0},
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    },
    { 
        {1, 1, 1},
        {0, 0, 1},
        {0, 0, 1},
        {0, 0, 1},
        {0, 0, 1}
    },
    { 
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    },
    { 
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1},
        {0, 0, 1},
        {1, 1, 1}
    }
};

int main() {

    int axis = 0;
    cin >> numbers >> to_replace;

    memset(display, 0, sizeof(display));

    for (int i = 0; i < numbers.size(); i++) {
        int n = numbers[i]-'0';

        for (int i = 0; i < all_numbers[n].size(); i++) {
            for (int j = 0; j < all_numbers[n][i].size(); j++)
                if (all_numbers[n][i][j]) display[i][axis+j] = 1;
                else display[i][axis+j] = 0;
        }
                
        if (n == 1) axis -= 2;
        axis += 4;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < axis-1; j++)
            if (display[i][j])  printf("%c", to_replace);
            else                printf(" ");
        printf("\n");
    }

    return 0;
}