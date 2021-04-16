#include "header.h"
//char box[10]={'0','1','2','3','4','5','6','7','8','9'};
int main()
{
    int choice,player=1,i;
    char mark;
    do{
        create_board();
        player= (player % 2) ? 1: 2;

        printf("Player %d, enter a number: ",player);
        scanf("%d",&choice);

        mark = (player==1) ? 'X' : 'O';
        mark_board(choice,mark);

        i=check_who_win();
        player++;

    }while(i == -1);

    create_board();

    if(i==1)
        printf("Player %d  you have won the game",--player);
    else
        printf("<-------Draw------>");


    return 0;
}
