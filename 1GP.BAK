#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void screen()
{rectangle(1,1,639,479);
 setfillstyle(1,0);
 bar(0,0,getmaxx(),getmaxy());
 setcolor(0);
 setfillstyle(4,9);
 bar(0,0,640,55);
 rectangle(-1,-1,640,55);
 setfillstyle(10,1);
 bar(0,380,640,480);
 rectangle(-1,379,640,480);
 setcolor(15);
 rectangle(5,385,635,475);
 line(150,385,150,475);
 setfillstyle(9,1);
 bar(10,445,145,470);
}
void slow_print(char st[100],int dt)
	{

		int i=0,size=0;
		while(size==0)
		{
			if(st[i] == '.')
				size = (i+1);
			i++;
		}
		gotoxy(22,25);
		for (i = 0; i<=size; i++)
		{

			cout<<st[i];
			delay(dt);
		}
	}
     void call();
void dial_1()
{
char l1[50] = "*YAAAAAAAWWWWWWWN* Oh! What a boing day.";
char l2[50] = "WAIT ! Is that a quest that I am smelling ??.";
char v[50]  = "Prince LEONHART I have a bad news..";
slow_print(l1,25);
call();
}

void rtcol()
{setfillstyle(1,8);
 bar(0,70,50,365);
 setcolor(0);
 rectangle(-1,70,50,364);
 rectangle(8,90,11,340);
 rectangle(26,90,29,340);
 rectangle(43,90,46,340);

 bar(0,65,55,70);
 bar(0,60,60,65);
 bar(0,55,65,60);
 rectangle(-1,65,55,70);
 rectangle(-1,60,60,65);
 rectangle(-1,55,65,60);

 bar(0,364,55,369);
 bar(0,369,60,374);
 bar(0,374,65,379);
 rectangle(-1,364,55,369);
 rectangle(-1,369,60,374);
 rectangle(-1,374,65,379);
}

void ltcol()
{setfillstyle(1,8);
 bar(640,70,590,364);
 setcolor(0);
 rectangle(640,70,590,364);
 rectangle(632,90,629,340);
 rectangle(614,90,611,340);
 rectangle(597,90,594,340);

 bar(640,65,585,70);
 bar(640,60,580,65);
 bar(640,55,575,60);
 rectangle(640,65,585,70);
 rectangle(640,60,580,65);
 rectangle(640,55,575,60);

 bar(640,364,585,369);
 bar(640,369,580,374);
 bar(640,374,575,379);
 rectangle(640,364,585,369);
 rectangle(640,369,580,374);
 rectangle(640,374,575,379);
}

void joystick()
{setcolor(1);
 setfillstyle(1,14);
 bar(150,200,210,230);

 setfillstyle(1,8);
 bar(155,205,175,225);

 setfillstyle(9,1);
 arc(195,215,0,360,10);
 arc(195,215,0,360,5);
 floodfill(195,215,1);

 setfillstyle(9,1);
 bar(161,206,169,210);
 bar(161,220,169,224);
 bar(156,211,160,219);
 bar(170,211,174,219);

 setcolor(4);
 line(180,185,180,199);
 arc(180,183,0,360,2);

 do
 {setfillstyle(1,2);
  floodfill(180,183,4);
  delay(400);
  setfillstyle(1,0);
  floodfill(180,183,4);
  delay(400);
 }while(!kbhit());
}

void man1(int x,int y)
{ //Leonhart
  //man
  int prevy=y,prevx=x,superodd;
  setcolor(0);
  for(superodd=prevy;superodd>prevy-15;superodd--)
   {line(prevx-5,superodd,prevx+5,superodd);}
  setcolor(8);

  //legs
  setcolor(1);
  rectangle(x+4,y-3,x+1,y-20);
  setfillstyle(1,1);
  floodfill(x+2,y-4,1);
  rectangle(x-3,y-3,x-1,y-20);
  setfillstyle(1,1);
  floodfill(x-2,y-4,1);
  setcolor(15);
  rectangle(x+5,y-3,x+1,y-4);
  rectangle(x-4,y-3,x-1,y-4);

  //torso
  setcolor(4);
  rectangle(x-3,y-20,x+5,y-29);
  setfillstyle(1,4);
  floodfill(x-2,y-21,4);
  setcolor(4);
  rectangle(x-3,y-20,x+4,y-18);
  setfillstyle(1,4);
  floodfill(x-2,y-19,4);
  setcolor(15);
  settextstyle(2,0,4);
  outtextxy(x-2,y-29,"L");

  //arms
  setcolor(15);
//  if((jet%2)!=0)
//    {
//      for(int jot=0;jot<=6;jot++)
//       { line(x-3,y-30+jot,x-15,y-28+jot);
//	 line(x+3,y-30+jot,x+15,y-28+jot);}  }
   setcolor(4);

   line(x-6,y-28,x-9,y-15);
   line(x-5,y-28,x-8,y-15);
   line(x-4,y-28,x-7,y-15);
   line(x+3,y-28,x+9,y-15);
   line(x+6,y-28,x+11,y-15);
   line(x+5,y-28,x+10,y-15);
   line(x+4,y-28,x+9,y-15);
   setcolor(14);
   line(x+11,y-14,x+10,y-15);
   line(x+10,y-14,x+9,y-15);
   line(x-9,y-14,x-8,y-15);
   line(x-8,y-14,x-7,y-15);

   //face
   setcolor(14);
   rectangle(x-3,y-40,x+3,y-32);
   setfillstyle(1,14);
   floodfill(x,y-36,14);
   rectangle(x-1,y-30,x+1,y-32);
   setfillstyle(1,14);
   floodfill(x,y-31,14);
   setcolor(8);

   //eyes
   setcolor(6);
   line(x-3,y-38,x-2,y-36);
   line(x+3,y-38,x+2,y-36);

   //mouth
   arc(x,y-35,200,340,2);

   //cap
   setcolor(1);
   for(int head=0; head<5; head++)
    {arc(x,y-41,0,180,head+1);}
    line(x+3,y-42,x-7,y-42);
    line(x+3,y-41,x-7,y-41);
    setcolor(8);
}


void man2(int x,int y)
{ //Raveesh
  //man
  int prevy=y,prevx=x,superodd;
  setcolor(0);
  for(superodd=prevy;superodd>prevy-15;superodd--)
   {line(prevx-5,superodd,prevx+5,superodd);}
  setcolor(8);

  //legs
  setcolor(1);
  rectangle(x+4,y-3,x+1,y-20);
  setfillstyle(1,1);
  floodfill(x+2,y-4,1);
  rectangle(x-3,y-3,x-1,y-20);
  setfillstyle(1,1);
  floodfill(x-2,y-4,1);
  setcolor(15);
  rectangle(x+5,y-3,x+1,y-4);
  rectangle(x-4,y-3,x-1,y-4);


  //torso
  setcolor(15);
  rectangle(x-3,y-15,x+5,y-24);
  setfillstyle(1,15);
  floodfill(x-2,y-16,15);
  setcolor(15);
  rectangle(x-3,y-15,x+4,y-13);
  setfillstyle(1,15);
  floodfill(x-2,y-14,15);
  setcolor(0);
  settextstyle(2,0,4);
  outtextxy(x-2,y-25,"R");

  //arms
  setcolor(15);
  line(x-3,y-23,x-9,y-24);
  line(x-6,y-23,x-11,y-24);
  line(x-5,y-23,x-10,y-24);
  line(x-4,y-23,x-9,y-24);
  line(x+3,y-23,x+11,y-24);
  line(x+6,y-23,x+13,y-24);
  line(x+5,y-23,x+12,y-24);
  line(x+4,y-23,x+11,y-24);
  setcolor(14);
  line(x+13,y-23,x+12,y-24);
  line(x+13,y-23,x+11,y-24);
  line(x-11,y-23,x-10,y-24);
  line(x-10,y-23,x-9,y-24);

  //face
  setcolor(14);
  rectangle(x-3,y-35,x+3,y-27);
  setfillstyle(1,14);
  floodfill(x,y-31,14);
  rectangle(x-1,y-25,x+1,y-27);
  setfillstyle(1,14);
  floodfill(x,y-26,14);
  setcolor(8);

  //eyes
  setcolor(6);
  line(x-3,y-33,x-2,y-31);
  line(x+3,y-33,x+2,y-31);

  //mouth
  line(x-1,y-28,x+1,y-28);

  //cap
  setcolor(2);
  for(int head=0; head<5; head++)
   {arc(x,y-36,0,180,4-head);}
  line(x+3,y-37,x-7,y-37);
  line(x+3,y-36,x-7,y-36);
  setcolor(8);
}

void man3(int x,int y)
{ //Gen. Victor
  //man
  int prevy=y,prevx=x,superodd;
  setcolor(0);
  for(superodd=prevy;superodd>prevy-15;superodd--)
   {line(prevx-5,superodd,prevx+5,superodd);}
  setcolor(8);

  //legs
  setcolor(4);
  rectangle(x+4,y-3,x+1,y-20);
  setfillstyle(1,4);
  floodfill(x+2,y-4,4);
  rectangle(x-3,y-3,x-1,y-20);
  setfillstyle(1,4);
  floodfill(x-2,y-4,4);

  //shoes
  setcolor(1);
  rectangle(x+5,y-3,x+1,y-4);
  rectangle(x-4,y-3,x-1,y-4);

  //torso
  setcolor(2);
  rectangle(x-3,y-15,x+5,y-24);
  setfillstyle(1,2);
  floodfill(x-2,y-16,2);
  setcolor(2);
  rectangle(x-3,y-15,x+4,y-13);
  setfillstyle(1,2);
  floodfill(x-2,y-14,2);
  setcolor(0);
  settextstyle(2,0,4);
  outtextxy(x-2,y-25,"V");

  //arms
  setcolor(2);
  line(x-3,y-23,x-9,y-24);
  line(x-6,y-23,x-11,y-24);
  line(x-5,y-23,x-10,y-24);
  line(x-4,y-23,x-9,y-24);
  line(x+3,y-23,x+11,y-24);
  line(x+6,y-23,x+13,y-24);
  line(x+5,y-23,x+12,y-24);
  line(x+4,y-23,x+11,y-24);
  setcolor(14);
  line(x+13,y-23,x+12,y-24);
  line(x+13,y-23,x+11,y-24);
  line(x-11,y-23,x-10,y-24);
  line(x-10,y-23,x-9,y-24);

  //face
  setcolor(14);
  rectangle(x-3,y-35,x+3,y-27);
  setfillstyle(1,14);
  floodfill(x,y-31,14);
  rectangle(x-1,y-25,x+1,y-27);
  setfillstyle(1,14);
  floodfill(x,y-26,14);
  setcolor(8);

  //eyes
  setcolor(6);
  line(x-3,y-33,x-2,y-31);
  line(x+3,y-33,x+2,y-31);

  //mouth
  line(x-1,y-28,x+1,y-28);

  //cap
  setcolor(1);
  for(int head=0; head<5; head++)
   {arc(x,y-36,0,180,4-head);}
  line(x+3,y-37,x-7,y-37);
  line(x+3,y-36,x-7,y-36);
  setcolor(8);
}

void trophy()
{int xt=100,yt=50;
 setcolor(0);
 setfillstyle(1,6);
 bar(100+xt,200+yt,115+xt,220+yt);
 rectangle(100+xt,200+yt,115+xt,220+yt);
 bar(105+xt,220+yt,110+xt,227+yt);
 bar(100+xt,227+yt,115+xt,230+yt);
 setfillstyle(9,9);
 bar(105+xt,208+yt,110+xt,212+yt);
 setcolor(6);
 line(93+xt,203+yt,100+xt,203+yt);      //left
 line(93+xt,203+yt,100+xt,219+yt);
 line(115+xt,203+yt,122+xt,203+yt);	//right
 line(122+xt,203+yt,115+xt,219+yt);
}

void healbox()
{int xh=0,yh=0;
 setfillstyle(1,15);
 bar(100+xh,200+yh,135+xh,225+yh);
 setcolor(2);
 setfillstyle(1,2);
 bar(110+xh,210+yh,125+xh,215+yh);
 bar(115+xh,205+yh,120+xh,220+yh);
}

void man4(int x,int y)
{ //Stryker
  //man
  int prevy=y,prevx=x,superodd;
  setcolor(0);
  for(superodd=prevy;superodd>prevy-15;superodd--)
   {line(prevx-5,superodd,prevx+5,superodd);}
  setcolor(8);

  //legs
  setcolor(1);
  rectangle(x+4,y-3,x+1,y-20);
  setfillstyle(1,1);
  floodfill(x+2,y-4,1);
  rectangle(x-3,y-3,x-1,y-20);
  setfillstyle(1,1);
  floodfill(x-2,y-4,1);
  setcolor(15);
  rectangle(x+5,y-3,x+1,y-4);
  rectangle(x-4,y-3,x-1,y-4);

  //torso
  setcolor(5);
  rectangle(x-3,y-15,x+5,y-24);
  setfillstyle(1,5);
  floodfill(x-2,y-16,5);
  setcolor(5);
  rectangle(x-3,y-15,x+4,y-13);
  setfillstyle(1,5);
  floodfill(x-2,y-14,5);
  setcolor(15);
  settextstyle(2,0,4);
  outtextxy(x-2,y-25,"S");


  //arms
  setcolor(5);
  line(x-3,y-23,x-9,y-24);
  line(x-6,y-23,x-11,y-24);
  line(x-5,y-23,x-10,y-24);
  line(x-4,y-23,x-9,y-24);
  line(x+3,y-23,x+11,y-24);
  line(x+6,y-23,x+13,y-24);
  line(x+5,y-23,x+12,y-24);
  line(x+4,y-23,x+11,y-24);

  //hands
  setcolor(14);
  line(x+13,y-23,x+12,y-24);
  line(x+13,y-23,x+11,y-24);
  line(x-11,y-23,x-10,y-24);
  line(x-10,y-23,x-9,y-24);

  //face
  setcolor(14);
  rectangle(x-3,y-35,x+3,y-27);
  setfillstyle(1,14);
  floodfill(x,y-31,14);
  rectangle(x-1,y-25,x+1,y-27);
  setfillstyle(1,14);
  floodfill(x,y-26,14);
  setcolor(8);

  //eyes
  setcolor(6);
  line(x-3,y-33,x-2,y-31);
  line(x+3,y-33,x+2,y-31);

  //mouth
  line(x-1,y-28,x+1,y-28);

  //cap
  setcolor(3);
  for(int head=0; head<5; head++)
   {arc(x,y-36,0,180,4-head);}
  line(x+3,y-37,x-7,y-37);
  line(x+3,y-36,x-7,y-36);
  setcolor(8);
}
void call()
{
screen();
rtcol();
ltcol();
}

void main()
{clrscr();
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
// trophy();
// healbox();
 screen();
 rtcol();
 ltcol();
 man1(120,445); //Leonhart
 man2(30,445);  //Raveesh   	   //locx1=40, locy1=440
 man3(60,445);  //Gen. Victor      //locx2=95, locy2=440
 man4(90,445); //Stryker
// joystick();
 dial_1();
 getch();
 closegraph();
}