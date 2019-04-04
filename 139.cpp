#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int x,y;
	gotoxy(12,12);
	text color(9);
	text background(15);
	cprintf("welcome");
	x=wherex();
	y=wherey();
	gotoxy(12,15);
	textcolor(15);
	textbackground(9);
	cprintf("x=%d y=%d",x,y);
}
