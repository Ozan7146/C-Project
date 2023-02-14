#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void guess(int *number)
{	
 	srand(time(NULL));
 	*number=rand()%100;
}


void game(int *round,int *guess_number,int *player_number,char *status)
{


		if(*guess_number==*player_number)
		{
			*status='W';
			
		}	
		

	
		else if(*guess_number<*player_number)
		{
			printf("Try a smaller number!\n");
		}
		
		else if(*guess_number>*player_number)
		{
			printf("Try a bigger number!\n");
		}
	
			
}


int main()
{
	int bet_amount,loop,number,total_money,player_num;
	char con,stat;


	printf("Enter your starting account:\n");
	scanf("%d",&total_money);
	
	 
	  
	  	
do{
loop=0;		
stat=0;
	guess(&number);		

		do{
		printf("Enter the amount that you want to bet:\n");
		scanf("%d",&bet_amount);
		printf("You money is not enough try again\n");
	      }while(bet_amount>total_money);
	  
	  	
		printf("Rastgele sayi= %d\n",number);
		
	  	

		
		 while(loop<3)
		 	{
		 	printf("Enter the number between 0-100:\n");
			scanf("%d",&player_num);
			
		
			game(&loop,&number,&player_num,&stat);
			loop++;
			
			if(number==player_num)
			break;
			}
		  
		
	
	
		if(stat=='W')
		{
		
			printf("You win the game the number was %d\n",number);
			total_money=total_money+bet_amount;
		}
		
		else // if(stat=='L');
		{
			
			printf("You lost the number was %d\n",number);
			total_money=total_money-bet_amount;
		}
		printf("your total money = %d$\n",total_money);
		if(total_money==0 || total_money<0)
		{
			printf("You lost all your money\n");
			break;
		}
		
		if(total_money!=0 || total_money<!0)
		{
		printf("Do you want to continue:\n");
		scanf(" %c",&con);
		}
		
}while(con=='Y' || con=='y');
	
	if(con!='Y' || con!='y' )
	{
		printf("Thank you for playing see you next time");
	}
	
	return 0;
}
