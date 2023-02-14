#include<stdio.h>

int main()
{
int command,i,j,ticket,park[10][10],tic_num;



do{

printf("Enter a command:\n");
scanf("%d",&command);

	for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
			{
			park[i][j]=-1;
			}
		}

switch(command)
{

case 0: //first state
	{

		for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
			{
			printf("%d  ",park[i][j]);
			}
			
			printf("\n");
		}
		
		break;
		
	}


	
case 1:  //last state 
	{
	
	
	
	
	for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
			{
			printf("%d  ",park[i][j]);
			}
			
			printf("\n");
		}
	
	
	
		break;
	}


case 2:
	{
		printf("New car is entering the parking lot\n");
		
		printf("Enter the ticket number:\n");
		scanf("%d",&ticket);
		
		if(j<9)
		{		
			park[i][j]=ticket;
			j++;
		
		}
		
		else if(j==9)
		{
			park[i][j]=ticket;
			i++;
			j=0;
		}

	break;

	}


case 3:
	{
		
		printf("A car will leave the parking lot.\n");
		printf("Enter the cars ticket number:\n");
		scanf("%d",&tic_num);
		
		
		break;	
	}
 
 
default:
	{
	
printf("Wrong command\n");	
break;	
	}	



}

}while(command!=0);



return 0;	
}
