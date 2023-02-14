#include<stdio.h>


int main()
{
	
int ticket,park[10][10],i,j,command,tempa,tempb;	

	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
			{
				park[i][j]=-1;					 
		 	}
	}

	do{
	printf("Enter the command:");
	scanf("%d",&command);
		switch(command)
		{
			case 0:
				{
						
				for(i=0;i<10;i++)
				{
					for(j=0;j<10;j++)
					{
					printf("%d\t",park[i][j]);
		 			}
				printf("\n");
				}	

					break;	
				}
	
			case 1:
				{
					
				for(i=0;i<10;i++)
				{
					for(j=0;j<10;j++)
					{
						printf("%d\t",park[i][j]);
		 			}
				printf("\n");
				}		
					break;	
				}
			case 2:
				{	
					printf("New car is entering");
					printf("Enter the ticket number:\n");
					scanf("%d",&ticket);
						
						for(i=0;i<10;i++)
						{
							for(j=0;j<10;j++)
							{
								if(park[i][j]==-1)
								{
								tempa=i;
								tempb=j;
								park[i][j]=ticket;	
						
								break;			
								}	
								
							}
		
							if(park[tempa][tempb]!=-1)
								{
								break;								
								}
					
						}		
			break;	
				}

			case 3:
				{	
					printf("Car is leaving\n");
					printf("Enter the ticket number:\n");
					scanf("%d",&ticket);
					
					for(i=0;i<10;i++)
					{
						for(j=0;j<10;j++)
						{
							if(park[i][j]==ticket)
							{
								tempa=i;
								tempb=j;
								park[i][j]=-1;
								
								break;
							}
							
						}
							if(park[tempa][tempb]==-1)
							{
								break;
							}
					
					}
					
					
					break;
				}
			
			deafult:
				{
					printf("Wrong command\n");
					
					
					break;	
				}
		}	
		
	
	}while(command!=0);
	
return 0;
}
