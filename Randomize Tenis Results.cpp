/* 	Author: Barışcan KURTKAYA
	E-mail:bariscankurtkaya@gmail.com	*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int spainwins=0;
int russiawins=0;
int russiasets=0;
int spainsets=0;
int spainplayer[4]={0,0,0,0};
int russiaplayer[4]={0,0,0,0};
int spainp=0;
int russiap=0;
int spainbest=0;
int russiabest=0;
int russiab=0;
int spainb=0;
int match=0;

int menu(int option)
{
    printf("Tennis Final Matches \n1.Start the game \n2.Exit the game \nOption: ");
    scanf("%d",&option);
    return option;
}
int MatchResult ()
{
	  srand ( time(NULL) ); //initialize the random seed
	  printf("\n\nFINAL MATCH STARTS :\n");
	  srand(time(NULL));
	        
	        for(int x=1;x<=4;x++)
	        {
	            for(int y=1;y<=4;y++)
	            {
	    			match++;
	                int spainp= rand() %4;
	                if (spainp==3)
	                    {
	                    spainplayer[x]=spainplayer[x]+ spainp;
	                    spainsets=spainsets+3;
	                    spainwins++;
	                    russiap=rand() %3;
	                    russiasets=russiap+ russiasets;
	                    russiaplayer[y]=russiaplayer[y]+russiap;
	                    }
	                else
	                    {
	                    russiap=3;
	                    russiaplayer[y]=russiaplayer[y]+russiap;
	                    spainplayer[x]=spainplayer[x]+ spainp;
	                    russiasets=russiasets+3;
	                    russiawins++;
	                    spainsets=spainp+spainsets;
	                    }
	                printf("  Match%d\n -------------------------\n Player%d (Spain) %d-%d (Russia) Player%d\n\n\n",match,x,spainp,russiap,y);
	            }
	        }
	    for(int x=1;x<=4;x++)
	    {
	    	if (spainplayer[x]>spainbest)
			{
				spainbest=spainplayer[x];
				spainb=x;
				
			}
			else {
			}
		}
			for(int x=1;x<=4;x++)
	    {
			if (russiaplayer[x]>russiabest)
			{
				russiabest=russiaplayer[x];
				russiab=x;
			}
			else {
			}
		}
	    printf("Table of Statistics: \n ------------------------- \n  Spain \n Number of match victory:%d \n Number of set victory: %d \n Number of set victory of the best player: %d \n Best Player: Player %d \n \n \n Russia \n Number of match victory:%d \n Number of set victory: %d \n Number of set victory of the best player: %d \n Best Player: Player %d\n\n1", spainwins,spainsets,spainbest,spainb,russiawins,russiasets,russiabest,russiab);
		return (spainwins,russiawins,spainsets,russiasets,spainbest,russiabest,spainb,russiab);
}
int TheVictor()
{
	srand ( time(NULL) );
	printf("Announcing the champion: \n-------------------------\nNumber of match victory: Spain %d Vs. %d Russia", spainwins,russiawins);
	if(spainwins>russiawins)
	{
		printf("Spain wins!");
	}
	else if(russiawins>spainwins){
		printf("Russia wins!");
	}
	else
	{
		printf(" Draw!We should compare the set victory of each team:\nNumber of set victory: Spain %d Vs. %d Russia ", spainsets,russiasets);
			if(spainsets>russiasets)
		{
			printf("Spain wins!");
		}
		else if(russiasets>spainsets){
			printf("Russia wins!");
		}
		else
		{
			printf("Draw! We should compare the set victory of the best players of each team:\nNumber of set victory of the best players: Spain %d Vs. %d Russia  ",spainb,russiab);
			if(spainb>russiab)
			{
				printf("Spain wins!");
			}
			else if(russiab>spainb){
				printf("Russia wins!");
			}
			else{
				int spainp= rand() %4;
				if(spainp=3){
					russiap=rand() %3;
					printf("Draw! Final match between the best players of each team should decide the best team: \nPlayer %d of Spain    %d Vs. %d     Player %d of Russia \n\n The champion of 2047 tennis champion league is:\n Spain ",spainbest,spainp,russiap,russiabest);
				}
				else{
					russiap=3;
					printf("Draw! Final match between the best players of each team should decide the best team: \nPlayer %d of Spain    %d Vs. %d     Player %d of Russia \n\n The champion of 2047 tennis champion league is:\n Russia ",spainbest,spainp,russiap,russiabest);
				}
				
			}
		}
	}
	
return 0;
}
int main(){
	int option=menu(option);
	
	if(option == 1){
		MatchResult();
		TheVictor();
	}
	else if(option==2){
		printf("Exit");
	}
	else{
		printf("Wrong Key");
	}

return 0;
}
