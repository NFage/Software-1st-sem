#include <stdio.h>
#include <malloc.h>
#include <time.h>
#define RAND_MAX 9

void(scan_setting());
void(scan_move(int));

void set_cell(int* board, int x, int y, int dim_x, int val){
    board[x + (dim_x*y)];
}

int get_cell(int* board, int x, int y, int dim_x){
    return board[x + (dim_x*y)];
}


int* allocate_board(int dim_x, int dim_y){
    return (int*)malloc(sizeof (int) * dim_x * dim_y);
}

int main(void)
{
    scan_setting();
    scan_move();

    int* board = allocate_board(3,3);
    set_cell(1,3,dim_x,0);
}

void scan_setting(){
    printf("Play against computer y/n)\n");
        char answer;
    scanf("%c", &answer);
    printf("How large should the board be?\n");
        int game_size;
    scanf("%d", &game_size);
    printf("The winner is the first with a line size of %d\n", game_size);
}

void scan_move(int input){
    printf("Please input your first move\n");
    scanf("%d", &input);

    while(/*cell*/[input] != "_"){
        printf("%d is an invalid move, try again.\n", input);
        scanf("%d", &input);
    }

    /*cell*/[input] = 1; //player one input.
}

void ai_move(){

}