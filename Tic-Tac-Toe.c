#include <stdio.h>
#include <stdlib.h>
void board();

  char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' } , mark;
  int  result=1 , playerChoose , player=1;
int main(){

    //------------Game---------//
    while(result != 0){
        gameBoard();
        player = (player % 2) ? 1 : 2;
        printf("Player %d Choose :  ", player);
        scanf("%d", &playerChoose);
        mark = (player == 1) ? 'X' : 'O';;


       if(playerChoose == 1 && square[1] == '1'){
        square[1]=mark;
       }

       else if(playerChoose == 2 && square[2] == '2'){
        square[2]=mark;
       }

       else if(playerChoose == 3 && square[3] == '3'){
        square[3]=mark;
       }

       else if(playerChoose == 4 && square[4] == '4'){
        square[4]=mark;
       }

       else if(playerChoose == 5 && square[5] == '5'){
        square[5]=mark;
       }

       else if(playerChoose == 6 && square[6] == '6'){
        square[6]=mark;
       }

       else if(playerChoose == 7 && square[7] == '7'){
        square[7]=mark;
       }

       else if(playerChoose == 8 && square[8] == '8'){
        square[8]=mark;
       }

       else if(playerChoose == 9 && square[9] == '9'){
        square[9]=mark;
       }
        player++;

       //-----------------------------Check Win--------------------------------------//

        if(square[1] == square[2] && square[2] == square[3]){
        printf("Game Won By Player %d" , player);
        return result = 1;
       }

       if(square[1] == square[5] && square[5] == square[9]){
        printf("Game Won By Player %d" , player);
        return result = 1;
       }

       if(square[3] == square[5] && square[5] == square[7]){
        printf("Game Won By Player %d" , player);
        return result = 1;
       }

       if(square[4] == square[5] && square[5] == square[6]){
        printf("Game Won By Player %d" , player);
        return result = 1;
       }

       if(square[7] == square[8] && square[8] == square[9]){
        printf("Game Won By Player %d" , player);
        return result = 1;
       }

       if(square[1] == square[4] && square[4] == square[7]){
        printf("Game Won By Player %d" , player);
        return result = 1;
       }

       if(square[2] == square[5] && square[5] == square[8]){
        printf("Game Won By Player %d" , player);
        return result = 1;
       }

       if(square[3] == square[6] && square[6] == square[9]){
        printf("Game Won By Player %d" , player);
        return result = 1;
       }
    }
    //---------------------Loop End------------------//
}

void gameBoard(){
    system("color 4F");
     system("cls");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);
    printf("     |     |     \n\n");
}
