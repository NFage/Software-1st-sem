#include <stdio.h>
#define MAX_Y 5
#define MAX_X 5


int blob_count(int x, int y, int grid[MAX_X][MAX_Y]){
    int sum = 0;

    if(grid[x][y] == 0) {
        return 0;
    }
    else if(grid[x][y] == 1) {
        sum++;
        grid[x][y] = 0;
        for (int i = -1; i < 2; ++i) {
            for (int j = -1; j < 2; ++j) {
                if(i + x >= 0 && i + x < 5 && j + y >= 0 && j + y < 5)
                    sum += blob_count(x + i, y + j, grid);
            }
        }

        return sum;
    }
}



int main(void)
{
    int grid[5][5] = {
            {1, 1, 0, 0, 0},
            {0, 1, 1, 0, 0},
            {0, 0, 1, 0, 1},
            {1, 0, 0, 0, 1},
            {0, 1, 0, 1, 1},
    };

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            int hej = blob_count(i, j, grid);
            if(hej == 0) continue;
            printf("This blob is %d pixels big\n", hej);
        }
    }
}