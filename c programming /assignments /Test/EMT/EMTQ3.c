//DEVELOUP  A PROGRAM TO MANAGE A MUSIC LIBRARY . DEFINE A STURCTURE TO STORE SONG DEATAILS
//[ STING ID ,title, artist,and duration] Create a menu-driven program to add new songs ,
//and displaythe song library. use function to handel these operations.
#include<stdio.h>
typedef struct song
{
	double S_ID;
	char title[100];
	char artist[100];
	double duration;
}song;
void addNewSong(song Sarr[], int*);
void displaySongs(song Sarr[], int);
int main()
{
	
song Sarr[100];
	int size=0;
	int choice;
	while(1){
	printf("1.add new song\n");
			printf("2.display song\n");
				printf("3.exit\n");
					printf("enter your choice\n");
					scanf("%d",&choice);
 if(choice==1)
addNewSong( Sarr, &size);//call
else if (choice==2)
displaySongs(Sarr, size);//call
 else if(choice==3){
 	 printf("exiting");
 break;
}


 else
 printf("invalid choice");

}
	
}

void addNewSong( song Sarr[] ,int*s)
{
printf("enter song ID: \n");
scanf("%lf",&Sarr[*s].S_ID)	;
printf("enter song title:\n ");
scanf("%s",&Sarr[*s].title)	;
printf("enter artist name\n");
scanf("%s",&Sarr[*s].artist)	;
printf("Enter Duration in minutes:\n ");
scanf("%lf", &Sarr[*s].duration);
(*s)++;
printf("song added..\n");


}

void displaySongs(song Sarr[], int s)
{
	if (s == 0) {
        printf("No songs in the library yet.\n");
        return;
    }
	for (int i = 0; i<s; i++)
	 {
        printf("Song %d:\n", i + 1);
        printf("ID : %lf\n", Sarr[i].S_ID);
        printf(" Title :%s\n", Sarr[i].title);
        printf(" Artist :%s\n", Sarr[i].artist);
        printf(" Duration:%lf minutes\n", Sarr[i].duration);
        printf("\n");
}
}