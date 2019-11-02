/* NATIONAL FLAG USING CIRCLE AND LINE IN 'C' */
#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void main()
{
 int gd=0,gm;
 initgraph(&gd,&gm,"C:\\TC\\bgi");
 setbkcolor(3);
 settextstyle(1,0,5);
 setcolor(12);
 outtextxy(100,20,"INDIAN NATIONAL FLAG");
 setcolor(8);
 setfillstyle(1,8);
 rectangle(100,90,90,450);		//vertical line of flag
 floodfill(95,100,8);

 //upper orange box
 setfillstyle(1,6);
 rectangle(100,100,300,150);
 floodfill(200,125,8);

 //middle white box
 setfillstyle(1,15);
 rectangle(100,150,300,200);
 floodfill(200,185,8);

 //green bottom box
 setfillstyle(1,2);
 rectangle(100,200,300,250);
 floodfill(200,225,8);

 setcolor(1);
 circle(200,175,25);	//center of circle at 200,175 with radius 25

 //horizontal line in circle
 line(175,175,225,175);
 line(200,150,200,200);

 //diagonal line in circle
 line(200,175,225,178);
 line(200,175,205,152);
 line(200,175,212,153);
 line(200,175,215,156);
 line(200,175,193,150);
 line(200,175,179,165);
 line(200,175,177,169);
 line(200,175,175,181);
 line(200,175,178,185);
 line(200,175,185,196);
 line(200,175,193,200);
 line(200,175,185,155);
 line(200,175,208,198);
 line(200,175,225,168);
 line(200,175,225,183);
 line(200,175,220,191);
 line(200,175,182,160);
 line(200,175,215,195);
 line(200,175,182,190);
 line(200,175,220,159);

 setcolor(14);
 setfillstyle(1,14);
 ellipse(500,200,0,360,5,50);
 floodfill(501,201,14);

 ellipse(500,200,0,360,50,5);
 floodfill(490,202,14);
 floodfill(506,202,14);

 setcolor(8);
 setfillstyle(1,8);
 rectangle(50,450,150,465);
 floodfill(51,451,8);
 rectangle(10,465,200,478);
 floodfill(11,466,8);

 getch();
 closegraph();
}