#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
	int i;
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI"); //detects the graphics driver and hardware configuration
clrscr();
setbkcolor(BLUE);        //Sets the background colour of your screen
	for(i = 0;i < 1030;i++)
	{
		if(i%3 == 0) /*
			       **If i is divided by 3 and the remainder is zero
			       **it prints stars else print blank spaces*/
			{
				printf("*");
			}
		else
			{
				printf("   ");
			}

	}
getch();
}
