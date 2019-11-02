/* Scenario Design using C - By Gyanendra Pandey */
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int gd=0,gm;
 initgraph(&gd,&gm,"C:\\TC\\bgi");

 setbkcolor(15);

 /*drawing boundary for scenario using rectangle*/
 setcolor(8);
 setfillstyle(7,5);
 rectangle(20,5,620,475);
 floodfill(21,4,8);

 /*Drawing HILL */
 line(20,65,120,130);
 line(120,130,220,65);
 line(220,65,320,130);
 line(320,130,420,65);
 line(420,65,520,130);
 line(520,130,620,65);

 /*text*/
 setcolor(8);
 settextstyle(0,0,1);
 outtextxy(180,10,"SCENARIO DESIGN BY GYANENDRA PANDEY");
 line(170,20,470,20);

 /*drawing sun rising */
 arc(520,130,32,146,55);
 line(480,93,450,68);
 line(500,80,480,55);
 line(520,75,520,45);
 line(538,78,555,50);
 line(558,88,580,60);

 /*drawing house*/
 rectangle(300,300,618,473);

 line(370,230,550,230);
 line(370,230,300,300);
 line(550,230,618,300);
 line(370,230,440,300);
 line(440,300,440,473);

 //door of the house
 rectangle(330,350,410,473);

 //window in the house
 rectangle(500,350,580,400);

 line(520,365,520,385);
 line(500,350,520,365);
 line(520,385,500,400);

 line(560,385,560,365);
 line(560,385,580,400);
 line(560,365,580,350);

 //child
 circle(150,350,45);
 circle(135,335,5);
 circle(165,335,5);
 arc(150,350,180,0,25);
 line(150,395,150,450);
 line(150,450,100,473);
 line(150,450,200,473);

 getch();
 closegraph();
 restorecrtmode();
}