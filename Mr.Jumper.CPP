#include<fstream.h>
#include<conio.h>
#include<process.h>
#include<graphics.h>
#include<dos.h>
#include<bios.h>
#include<stdlib.h>
#include<math.h>

/////GLOBAL  DECLARATIONS

int cd,n=5,X[10]={350,200,450,350,120,74,23},Xe[10]={400,250,500,400,170,154,220},H[10]={350,250,280,150,130,400,350},i;
int level=1, xxx,yyy,version,ox[1000],oy[1000],ob=1,oo=0,score=-10 ;
int qwerty=0,dgi=1,as,x=40,y=getmaxy()-20,s=0,d=2,k,l,flag,choice;
long unsigned int gamedecider=2, f=1,timex=0;
long int pz=0;
int PRIZART,priz=0,gx[1000],gy[1000],ex=getmaxx()-40,ey=getmaxy()-19;
int life=100,pack=400,coxx,coxy,prevx,prevy,play=0,cht[100][100],pl=0,chtn;
int tim=0,vel=25;
int ropec=0;
int starx[100],stary[100];
int swfl=0,K,J,M;
int bx=100,by=100,chtend,jet=0;
int ell=1;
int versin,a,xd,yd,b,z;
int counter,prize;
float acc=2.1;

struct player
{ char name[20];
  int sc;
}player;
fstream fin,fout;

//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

void mission()
{



if(x<ox[oo]+50 && y<oy[oo]+80 && x>ox[oo]-40 && y>oy[oo]-20)
   {

   ob=1;
   delay(5);
   setcolor(BLACK);
	for(prize=0; prize<8; prize++)
	{
	circle(ox[oo],oy[oo],7-prize);
	}
	setcolor(RED);
   settextstyle(3,0,3);
   outtextxy(25,25," LEVEL COMPLETED");
   delay(7);
   outtextxy(getmaxx()/2-75,getmaxy()-75,"               ");
   setcolor(BLUE);
   line(getmaxx()-30,getmaxy()-70,getmaxx()-30,getmaxy()-25);
   setcolor(CYAN);
   line(getmaxx()-27,getmaxy()-70,getmaxx()-27,getmaxy()-25);
   //gamedecider=1;
  cleardevice();
   }
}

void objective()
{
	setcolor(MAGENTA);
	for(int prize=0; prize<8; prize++)
	{
	circle(ox[oo],oy[oo],7-prize);
	}
	setcolor(DARKGRAY);
	}




void window(int x,int y)
{
	setcolor(RED);
	rectangle(x-20,y-20,x+20,y+20);
	line(x,y-20,x,y+20);
	line(x-20,y,x+20,y);
	setcolor(CYAN);
	line(x-20,y-20,x+20,y+20);
	line(x-20,y,x,y+20);
	line(x,y-20,x+20,y);
}
/*objects
void  rope(int x,int ht)
{
	setcolor(RED);
	for(i=-1; i<2; i++)
	{
	if(i==0)
	setcolor(DARKGRAY);
	else
	setcolor(RED);
	line(x+i,0,x+i,getmaxy()-ht);
	}
	}
	 */

void platform(int x,int y,int width)
{
int varodd;
varodd=y;
setcolor(RED);
for(y=y;y<varodd+5; y++)
{
	line(x,y,x+width,y);
	}
	setcolor(DARKGRAY);
	}

//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||


void checkpoison(int x,int y)
{
int xx=x, yy=getmaxy()-20;
int flag=0;
for(xx=200; xx<249;  xx++)
{
	if(x==xx && y==yy)
	{flag=1;
	break;}

		}
		if(flag==1)
		{
		setcolor(RED);
		life--;

		}
		}



void poison(int x, int y, int widthno)
{
	int zz=x;
	for(; x<zz+widthno; x+=6)
	{
		setcolor(GREEN);
		for(int innerrad=0; innerrad<3; innerrad++)
		{
		 circle(x,y,3-innerrad);
		}
	}
}
///||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
void drawlife()
{
setcolor(BLACK);
rectangle(0,18,222,38);
setfillstyle(SOLID_FILL,BLACK);
floodfill(21,21,BLACK);
if(life>66)
{
setcolor(GREEN);
rectangle(20,20,18+2*life,30);
setfillstyle(SOLID_FILL,GREEN);
floodfill(21,21,GREEN);

setcolor(BROWN);
rectangle(19,31,219,19);
setcolor(BLACK);
circle(9,32,21);
setfillstyle(SOLID_FILL,BLACK);
floodfill(10,32,BLACK);
settextstyle(2,0,6);
int xxxx=22,yyyy=65;
setcolor(YELLOW);
rectangle(xxxx-5,yyyy-40,xxxx+5,yyyy-30);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(xxxx,yyyy-35,YELLOW);
	rectangle(xxxx-1,yyyy-30,xxxx+1,yyyy-32);
	setfillstyle(SOLID_FILL,YELLOW);
	//floodfill(xxxx,yyyy-31,YELLOW);
		setcolor(DARKGRAY);

setcolor(BROWN);
	line(xxxx-3,yyyy-38,xxxx-2,yyyy-36);
	line(xxxx+3,yyyy-38,xxxx+2,yyyy-36);
	//mouth
	arc(xxxx,yyyy-35,200,340,4);
	//cap
	setcolor(BLUE);
	for(int head=-2; head<5; head++)
	{
	 arc(xxxx,yyyy-41,0,180,head+2);
			}
			line(xxxx+3,yyyy-42,xxxx-9,yyyy-42);
			line(xxxx+3,yyyy-41,xxxx-9,yyyy-41);

}
else if(life>32 && life<67)
{
setcolor(BROWN);
rectangle(20,20,18+2*life,30);
setfillstyle(SOLID_FILL,BROWN);
floodfill(21,21,BROWN);

setcolor(BROWN);
rectangle(19,31,219,19);
setcolor(BLACK);
circle(9,32,21);
setfillstyle(SOLID_FILL,BLACK);
floodfill(10,32,BLACK);
settextstyle(2,0,6);
int xxxx=22,yyyy=65;
setcolor(YELLOW);
rectangle(xxxx-5,yyyy-40,xxxx+5,yyyy-30);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(xxxx,yyyy-35,YELLOW);
	rectangle(xxxx-1,yyyy-30,xxxx+1,yyyy-32);
	setfillstyle(SOLID_FILL,YELLOW);
	//floodfill(xxxx,yyyy-31,YELLOW);
		setcolor(DARKGRAY);

setcolor(BROWN);
	line(xxxx-3,yyyy-38,xxxx-2,yyyy-36);
	line(xxxx+3,yyyy-38,xxxx+2,yyyy-36);
	//mouth
	arc(xxxx,yyyy-35,200,340,4);
	//cap
	setcolor(BLUE);
	for(int head=-2; head<5; head++)
	{
	 arc(xxxx,yyyy-41,0,180,head+2);
			}
			line(xxxx+3,yyyy-42,xxxx-9,yyyy-42);
			line(xxxx+3,yyyy-41,xxxx-9,yyyy-41);

}
else if(life<34)
{
setcolor(RED);
rectangle(20,20,18+2*life,30);
setfillstyle(SOLID_FILL,RED);
floodfill(21,21,RED);
setcolor(BROWN);

setcolor(BROWN);
rectangle(19,31,219,19);
setcolor(BLACK);
circle(9,32,21);
setfillstyle(SOLID_FILL,BLACK);
floodfill(10,32,BLACK);
int xxxx=22,yyyy=65;
setcolor(YELLOW);
rectangle(xxxx-5,yyyy-40,xxxx+5,yyyy-30);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(xxxx,yyyy-35,YELLOW);
	rectangle(xxxx-1,yyyy-30,xxxx+1,yyyy-32);
	setfillstyle(SOLID_FILL,YELLOW);
		setcolor(DARKGRAY);

setcolor(BROWN);
	line(xxxx-3,yyyy-38,xxxx-2,yyyy-36);
	line(xxxx+3,yyyy-38,xxxx+2,yyyy-36);
	//mouth
	arc(xxxx,yyyy-35,200,340,4);
	//cap
	setcolor(BLUE);
	for(int head=-2; head<5; head++)
	{
	 arc(xxxx,yyyy-41,0,180,head+2);
			}
			line(xxxx+3,yyyy-42,xxxx-9,yyyy-42);
			line(xxxx+3,yyyy-41,xxxx-9,yyyy-41);

}
}


//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

void drawplay(int x,int y)
{
	setcolor(BLACK);
	int superodd=prevy+3;
       for(;superodd>prevy-48;superodd--)
	{
	line(prevx-15,superodd,prevx+15,superodd);
	}	setcolor(DARKGRAY);

	//legs
	setcolor(BLUE);
	rectangle(x+4,y-3,x+1,y-20);
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(x+2,y-4,BLUE);
	rectangle(x-3,y-3,x-1,y-20);
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(x-2,y-4,BLUE);
	setcolor(WHITE);
	rectangle(x+5,y-3,x+1,y-4);
	rectangle(x-4,y-3,x-1,y-4);

	//torso
	setcolor(RED);
	rectangle(x-3,y-20,x+5,y-29);
	setfillstyle(SOLID_FILL,RED);
	floodfill(x-2,y-21,RED);
	setcolor(RED);
	rectangle(x-3,y-20,x+4,y-18);
	setfillstyle(SOLID_FILL,RED);
	floodfill(x-2,y-19,RED);
	setcolor(WHITE);
	settextstyle(2,0,4);
	outtextxy(x-2,y-29,"L");

	//arms

	setcolor(WHITE);
    if((jet%2)!=0)
    {	for(int jot=0;jot<=6;jot++)
       {	line(x-3,y-30+jot,x-15,y-28+jot);
	line(x+3,y-30+jot,x+15,y-28+jot);}  }
	setcolor(RED);

	line(x-6,y-28,x-9,y-15);
	line(x-5,y-28,x-8,y-15);
	line(x-4,y-28,x-7,y-15);
	line(x+3,y-28,x+9,y-15);
	line(x+6,y-28,x+11,y-15);
	line(x+5,y-28,x+10,y-15);
	line(x+4,y-28,x+9,y-15);
	setcolor(YELLOW);
	line(x+11,y-14,x+10,y-15);
	line(x+10,y-14,x+9,y-15);
	line(x-9,y-14,x-8,y-15);
	line(x-8,y-14,x-7,y-15);

	//face
	setcolor(YELLOW);
	rectangle(x-3,y-40,x+3,y-32);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(x,y-36,YELLOW);
	rectangle(x-1,y-30,x+1,y-32);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(x,y-31,YELLOW);
	setcolor(DARKGRAY);

	//eyes
	setcolor(BROWN);
	line(x-3,y-38,x-2,y-36);
	line(x+3,y-38,x+2,y-36);

	//mouth
	arc(x,y-35,200,340,2);

	//cap
	setcolor(BLUE);
	for(int head=0; head<5; head++)
	{
	 arc(x,y-41,0,180,head+1);
			}
			line(x+3,y-42,x-7,y-42);
			line(x+3,y-41,x-7,y-41);
			setcolor(DARKGRAY);



			}

//////////////////////////////////////////////////////////////////////
/*player*/
void drawjplay(int x,int y)
{
	//man

	setcolor(BLACK);
	int superodd=prevy+3;
       for(;superodd>prevy-48;superodd--)
	{
	line(prevx-15,superodd,prevx+15,superodd);
	}
	setcolor(DARKGRAY);

	//legs
	setcolor(BLUE);
	rectangle(x+4,y+2,x+1,y-15);
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(x+2,y+1,BLUE);
	rectangle(x-3,y-7,x-1,y-15);
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(x-2,y-8,BLUE);
	setcolor(WHITE);
	rectangle(x+5,y+2,x+1,y+1);

	//torso
	setcolor(RED);
	rectangle(x-3,y-15,x+5,y-24);
	setfillstyle(SOLID_FILL,RED);
	floodfill(x-2,y-16,RED);
	setcolor(RED);
	rectangle(x-3,y-15,x+4,y-13);
	setfillstyle(SOLID_FILL,RED);
	floodfill(x-2,y-14,RED);
	setcolor(WHITE);
	settextstyle(2,0,4);
	outtextxy(x-2,y-24,"L");

	//arms
	setcolor(RED);
	line(x-3,y-23,x-9,y-24);
	line(x-6,y-23,x-11,y-24);
	line(x-5,y-23,x-10,y-24);
	line(x-4,y-23,x-9,y-24);
	line(x+3,y-23,x+11,y-24);
	line(x+6,y-23,x+13,y-24);
	line(x+5,y-23,x+12,y-24);
	line(x+4,y-23,x+11,y-24);
	setcolor(YELLOW);
	line(x+13,y-23,x+12,y-24);
	line(x+13,y-23,x+11,y-24);
	line(x-11,y-23,x-10,y-24);
	line(x-10,y-23,x-9,y-24);

	//face
	setcolor(YELLOW);
	rectangle(x-3,y-35,x+3,y-27);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(x,y-31,YELLOW);
	rectangle(x-1,y-25,x+1,y-27);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(x,y-26,YELLOW);
	setcolor(DARKGRAY);

	//eyes
	setcolor(BROWN);
	line(x-3,y-33,x-2,y-31);
	line(x+3,y-33,x+2,y-31);
	//mouth
	arc(x,y-30,200,340,2);
	//cap
	setcolor(BLUE);
	for(int head=0; head<5; head++)
	{
	 arc(x,y-36,0,180,4-head);
			}
			line(x+3,y-37,x-7,y-37);
			line(x+3,y-36,x-7,y-36);
			setcolor(DARKGRAY);
			}
//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
void cheat()
{
 for(pl=0;pl<20;pl++)
 {cht[chtn][pl]=bioskey(0);

 if(cht[chtn][pl]==283)
 goto chtend;

 if(cht[chtn][pl-8]==4978&&cht[chtn][pl-7]==4709&&cht[chtn][pl-6]==6512&&cht[chtn][pl-5]==9836&&cht[chtn][pl-4]==4709&&cht[chtn][pl-3]==12654&&cht[chtn][pl-2]==5993&&cht[chtn][pl-1]==8051&&cht[chtn][pl]==9064)
 {life=100;
 goto chtend;
 }

 if(/*cht[chtn][pl-7]==9322&&cht[chtn][pl-6]==4709&&cht[chtn][pl-5]==5236&&cht[chtn][pl-4]==8550&&cht[chtn][pl-3]==4978&&cht[chtn][pl-2]==4709&&cht[chtn][pl-1]==7777&&*/cht[chtn][pl]==9579)
 {
  pack=400;
 goto chtend;

 }

 }

 chtend:
 chtn++;
 }
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
void drawmap1()
{ setcolor(WHITE);
  int maxx,maxy;


  for(maxy=getmaxy();maxy>getmaxy()-20; maxy--)
   {
	setcolor(DARKGRAY);
	line(0,maxy,getmaxx(),maxy);
	}
  for(maxy=getmaxy();maxy>getmaxy()-20; maxy-=5)
   {
	setcolor(BLACK);
	line(0,maxy,getmaxx(),maxy);
	}
 for(int oddx=0; oddx<getmaxx(); oddx+=7)
 {
	line(oddx,getmaxy(),oddx,getmaxy()-20);
	}

for(cd=0;cd<n;cd++)
platform(X[cd],H[cd],Xe[cd]-X[cd]);

settextstyle(2,0,4);
setcolor(DARKGRAY);
//rectangle(getmaxx()/2+103,12,getmaxx()-10,45);
//setfillstyle(SOLID_FILL,DARKGRAY);
//floodfill(getmaxx()/2+107,14,DARKGRAY);
setcolor(WHITE);
rectangle(getmaxx()/2+109,14,getmaxx()-14,43);
setcolor(WHITE);
outtextxy(getmaxx()/2+115,22,"Objective: Get to the purple ball");
settextstyle(9,0,1);
setcolor(WHITE);
//outtextxy(40,27,"FHART");
poison(200,getmaxy()-20,48);
drawlife();
setcolor(DARKGRAY);
}
/*gfx*/

/////////////////////////////////////////////////////////////////////////
/*gfx*/
/*void drawmap3()
{
//time();
setbkcolor(BLACK);
setcolor(WHITE);
  int maxx,maxy;

   rope(330,180);
  window(getmaxx()-100,100);
  for(maxx=800;maxx>-1; maxx--)
   {
	setcolor(DARKGRAY);
	line(maxx,getmaxy()-18,maxx,getmaxy()-20);
		}
		for(maxx=800;maxx>-1; maxx-=20)
		{
		setcolor(RED);
		line(maxx,getmaxy()-20,maxx,getmaxy()-50);
			     }
  for(maxx=800;maxx>-1; maxx-=4)
   {
	setcolor(DARKGRAY);
	line(maxx,getmaxy()-48,maxx,getmaxy()-50);
		}

platform(350,350,50);
platform(200,250,50);
platform(450,290,50);
platform(350,150,50);
platform(120,130,50);
settextstyle(2,0,4);
settextstyle(9,0,1);

setcolor(WHITE);

drawlife();
setcolor(DARKGRAY);
} */

void writescore()
{ player.sc=score;
  cout<<"\n\n\n\t\t\t\tPlease type your name";
  cin>>player.name;
  fin.open("HScores.txt",ios::app|ios::in);
  fin.write((char*)&player,sizeof(player));
  fin.seekg(0);
   cleardevice();
   drawplay(52,94);
	  drawplay(123,234);
	  drawjplay(572,48);
	  drawplay(545,224);
	  drawjplay(352,454);
	  settextstyle(3,0,7);
	  textcolor(RED);
	  settextstyle(8,0,8);
	  outtextxy(220,20,"FHART");
	  settextstyle(2,0,7);
	  outtextxy(getmaxx()/2-58,110,"MAIN MENU");
   cout<<"\n\n\n";
   while(!fin.eof())

  {
     fin.read((char*)&player,sizeof(player));
     cout<<"\n\t\t\t\t"<<player.name<<"\t\t"<<player.sc;
   }

  fin.close();

    //goto start;
	    }

void explode(int x,int y)//used to construct and display the explosion
{  int asdf;
       for(asdf=1;asdf<50;asdf++)
       {delay(1);
	setcolor(0);
	setfillstyle(1,YELLOW);
	fillellipse(x,y,30,30);
	setfillstyle(1,BROWN);
	setcolor(RED);
	ellipse(x,y,0,360,43,8);
	setcolor(YELLOW);
	ellipse(x,y,0,360,63,13);
	setfillstyle(1,WHITE);
	fillellipse(x,y,35,5);
	setfillstyle(1,0);
	fillellipse(x,y,20,20);
	delay(10);
	setcolor(0);
	setfillstyle(1,0);
	fillellipse(x,y,70,70);
	}
	setcolor(WHITE);
	settextstyle(0,0,2);
	outtextxy(getmaxx()/2-50,getmaxy()/2,"GAME OVER");
	cout<<"\a\a\a\a";
	cleardevice();
	writescore();
	getch();
	exit(0);
}
/*graphics*/
void exploder(int x,int y)//used to construct and display the explosion
{  	setcolor(0);
	setfillstyle(1,YELLOW);
	fillellipse(x,y,30,30);
	setfillstyle(1,BROWN);
	setcolor(RED);
	ellipse(x,y,0,360,43,8);
	setcolor(YELLOW);
	ellipse(x,y,0,360,63,13);
	setfillstyle(1,WHITE);
	fillellipse(x,y,35,5);
	setfillstyle(1,0);
	fillellipse(x,y,20,20);
	setcolor(0);
	setfillstyle(1,0);
	fillellipse(x,y,70,70);// }
	setcolor(WHITE);
	}
/*
void mainmenu()
{
      cleardevice();

	  int Xm,Ym,Cm,flagee=0;
	  restrictmouseptr(0,0,getmaxx(),getmaxy());
	  callmouse();
	  drawplay(52,94);
	  drawplay(123,234);
	  drawjplay(572,48);
	  drawplay(545,224);
	  drawjplay(352,454);
	  settextstyle(3,0,7);
	  textcolor(RED);
	  outtextxy(240,20,"FHART");
	  settextstyle(2,0,7);
	  outtextxy(getmaxx()/2-58,110,"MAIN MENU");
	  textcolor(WHITE);
	  do
	{
	  mouseposi(Xm,Ym, Cm);
	  button2(250,150,"Quick Game");
	  button2(250,200,"Story Mode");
      button2(250,250,"Exit");

	    if(Xm>250 && Xm<370 && Ym>150 && Ym<190)
			button1(250,150,"Quick Game");
		else if(Xm>250 && Xm<370 && Ym>200 && Ym<240)
			button1(250,200,"Story Mode");
		else if(Xm>250 && Xm<370 && Ym>250 && Ym<290)
			button1(250,250,"Exit");

		if(Cm==1)
		{
			if(Xm>250 && Xm<370 && Ym>150 && Ym<190)
			{
				version=2;
				flagee=1;
			}
				else if(Xm>250 && Xm<370 && Ym>200 && Ym<240)
			{
				version=1;
				flagee=1;
			}
				else if(Xm>250 && Xm<370 && Ym>250 && Ym<290)
				exit(0);
		}
	}while(flagee!=1);
mousehide();
}


  */
//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
void wall()
{

  by=150;
  bx-=0.1;
}



    /*
void speechb(int x,int y)
{
cleardevice();
drawmap1();
drawplay(x,y);
setcolor(WHITE);
rectangle(x+10,y-40,x+198,y-90);
setfillstyle(SOLID_FILL,WHITE);
	floodfill(x+22,y-56,WHITE);
setcolor(BLACK);
rectangle(x+12,y-42,x+196,y-88);
}
      */
/*cutscenes*/
/*void speecha(int x,int y)
{
cleardevice();
drawplay(x,y);
setcolor(WHITE);
rectangle(x+10,y-40,x+198,y-90);
setfillstyle(SOLID_FILL,WHITE);
	floodfill(x+22,y-56,WHITE);
setcolor(BLACK);
rectangle(x+12,y-42,x+196,y-88);
} */

/*cutscenes*/
void clearsp(int x, int y)
{
cleardevice();
drawmap1();
drawplay(x,y);
setcolor(BLACK);
rectangle(x+10,y-40,x+198,y-90);
setfillstyle(SOLID_FILL,BLACK);
floodfill(x+22,y-56,BLACK);
setcolor(BLACK);
rectangle(x+12,y-42,x+196,y-88);
}

/*cutscenes*/
/*void clearsq(int x, int y)
{
cleardevice();
drawplay(x,y);
setcolor(BLACK);
rectangle(x+10,y-40,x+198,y-90);
setfillstyle(SOLID_FILL,BLACK);
	floodfill(x+22,y-56,BLACK);
setcolor(BLACK);
rectangle(x+12,y-42,x+196,y-88);
} */

////////////////////////////////////////////////////////////////////////////
/*cutscenes*/
/*void cutscene0()
{
	cleardevice();
	int cx=getmaxx()/2-36,cy=getmaxy()/2+40;
	speecha(cx,cy);
	outtextxy(getmaxx()/2+14,getmaxy()/2-36,"I'v got the card !");
	delay(1000);
	int m=1;
	int rx,ry,tc;
	clearsq(cx,cy);
	for(i=0; i<60; i++)
	{
	     m=m*pow(-1,i);
	     cx+=m;
	     drawplay(cx,cy);
	     clearsq(cx,cy);
	     cx=getmaxx()/2-36;
	     rx=rand()%getmaxx();
	     ry=rand()%getmaxy();
	     for(tc=0; tc<10; tc++)
	     {
	     exploder(rx,ry);
	     delay(1);
	     }
	     }
	delay(400);
	speecha(cx,cy);
	outtextxy(getmaxx()/2+14,getmaxy()/2-36,"What the hell was that?");
	delay(1000);
	setcolor(MAGENTA);
	for(int xtx=0; xtx<100; xtx++)
	{
	setcolor(MAGENTA);
	settextstyle(3,0,7);
	outtextxy(getmaxx()/2-200+xtx,100,"He He He........");
	delay(10);
	cleardevice();
	drawplay(cx,cy);
	}
	for(xtx=100; xtx>0; xtx--)
	{
	setcolor(MAGENTA);
	settextstyle(3,0,7);
	outtextxy(getmaxx()-200+xtx,getmaxy()-100,"Ha Ha Ha........");
	delay(10);
	cleardevice();
	drawplay(cx,cy);
	}
	for(xtx=0; xtx<100; xtx++)
	{
	setcolor(MAGENTA);
	settextstyle(3,0,7);
	outtextxy(getmaxx()/2-200+xtx,100,"Just call me.......");
	delay(10);
	cleardevice();
	drawplay(cx,cy);
	}
	for(xtx=0; xtx<8; xtx++)
	{
	setcolor(MAGENTA);
	settextstyle(3,0,8+xtx);
	outtextxy(getmaxx()/2-80,100,"Ooze");
	delay(500);
	cleardevice();
	drawplay(cx,cy);
	}
	for(int ii=9; ii>-1; ii-=2)
	{
	for(xtx=0; xtx<getmaxx()+1; xtx++)
	{
	setcolor(MAGENTA);
	line(xtx,ii*getmaxy()/10,xtx,(ii+1)*getmaxy()/10);
	delay(1);
	}
	for(xtx=getmaxx()+1; xtx>-1; xtx--)
	{
	setcolor(MAGENTA);
	line(xtx,(ii-1)*getmaxy()/10,xtx,(ii)*getmaxy()/10);
	delay(1);
	}

	}
	speecha(cx,cy);
	setcolor(RED);
	outtextxy(getmaxx()/2+14,getmaxy()/2-36,"AAAAAHHHHHH");
	delay(1200);
	for(xtx=0; xtx<getmaxx()/2+200; xtx++)
	{
		setcolor(RED);
		circle(getmaxx()/2,getmaxy()/2,xtx);
		delay(3);
		}
		for(xtx=0; xtx<getmaxx()/2; xtx++)
       {
	setcolor(BLACK);
	line(getmaxx()/2+xtx,getmaxy()/2-80,getmaxx()/2+xtx,getmaxy()/2+80);
	line(getmaxx()/2-xtx,getmaxy()/2-80,getmaxx()/2-xtx,getmaxy()/2+80);
	delay(7);
      }
      setcolor(WHITE);
      settextstyle(3,0,9);
      outtextxy(getmaxx()/2-100,getmaxy()-305,"FHART");
      delay(500);
      settextstyle(13,0,3);
      outtextxy(getmaxx()/2-110,getmaxy()-175,"Devolopers:  RAHUL, NISARG, SWAPNIL, RAVEESH");
       getch();
      cleardevice();
} */

/*cutscenes*/
/*void cutscene1()
{
int qq=20,rr=getmaxy()-20;
drawplay(qq,rr);
drawmap1();
delay(500);
speechb(qq,rr);
outtextxy(qq+14,rr-86,"Ouch...");
delay(1300);
speechb(qq,rr);
outtextxy(qq+14,rr-86,"What's  going  on  out here?");
delay(1900);
cleardevice();

for(int xy=0; xy<40; xy++)
{
	qq++;
	drawplay(qq,rr);
	 prevx=qq; prevy=rr;

	 drawmap1();
	delay(5);
		}

speechb(qq,rr);
outtextxy(qq+14,rr-86,"Weird place........");
delay(1200);
speechb(qq,rr);
outtextxy(qq+14,rr-86,"...and it stinks......");
delay(1000);
clearsp(qq,rr);
for(xy=40; xy>0; xy--)
{
	qq--;
	drawplay(qq,rr);
	 prevx=qq; prevy=rr;

	drawmap1();
	delay(5);
		}
speechb(qq,rr);
outtextxy(qq+14,rr-86,"Last i remember is that idiot");
outtextxy(qq+14,rr-76,"'Ooze running into the place");
outtextxy(qq+14,rr-66,"and stealing my card!!!!");
delay(2900);
speechb(qq,rr);
outtextxy(qq+14,rr-86,"I'd better get to him.....");
delay(1500);
speechb(qq,rr);
outtextxy(qq+14,rr-86,"I can see something up on that");
outtextxy(qq+14,rr-76,"bar..");
delay(2700);
clearsp(qq,rr);
objective();

for(xy=0; xy<160; xy++)
{
	qq++;
	drawplay(qq,rr);
	 prevx=qq; prevy=rr;

	drawmap1();
	delay(9);
	}

delay(600);
speechb(qq,rr);
objective();
outtextxy(qq+14,rr-86,"What the hell? This is sticky !");
delay(2000);
speechb(qq,rr);
outtextxy(qq+14,rr-86,"I'd better stay away from this !");
delay(2000);
speechb(qq,rr);
outtextxy(qq+14,rr-86,"Oh ! I forgot 'bout that thing on");
outtextxy(qq+14,rr-76,"the bar..");
delay(2200);
cleardevice();
}   */
/*cutscenes*/
/*void cutscene2(int x,int y)
{
int qq=x, rr=y;
speechb(qq,rr);
outtextxy(qq+14,rr-86,"Seems like takin' this stuff'");
outtextxy(qq+14,rr-76,"helps me keep movin' in");
outtextxy(qq+14,rr-66,"this creep house.");
delay(3200);
cleardevice();
} */



	     //  ||\\  //||     //\\       ||    ||\\   ||   //
	     //  || \\// ||    //  \\      ||    || \\  ||   //
	     //  || .    ||   //====\\     ||    ||  \\ ||   //
	     //  ||      ||  //      \\    ||    ||   \\||   //




void main()
{ //play=4;
	int gdriver = DETECT, gmode, errorcode;
	initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");
       //	void displayscreen();
  //	displayscreen();
	start:
	/*mainmenu();
		//cout<<"  1.Full    2.Test   3.Intro      4.Dialogue";
      //cin>>version;
      if(version==1 || version==3)
      {cutscene0();

      cleardevice();
      }        */
      cleardevice();
      setbkcolor(BLACK);

     fstream fin,fout;

     for(i=0;i<100;i++)
	  {
	 setcolor(WHITE);
	  starx[i]=random(640);
	 stary[i]=random(450);
		  }
  /* while(dgi>0)
   {
   cleardevice();
   lvl1:
   switch(level)
   {
   case 1:
   {
   if(version==1 || version==4)
   cutscene1();
   x=40;
   y=getmaxy()-19;

    ex=getmaxx()-40;
    ey=getmaxy()-19;
  for(pz=0;pz<100;pz++)
  {gx[pz]=0;
   gy[pz]=0;
   }
   pz=0;
  randomize();  */



      while(f>0)
  {

   f++;    gotoxy(10,10);
   timex+=f;
   timex+=s;
   if(life<2)
{
 explode(x,y);
 delay(500);
 score=0;
 life=100;
 pack=400;

 goto start;
 }

   gotoxy(6,4);
   cout<<"Score : "<<score;

    setbkcolor(BLACK);
   for(i=0;i<100;i++)
   {
	setcolor(WHITE);
	settextstyle(2,0,1);
	outtextxy(starx[i],stary[i],".");
	}
	setcolor(DARKGRAY);
   drawmap1();

if(play!=4)
{   if(gamedecider==2)
   objective();
   if(gamedecider==2)
   {
   mission();


   }      }

  //////////////////////////////////////////level completion

   if(ob==1)
   {   score+=10;
   cleardevice();
     oo++;
     ox[oo]=random(getmaxx()-40)+30;
     oy[oo]=random(getmaxy()-60)+40;

     ob=0;

   }

   if(gamedecider==1)
   {

	setcolor(BLUE);
   line(getmaxx()-30,getmaxy()-70,getmaxx()-30,getmaxy()-25);
   setcolor(CYAN);
   line(getmaxx()-27,getmaxy()-70,getmaxx()-27,getmaxy()-25);
	if(x>=getmaxx()-30 && y>=getmaxy()-20)
	{
	  delay(100);
	  settextstyle(3,0,3);
	  cleardevice();
	  outtextxy(getmaxx()/2-110,getmaxy()-275," LEVEL 1 COMPLETED");
	  level=2;
	  delay(1000);
	  getch();
	  break;
	  }
	  }


   setbkcolor(BLACK);
   textcolor(WHITE);
   setbkcolor(BLACK);
   cprintf("\n                                 GRAVITY CONTROL PROGRAM");
   setbkcolor(BLACK);

	drawmap1();
	drawplay(x,y);
	checkpoison(x,y);

  drawplay(x,y);
   prevy=y;
   prevx=x;
  drawplay(x,y);

//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

 if(play==4)
 { prevy=ey;
   prevx=ex;
   drawplay(ex,ey);
  if(priz==0)
   { PRIZART:
     gx[pz]=random(getmaxx()-50)+10;
     gy[pz]=random(getmaxy()-50)+10;
     if(gx[pz]>600&&gy[pz]>450)
     goto PRIZART;

      for(counter=0;counter<10;counter++)
     {  setcolor(CYAN);
	circle(gx[pz],gy[pz],counter);

	priz=1;	   }


	 }



   for(counter=0;counter<10;counter++)
     {  setcolor(CYAN);
	circle(gx[pz],gy[pz],counter);

		   }
   if(priz==1&&x<(gx[pz]+10)&&x>(gx[pz]-10)&&y<(gx[pz]+10)&&y>(gy[pz]-10))
   {
    priz=0;
    pz++;
    }
   else
   priz=1;

   if(priz==1&&ex<(gx[pz]+10)&&ex>(gx[pz]-10)&&ey<(gx[pz]+10)&&ey>(gy[pz]-10))
   {
    priz=0;
    pz++;
    }
   else
   priz=1;

 if(ex>gx[pz])
 ex-=3;
 if(ex<gx[pz])
 ex+=3;
 if(ey>gy[pz])
 ey-=3;
 if(ex<gx[pz])
 ey+=3;

 drawplay(ex,ey);



      }

//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||



  if(bioskey(1))
 {  choice=bioskey(0);
    qwerty=1;}


	bx+=1;
	coxx=y;
gotoxy(6,5);
cout<<"Jetpack :      \b\b\b\b\b";
if((pack-110)>0)
{
cout<<pack-110;}
else
cout<<"0";

if((jet%2)==0)
//if(play==0)
{
  if(qwerty==1)
{   switch(choice)
   {
   case 19712:
    l=0;
    for(i=0;i<n;i++)
 {
      if(x==Xe[i]||x==Xe[i]+1||x==Xe[i]+2||x==Xe[i]+3||x==Xe[i]+4&&y==H[i])
      l=1;	   }
    x+=5;
    checkpoison(x,y)
    ;
    if(l==1)
    { vel=0;
     goto K;

    }

    break;
    case 19200:
    l=0;
     for(i=0;i<n;i++)
 {
    if(x==X[i]||x==X[i]+1||x==X[i]+2||x==X[i]+3||x==X[i]+4&&y==H[i])
    l=1;     }
    x-=5;

    if(l==1)
     {   vel=0;

     goto K;
    }


    break;

    case 18432:
    vel=25;acc=2.1;
    K:

    for(s=0; s<10000; s++) /// going up
    {

    if(ob==1)
   {
     score+=10;

     {cleardevice();}

      for(i=0;i<100;i++)
   {
	setcolor(WHITE);
	settextstyle(2,0,1);
	outtextxy(starx[i],stary[i],".");
	}

     oo++;
     ox[oo]=random(getmaxx()-40)+30;
     oy[oo]=random(getmaxy()-60)+40;

     ob=0;

   }

    gotoxy(10,10);
   timex+=f;
   timex+=s;
   //cout<<timex;
      y=coxx+(-(vel*s/2)+(0.5*acc*s*s/4));

      if(bioskey(1)) 			// to check detection
       choice=bioskey(0);
     delay(10);

     mission();
     objective();

      if(y>getmaxy()-20)
      break;

   switch(choice)
   {case 19712:
    x+=3;
    break;
    case 19200:
    x-=3;
    break;
      case 20992:
    jet++;
    choice=123;
    if((jet%2)!=0);
   if(pack>=110)
   cleardevice(); goto J;
    break;
    }



       drawjplay(x,y);
       prevy=y;
       prevx=x;
	drawmap1();
      checkpoison(x,y);

	 bx++;

     for(i=0;i<n;i++)
 {
   for(d=X[i]-2;d<Xe[i];d++)
  {if(x==d)
   { if(y<(H[i]+55)&&y>(H[i]+45))
     {if(y<coxy)
      {
      vel=vel-3;acc=acc;
      }

	  }
	  }

	 }     }


    if(flag==1)
   { flag=0;
    break;   }

 for(i=0;i<n;i++)
 {
   for(d=X[i]-2;d<Xe[i];d++)
  {if(x==d)
   { if(y>H[i]&&y<(H[i]+15))
    { if(y>coxy)
      {flag=1;
       y=H[i];}}

     }

	 }     }


   if(flag==1)
   break;

  if(flag==1)
   { flag=0;
    break;   }

 coxy=y;
//////////////////////////// END OF JUMP LOOP////////////////////////////
	}




   if((y-prevy)>15)
   life-=2*(y-prevy);
   if(flag==1)
   break;
   else
   y=getmaxy()-20;

    break;

///////////////////////////////////////////////////////
    case 20992:
    jet++;
    choice=123;
    break;
    case 283:

    exit(0);
    break;
    case 7181:
    cheat();
    break;
    }

	   flag=0;
	   qwerty=0;
	   delay(0);
     }         }

  else if((jet%2)!=0)
  {if(pack<=110)
   goto M;

  J:
  pack--;
   switch(choice)
   {case 19712:
    x+=5;
    break;
    case 19200:
    x-=5;
    break;
    case 18432:
    y-=5;
    break;
    case 20480:
    y+=5;
    break;
    case 283:

    exit(0);
    break;
      case 14624:
    M:
    jet++;
    choice=123;
    if((jet%2)==0)
    {vel=0;
    goto K;}
    break;




    flag=0;


   drawlife();

     getch();
	break;



	 default:
	  {
	 cleardevice();
	 outtextxy(getmaxx()/2-110,getmaxy()-275,"Thanks for playin' !!");
	 delay(1000);
	 exit(0);
	 break;}

}}}  }
	/*

 void displayscreen()
 {

  char load[][80]={"templates      ","graphics        ","initgraph      ","c:\tc       ","initializin ","table       ","            ","#^~temp%0","circle.bit","line.exe     ","delf ^X","complete    ","extreme X    ","drivers@bgi  ","welscreen.jpg ","hang_man     ","char.hmorph","Dash__wrong   "};
  gotoxy(24,20);
   setbkcolor(BLACK);
   cout<<"Loading. . .";

// |||||||||||
  setcolor(GREEN);
  settextstyle(8,0,9.5);

  outtextxy(197,82,"FHART");
//||||||||||||||
 setcolor(BLUE);
 line(120,228,520,228);
 line(120,229,520,229);
 line(120,261,520,261);
 line(120,262,520,262);



  for(a=0;a<361;a++)
  {
   setcolor(GREEN);
   xd=random(19)+0;
    int midx = getmaxx()/2;
    int midy = getmaxy()/2;

   if(a<=320)
  {  setcolor(7);
   line(a+120,230,a+120,260);
   yd=a;
   }
   if(a>320)
  { setcolor(7);
   line(yd+120,230,yd+120,260);
   line(yd+121,230,yd+121,260);
   yd+=2;
   if(yd>400)
   break;
   }
   setcolor(BLUE);


   for(int yd=0;yd<=18;yd++)
   arc(midx,midy,0,a,200+yd);
   arc(midx,midy,0,a,200+2*yd);

   delay(5);



   gotoxy(35,20);
   setcolor(RED);
   if(b%3==0)
   cout<<load[xd];
   gotoxy(49,20);

   z=b/3.6;
   cout<<z<<"%";
   b++;
   }

 }                       */