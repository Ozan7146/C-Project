#include <stdio.h>
#include <stdlib.h>

void guess(int *number){
    *number=rand()%100;
}
void game(int *round, int *guess_number, int *player_number, char *status){
    if(*round<3){
        if(*guess_number < *player_number){
            printf("Try a smaller number!\n");
        }else if(*guess_number > *player_number){
            printf("Try a bigger number!\n");
        }else{
            printf("You win the game!\n");
            *status = 'W';
        }
    }else if (*round==3){
        if(*guess_number == *player_number){
            printf("You win the game!\n");
            *status = 'W';
        }else{
            printf("You lost the game!\n");
            *status = 'L';
        }
    }
    
    
}

int main(){
    
    int num, account, bet, player_number, round=1;
    char ch='Y', status;
    printf("Enter a start account for the game $:");
    scanf("%d",&account);
    
    while(ch=='y'||ch=='Y'){
        while(1){
            printf("Enter the bet amount: ");
            scanf("%d",&bet);
            if(bet<=account){
                break;
            }else{
                printf("You can't bet higher than your currency.\n");
            }
        }
     
        guess(&num);
        //printf("Num: %d\n", num);
        
        while(round<=3){
            do{
                printf("Enter a number between 0 to 100: ");
                scanf("%d",&player_number);
            }while(player_number<=0 || player_number>=100);
            
            game(&round, &num, &player_number, &status);
            round++;
            
            if(status == 'W'){
                account += bet;
                round = 1;
                printf("Your account is %d$\n", account);
                break;
            }
           
        }
        if(status == 'L'){
            account -= bet;
            round = 1;
            printf("Your account is %d$\n", account);
        }
        
        if(account<=0){
            printf("You lost your all money!\n");
            break;
        }else{
            round = 1;
            status = 'x';
            printf("Do you want to play again?\n");
            scanf(" %c", &ch);
            
        }
        
    }
            
    printf("Thank you for playing. See you next time!\n");
    return 0;
}

/*
--------------------------------------------------------------------------------------
not compile --> 20 point
different function prototypes than the ones given in homework --> half point from that function
--------------------------------------------------------------------------------------
main function

-input account      ----> 2.5 point
-input a bet and control it is smaller or equals to account		----> 10 point
-call guess function	----> 5 point	
-loop 3 times for round    ----> 5 point
----input number between 0 to 100, until it is on the range (do-while)  ----> 5 point
----call game function  	----> 5 point
----if status = W make necessary operations  ----> 10 point
-if status = L make necessary operations    ----> 10 point
-if account is smaller or equals to 0     ----> 5 point
----output lost all money and finish the game      ----> 5 point
----if not, make neccessary operations and ask for play again   ----> 10 point
-output thank you for playing   ----> 2.5 point
--------------------------------------------------------------------------------------
guess function  (using pointer is a must)  

-create a random number      ----> 5 point
--------------------------------------------------------------------------------------
game function (using pointer is a must)

-if round is smaller than 3			----> 10 point
----guess number not equals to random number output tips
----guess number is equals to random number output win and change the status
--else if round equals to 3			----> 10 point
----guess number not equals to random number output win and change the status
----guess number is equals to random number output lost and change the status
--------------------------------------------------------------------------------------
*/
