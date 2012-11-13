/*
*	Program to change movie directory name as 
*		Movie_Name[Year]Quality[Language]_imdb.rating
*   Change Log :
*       Version: 0.0.1
*           building skeleton
*   
*/
#include "../include/rename_dir.h"
int main(int argc, char *argv[])
{
	char path[100];
	printf("argc = %d\n",argc);
	if(argc>1)
	{
		printf("argc[1] = %s\n",argv[1]);
		strcpy(path,argv[1]);
	}
	else
	{
		strcpy(path,".");
	}

	printf("Path = %s\n\n",path);
	listdir(path);
}
