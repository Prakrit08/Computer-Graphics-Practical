/* TEDDY BEAR USING 'C' GRAPHICS */
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
 int gd=0,gm;
 initgraph(&gd,&gm,"C:\\TC\\bgi");
 setbkcolor(15);

 setcolor(4);
 settextstyle(4,1,6);
 outtextxy(500,80,"TEDDY BEAR");

 //face
 setcolor(8);
 setfillstyle(1,12);
 ellipse(250,150,0,360,130,85);
 floodfill(251,151,8);

 //ear
 setfillstyle(1,6);
 ellipse(130,110,20,265,35,60);
 floodfill(100,108,8);
 ellipse(370,110,280,159,35,60);
 floodfill(400,108,8);

 //eye
 setfillstyle(1,14);
 ellipse(190,130,0,360,35,30);
 floodfill(191,131,8);
 setfillstyle(1,8);
 circle(190,130,15);
 floodfill(191,131,8);
 setfillstyle(1,14);
 ellipse(310,130,0,360,35,30);
 floodfill(311,131,8);
 setfillstyle(1,8);
 circle(310,130,15);
 floodfill(311,131,8);

 //mouth
 setfillstyle(1,6);
 ellipse(250,185,0,360,45,35);
 floodfill(251,186,8);
 setfillstyle(1,8);
 circle(250,185,20);
 floodfill(251,186,8);

 //tie
 setfillstyle(1,12);
 rectangle(240,250,255,285);
 floodfill(241,251,8);
 line(240,250,210,235);
 line(240,285,210,305);
 line(210,235,210,305);
 floodfill(238,252,8);
 line(255,250,285,235);
 line(255,285,285,305);
 line(285,235,285,305);
 floodfill(258,260,8);

 //bottom part
 setfillstyle(1,2);
 ellipse(250,310,120,60,145,105);
 floodfill(241,311,8);

 setfillstyle(1,5);
 ellipse(250,250,205,340,105,65);
 ellipse(250,250,188,355,98,130);
 floodfill(250,350,8);

 setfillstyle(1,6);
 ellipse(100,280,27,295,45,75);
 floodfill(101,275,8);

 ellipse(410,280,235,158,45,75);
 floodfill(450,275,8);

 ellipse(320,415,0,360,55,50);
 floodfill(321,450,8);
 floodfill(321,401,8);

 ellipse(180,415,0,360,55,50);
 floodfill(181,370,8);
 floodfill(181,416,8);

 getch();
 closegraph();
 restorecrtmode();
}