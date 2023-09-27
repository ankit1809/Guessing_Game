#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int game(char comp, char you){
    if(you==comp){
        return 0;
    }
     //rock paper case
    if(you=='r' && comp=='p'){
        return 1;
    }
    else if(you=='p' && comp=='r'){
        return -1;
    }
    //rock scissor case
        if(you=='r' && comp=='s'){
        return 1;
    }
    else if(you=='s' && comp=='r'){
        return -1;
    }
    //rock threa case
        if(you=='t' && comp=='r'){
        return 1;
    }
    else if(you=='r' && comp=='t'){
        return -1;
    }
    //paper sciccors case
        if(you=='s' && comp=='p'){
        return 1;
    }
    else if(you=='p' && comp=='s'){
        return -1;
    }
    //paper thread case
        if(you=='t' && comp=='p'){
        return 1;
    }
    else if(you=='p' && comp=='t'){
        return -1;
    }
    //thread scissors case
        if(you=='s' && comp=='t'){
        return 1;
    }
    else if(you=='t' && comp=='s'){
        return -1;
    }
}

int main()
{
    char comp,you;
    int result;
    srand(time(0));
    int number = rand()%3+1;

 
    if(number==0){
        comp = 'r';
    }
    else if(number==1)
     {
        comp='p';

     }
    else if(number==2)
     {
        comp='s';

     }
    else
     {
        comp='t';
     }
    printf("Enter 'r' for rock. \n      'p' for paper. \n      's' for scissors \n      't' for thread\n");
    scanf("%c",&you);
       if(you == 'r' || you=='p' ||you=='s'||you=='t'){

    result = game(comp,you);

    if(result==0){
        printf("GAME DRAW \n");
    }
    else if(result==1){
        printf("YOU WON\n");
    }
    else{
        printf("YOU LOSE.\nPLEASE TRY AGAIN.");
    }
  
   printf("You chose %c and computer chose %c. ", you, comp);
    }
    else{
        printf("Enter a valid input\n");
    }
    
return 0;
}