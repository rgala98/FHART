//352 escapes seq
#include<fstream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<bios.h>
#include<process.h>
#include<math.h>

long int count1,count2,count3,count4;
long int n=0;
struct marking
{ int x,y; } dots[1000],ghost1[2000],ghost2[2000],ghost3[2000],ghost4[2000];

class play
{public:
char name[30];
  int sc;
 play()
 {sc=0;}
};
int fscore=0;
fstream fin,fout;



void writescore()
{    play player;
       player.sc=fscore;
  cout<<"\n\n\n\t\t\t\tPlease type your name";
  cin>>player.name;
  fin.open("HScores.txt",ios::app|ios::in|ios::out);
  fin.write((char*)&player,sizeof(player));
  fin.seekg(0);

   fin.seekg(0);
   while(!fin.eof())

  {
     fin.read((char*)&player,sizeof(player));
     cout<<"\n\t\t\t\t"<<player.name<<"\t\t"<<player.sc;
   }
	getch();
  fin.close();



	    }

void dotsdevlop(xmax,ymax)
{ int i;
for(i=130; i<=370; i+=20)
{ dots[n].x=100; dots[n].y=i;
n++; }
for(i=190; i<=310; i+=20)
{ dots[n].x=140; dots[n].y=i;
n++; }
for(i=190; i<=320; i+=20)
{ dots[n].x=310; dots[n].y=i;
n++; }
for(i=75; i<=ymax-40; i+=20)
{ dots[n].x=400; dots[n].y=i;
n++; }
for(i=65; i<=400; i+=20)
{ dots[n].x=440; dots[n].y=i;
n++; }
for(i=95; i<=ymax-80; i+=20)
{ dots[n].x=480; dots[n].y=i;
n++; }
for(i=95; i<=ymax-80; i+=20)
{ dots[n].x=520; dots[n].y=i;
n++; }
for(i=130; i<=380; i+=20)
{ dots[n].x=355; dots[n].y=i;
n++; }
for(i=100; i<=350; i+=20)
{ dots[n].x=i; dots[n].y=400;
n++; }
for(i=60; i<=310; i+=20)
{ dots[n].x=i; dots[n].y=60;
n++; }
for(i=310; i<=350; i+=20)
{ dots[n].x=i; dots[n].y=105;
n++; }
for(i=310; i<=320; i+=20)
{ dots[n].x=i; dots[n].y=80;
n++; }
for(i=100; i<=120; i+=20)
{ dots[n].x=i; dots[n].y=105;
n++; }
for(i=140; i<=310; i+=20)
{ dots[n].x=i; dots[n].y=160;
n++; }
for(i=140; i<=310; i+=20)
{ dots[n].x=i; dots[n].y=340;
n++; }
for(i=50; i<=350; i+=20)
{ dots[n].x=i; dots[n].y=20;
n++; }
for(i=60; i<=620; i+=20)
{ dots[n].x=i; dots[n].y=450;
n++; }
for(i=480; i<=540; i+=20)
{ dots[n].x=i; dots[n].y=65;
n++; }
for(i=440; i<=530; i+=20)
{ dots[n].x=i; dots[n].y=415;
n++; }
for(i=20; i<ymax-10; i+=20)
{ dots[n].y=i; dots[n].x=25;
n++; }
for(i=85; i<=430; i+=20)
{ dots[n].x=62; dots[n].y=i;
n++; }

for(i=240; i<=250; i+=20)
{ dots[n].x=120; dots[n].y=i;
n++; }
for(i=85; i<120; i+=20)
{ dots[n].x=135; dots[n].y=i;
n++; }
for(i=45; i<=ymax-40; i+=20)
{ dots[n].x=xmax-80; dots[n].y=i;
n++; }
for(i=130; i<=140; i+=20)
{ dots[n].x=420; dots[n].y=i;
n++; }
for(i=350; i<=380; i+=20)
{ dots[n].x=i; dots[n].y=50;
n++; }
for(i=170; i<=280; i+=20)
{ dots[n].x=i; dots[n].y=105;
n++; }
for(i=170; i<=180; i+=20)
{ dots[n].x=i; dots[n].y=85;
n++; }
for(i=460; i<=560; i+=20)
{ dots[n].x=i; dots[n].y=25;
n++; }
}

void construct(xmax,ymax, limit)
{ setcolor(getmaxcolor());
 //surround
	rectangle(10,5,xmax-10,ymax-5);
//maze
line(45,40,190,40);             line(45,40,45,175);
line(230,40,330,40);            line(45,250,45,ymax-5);
line(330,75,380,75);            line(80,85,80,430);
line(190,85,290,85);            line(120,130,120,220);
line(290,130,330,130);          line(160,190,160,310);
line(120,130,150,130);          line(290,190,290,310);
line(245,190,290,190);          line(150,85,150,130);
line(160,190,205,190);          line(120,270,120,370);
line(160,310,290,310);          line(330,130,330,370);
line(120,370,330,370);          line(330,40,330,75);
line(80,430 ,380,430);          line(290,85,290,130);
line(420,430,xmax-100,430);     line(380,75,380,190);
line(xmax-60,430,xmax-10,430);  line(380,240,380,430);
line(80,85,115,85);             line(xmax-60,250,xmax-60,430);
line(190,130,240,130);          line(420,150,420,430);
				line(420,5,420,100);
line(460,45,540,45);	        line(xmax-60,10,xmax-60,200);
				line(460,45,460,ymax-90);
				line(540,90,540,200);
				line(540,250,540,430);
				line(500,90,500,390);


 setfillstyle(SOLID_FILL,WHITE);
 for(int n=0; n<limit; n++)
 { circle(dots[n].x,dots[n].y,3);
   floodfill(dots[n].x,dots[n].y,WHITE); }
 }

 void ghost(xmax,ymax)
 { int i,j;
 count1=0;
 for(i=30; i<415; i++)
{ ghost1[count1].x=440; ghost1[count1].y=i; count1++; }
 for(i=440; i<480; i++)
{ ghost1[count1].x=i; ghost1[count1].y=415; count1++; }
 for(i=415; i>65; i--)
{ ghost1[count1].x=480; ghost1[count1].y=i; count1++;}
 for(i=480; i<=520; i++)
{ ghost1[count1].x=i; ghost1[count1].y=65; count1++;}
 for(i=75; i<415; i++)
{ ghost1[count1].x=520; ghost1[count1].y=i; count1++;}
 for(i=520; i>440; i--)
{ ghost1[count1].x=i; ghost1[count1].y=415; count1++;}
for(i=415; i>30; i--)
{ ghost1[count1].x=440; ghost1[count1].y=i; count1++; }

 count2=0;
 for(i=250;i>160;i--)
    { ghost2[count2].x=225; ghost2[count2].y=i; count2++; }
 for(i=225;i>140;i--)
    { ghost2[count2].x=i; ghost2[count2].y=160; count2++; }
 for(i=160; i<340; i++)
    { ghost2[count2].x=140; ghost2[count2].y=i; count2++;}
 for(i=140;i<310;i++)
    { ghost2[count2].x=i; ghost2[count2].y=340; count2++;}
 for(i=340; i>160; i--)
    { ghost2[count2].x=310; ghost2[count2].y=i; count2++;}
 for(i=310;i>225;i--)
    { ghost2[count2].x=i; ghost2[count2].y=160; count2++;}

 count3=0;
 for(i=20; i<450; i++)
    { ghost3[count3].x=400; ghost3[count3].y=i; count3++; }
 for(i=400; i>62; i--)
    { ghost3[count3].x=i; ghost3[count3].y=450; count3++; }
 for(i=450; i>230; i--)
    { ghost3[count3].x=62; ghost3[count3].y=i; count3++; }
 for(i=62; i>25; i--)
    { ghost3[count3].x=i; ghost3[count3].y=230; count3++; }
 for(i=230; i>20; i--)
    { ghost3[count3].x=25; ghost3[count3].y=i; count3++; }
 for(i=25; i<400; i++)
    { ghost3[count3].x=i; ghost3[count3].y=20; count3++; }

 count4=0;
 for(i=355; i>100; i--)
    { ghost4[count4].x=i; ghost4[count4].y=400; count4++; }
 for(i=400; i>105; i--)
    { ghost4[count4].x=100; ghost4[count4].y=i; count4++; }
 for(i=100; i<135; i++)
    { ghost4[count4].x=i; ghost4[count4].y=105; count4++; }
 for(i=105; i>60; i--)
    { ghost4[count4].x=135; ghost4[count4].y=i; count4++; }
 for(i=135; i<310; i++)
    { ghost4[count4].x=i; ghost4[count4].y=60; count4++; }
 for(i=60;i<105;i++)
    { ghost4[count4].x=310; ghost4[count4].y=i; count4++; }
 for(i=310; i<355; i++)
    { ghost4[count4].x=i; ghost4[count4].y=105; count4++; }
 for(i=105; i<400; i++)
    { ghost4[count4].x=355; ghost4[count4].y=i; count4++; }
 }


 void moveplayer(xmax,ymax, limit)
 { int x1,x2,y1,y2,flag=1, valve;
 int x=xmax/2, y=ymax-24,nwx,nwy;
 int move,color=1;
 void gameover();

 //Character
 setcolor(YELLOW);
 circle(x,y,15);
 setfillstyle(SOLID_FILL, YELLOW);
 floodfill(x,y,YELLOW);
 long int l,step1=1,step2=1,step3=1,step2by,step1by,step3by,step4=1,step4by;

 // GHOST AT BEGINNING
 setcolor(BLUE);
 circle(ghost1[0].x,ghost1[0].y,10);
 setfillstyle(SOLID_FILL,BLUE);
 floodfill(ghost1[0].x,ghost1[0].y,BLUE);

 setcolor(GREEN);
circle(ghost2[0].x,ghost2[0].y,10);
setfillstyle(SOLID_FILL, GREEN);
floodfill(ghost2[0].x,ghost2[0].y,GREEN) ;

setcolor(CYAN);
circle(ghost3[0].x,ghost3[0].y,10);
setfillstyle(SOLID_FILL, CYAN);
floodfill(ghost3[0].x,ghost3[0].y,CYAN) ;

setcolor(RED);
circle(ghost4[0].x,ghost4[0].y,10);
setfillstyle(SOLID_FILL, RED);
floodfill(ghost4[0].x,ghost4[0].y,RED) ;

 for(int j=0;;j++)
{

//GHOST 1
step1by=step1-1;

if(step1==count1) step1=0;
setcolor(BLACK);
circle(ghost1[step1by].x,ghost1[step1by].y,10);
setfillstyle(SOLID_FILL, BLACK);
floodfill(ghost1[step1by].x,ghost1[step1by].y,BLACK) ;

setcolor(BLUE);
circle(ghost1[step1].x,ghost1[step1].y,10);
setfillstyle(SOLID_FILL, BLUE);
floodfill(ghost1[step1].x,ghost1[step1].y,BLUE) ;
setcolor(getmaxcolor());
setfillstyle(SOLID_FILL,getmaxcolor());
for(l=0;l<n;l++)
{ if(pow(ghost1[step1by].x-dots[l].x,2)+pow(ghost1[step1by].y-dots[l].y,2)==169)
    {  circle(dots[l].x,dots[l].y,3);
       floodfill(dots[l].x,dots[l].y,getmaxcolor());  break;
    }
}
++step1;

//GHOST 2


step2by=step2-1;
if(step2==count2) step2=90;
setcolor(BLACK);
circle(ghost2[step2by].x,ghost2[step2by].y,10);
setfillstyle(SOLID_FILL, BLACK);
floodfill(ghost2[step2by].x,ghost2[step2by].y,BLACK) ;

setcolor(GREEN);
circle(ghost2[step2].x,ghost2[step2].y,10);
setfillstyle(SOLID_FILL, GREEN);
floodfill(ghost2[step2].x,ghost2[step2].y,GREEN) ;
setcolor(getmaxcolor());
setfillstyle(SOLID_FILL,getmaxcolor());
for(l=0;l<n;l++)
{ if(pow(ghost2[step2by].x-dots[l].x,2)+pow(ghost2[step2by].y-dots[l].y,2)==169)
{  circle(dots[l].x,dots[l].y,3);
   floodfill(dots[l].x,dots[l].y,getmaxcolor());  break;
}
}
++step2;


//GHOST 3

step3by=step3-1;

if(step3==count3) step3=0;
setcolor(BLACK);
circle(ghost3[step3by].x,ghost3[step3by].y,10);
setfillstyle(SOLID_FILL, BLACK);
floodfill(ghost3[step3by].x,ghost3[step3by].y,BLACK) ;

setcolor(CYAN);
circle(ghost3[step3].x,ghost3[step3].y,10);
setfillstyle(SOLID_FILL, CYAN);
floodfill(ghost3[step3].x,ghost3[step3].y,CYAN) ;
setcolor(getmaxcolor());
setfillstyle(SOLID_FILL,getmaxcolor());
for(l=0;l<n;l++)
{ if(pow(ghost3[step3by].x-dots[l].x,2)+pow(ghost3[step3by].y-dots[l].y,2)==169)
{  circle(dots[l].x,dots[l].y,3);
   floodfill(dots[l].x,dots[l].y,getmaxcolor());  break;
}
}
++step3;

//GHOST 4

step4by=step4-1;

if(step4==count4) step4=0;
setcolor(BLACK);
circle(ghost4[step4by].x,ghost4[step4by].y,10);
setfillstyle(SOLID_FILL, BLACK);
floodfill(ghost4[step4by].x,ghost4[step4by].y,BLACK) ;

setcolor(RED);
circle(ghost4[step4].x,ghost4[step4].y,10);
setfillstyle(SOLID_FILL, RED);

floodfill(ghost4[step4].x,ghost4[step4].y,RED) ;
setcolor(getmaxcolor());
setfillstyle(SOLID_FILL,getmaxcolor());
for(l=0;l<n;l++)
{ if(pow(ghost4[step4by].x-dots[l].x,2)+pow(ghost4[step4by].y-dots[l].y,2)==169)
{  circle(dots[l].x,dots[l].y,3);
   floodfill(dots[l].x,dots[l].y,getmaxcolor());  break;
}
}
++step4;
if(kbhit())
{
move=bioskey(0);
valve=0;
if(j=0)
{ setcolor(BLACK);
 circle(ghost1[0].x,ghost1[0].y,10);
 setfillstyle(SOLID_FILL,BLACK);
 floodfill(ghost1[0].x,ghost1[0].y,BLACK);
 }

if(limit==0&&(x>=175&&x<=290)&&(y>=205&&y<=295)) gameover();

if(move==7181) exit(0);//<-----------------------------------------------

for(int i=1; i<=5; i++)
{
x1=x+i; x2=x-i; y1=y+i; y2=y-i;
 flag=1;

switch(move)
 { case 19712 : {   //if(x1>45&&x1<75&&y>=35&&y<=190) break;
 if(x1==45&&y>=235&&y<=479) break;
 if(x1==65&&y<=445&&y>=70) break;
 if(x1==105&&y<=235&& y>=115) break;
 if(x1==145&&y<=325&&y>=175) break;
 if(x1==275&&y<=325&&y>=175) break;
 if(x1==135&&y<=145&&y>=70) break;
 if(x1==315&&y<=385&&y>=115) break;
 if(x1==315&&y<=90&&y>=25) break;
 if(x1==275&&y<=145&&y>=70) break;
 if(x1==105&&y<=385&&y>=255) break;
 if(x1==315&&y<=385&&y>=115) break;
 if(x1==365&&y<=445&&y>=215) break;
 if(x1==365&&y>=60&&y<=205) break;
 if(x1==xmax-75&&y>=235&&y<=445) break;
 if(x1==405&&y>=135&&y<=445) break;
 if(x1==405&&y>=15&&y<=115) break;
 if(x1==xmax-75&&y>=0&&y<=215) break;
 if(x1==445&&y>=35&&y<=ymax-75) break;
 if(x1==525&&y>=75&&y<=215) break;
 if(x1==525&&y>=225&&y<=445) break;
 if(x1==485&&y>=75&&y<=405) break;
 if(x1==215&&y>25&&y<55) break;
 if(x1==175&&y>70&&y<100) break;
 if(x1==230&&y>175&&y<205) break;
 if(x1==175&&y>115&&y<145) break;

 if((x1<xmax-25))
 { flag=0;
 nwx=x1;nwy=y;
 for(int m=0; m<limit; m++)
{ if(pow(dots[m].x-x1,2)+pow(dots[m].y-y,2)<225)
    { for(int n=m+1; n<=limit; n++)
      { dots[n-1]=dots[n]; }
	limit--;

    }
}

setcolor(BLACK);
circle(x1-1,y,15);
setfillstyle(SOLID_FILL, BLACK);
 floodfill(x1-1,y,BLACK);

setcolor(YELLOW);
 circle(x1,y,15);
 setfillstyle(SOLID_FILL, YELLOW);
 floodfill(x1,y,YELLOW);

 if(color%2)
{ setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
pieslice(nwx,nwy,0,40,15); } color++;
 }
 break;
 }


 case 19200 : {  if(x2==60&&y>=25&&y<=190) break;
 if(x2==60&&y>=235&&y<=470) break;
 if(x2==95&&y<=445&&y>=70) break;
 if(x2==135&&y<=235&&y>=115) break;
 if(x2==175&&y<=325&&y>=175) break;
 if(x2==305&&y<=325&&y>=175) break;
 if(x2==165&&y<=145&&y>=70) break;
 if(x2==345&&y<=385&&y>=115) break;
 if(x2==345&&y<=90&&y>=25) break;
 if(x2==305&&y<=145&&y>=70) break;
 if(x2==135&&y<=385&&y>=255) break;
 if(x2==345&&y>=115&&y<=385) break;
 if(x2==345&&y>=25&&y<=90) break;
 if(x2==305&&y>=70&&y<=145) break;
 if(x2==395&&y>=60&&y<=205) break;
 if(x2==395&&y>=225&&y<=445) break;
 if(x2==xmax-45&&y>=235&&y<=445) break;
 if(x2==435&&y>=135&&y<=445) break;
 if(x2==435&&y>=15&&y<=115) break;
 if(x2==xmax-45&&y<=215) break;
 if(x2==475&&y>=35&&y<=ymax-75) break;
 if(x2==555&&y>=75&&y<=215) break;
 if(x2==555&&y>=235&&y<=445) break;
 if(x2==515&&y>=75&&y<=405) break;
 if(x2==205&&y>25&&y<55) break;
 if(x2==345&&y>25&&y<55) break;
 if(x2==305&&y>70&&y<100) break;
 if(x2==220&&y>175&&y<205) break;
 if(x2==130&&y>70&&y<100) break;
 if(x2==255&&y>115&&y<145) break;
 if(x2==555&&y>30&&y<60) break;

 if(x2>25)
 { flag=0;
 nwx=x2; nwy=y;
 for(int m=0; m<limit; m++)
{ if(pow(dots[m].x-x2,2)+pow(dots[m].y-y,2)<225)
    { for(int n=m+1; n<=limit; n++)
      { dots[n-1]=dots[n]; }
	limit--;
     break;
    }
}

setcolor(BLACK);
circle(x2+1,y,15);
setfillstyle(SOLID_FILL, BLACK);
 floodfill(x2+1,y,BLACK);

setcolor(YELLOW);
 circle(x2,y,15);
 setfillstyle(SOLID_FILL, YELLOW);
 floodfill(x2,y,YELLOW);

 if(color%2)
{ setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
pieslice(nwx,nwy,140,180,15); } color++;
 }
 break; }


 case 18432 :{ if(x>26&&x<54&&y2==205) break;
 if(y2==55&&x>30&&x<205) break;
 if(x<60&&x>30&&y2==190) break;
 if(x<95&&x>65&&y2==445) break;
 if(x<135&&x>105&&y2==235) break;
 if(x<175&&x>145&&y2==325) break;
 if(x<305&&x>275&&y2==325) break;
 if(x<165&&x>145&&y2==145) break;
 if(x<345&&x>315&&y2==385) break;
 if(x<345&&x>315&&y2==90) break;
 if(x<305&&x>275&&y2==145) break;
 if(x<135&&x>105&&y2==385) break;
 if(x>215&&x<345&&y2==55) break;
 if(x>315&&x<395&&y2==90) break;
 if(x>175&&x<305&&y2==100) break;
 if(x>275&&x<345&&y2==145) break;
 if(x>105&&x<165&&y2==145) break;
 if(x>230&&x<305&&y2==205) break;
 if(x>175&&x<220&&y2==205) break;
 if(x>175&&x<305&&y2==325) break;
 if(x>105&&x<345&&y2==395) break;
 if(x>65&&x<395&&y2==445) break;
 if(x>405&&x<xmax-85&&y2==445) break;
 if(x>xmax-75&&x<xmax&&y2==445) break;
 if(x>65&&x<130&&y2==100) break;
 if(x>175&&x<255&y2==145) break;
 if(x>=445&&x<555&&y2==60) break;

 if(y2>20)
 { flag=0;
 nwx=x; nwy=y2;
 for(int m=0; m<limit; m++)
{ if(pow(dots[m].x-x,2)+pow(dots[m].y-y2,2)<225)
    { for(int n=m+1; n<=limit; n++)
      { dots[n-1]=dots[n]; }
	limit--;
     break;
    }
}

setcolor(BLACK);
circle(x,y2+1,15);
setfillstyle(SOLID_FILL, BLACK);
 floodfill(x,y2+1,BLACK);

setcolor(YELLOW);
 circle(x,y2,15);
 setfillstyle(SOLID_FILL, YELLOW);
 floodfill(x,y2,YELLOW);

 if(color%2)
{ setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
pieslice(nwx,nwy,70,110,15); } color++;
}

 break;}

 case 20480 :{ if(x>30&&x<205&&y1==25) break;
 if(x>26&&x<54&&y1==205-30) break;
 if(x<60&&x>30&&y1==190-30) break;
 if(x<95&&x>65&&y1==445-30) break;
 if(x<135&&x>105&&y1==235-30) break;
 if(x<175&&x>145&&y1==325-30) break;
 if(x<305&&x>275&&y1==325-30) break;
 if(x<165&&x>145&&y1==145-30) break;
 if(x<345&&x>315&&y1==385-30) break;
 if(x<345&&x>315&&y1==90-30) break;
 if(x<305&&x>275&&y1==145-30) break;
 if(x<135&&x>105&&y1==385-30) break;
 if(x>215&&x<345&&y1==55-30) break;
 if(x>315&&x<395&&y1==90-30) break;
 if(x>175&&x<305&&y1==100-30) break;
 if(x>275&&x<345&&y1==145-30) break;
 if(x>105&&x<165&&y1==145-30) break;
 if(x>230&&x<305&&y1==205-30) break;
 if(x>175&&x<220&&y1==205-30) break;
 if(x>175&&x<305&&y1==325-30) break;
 if(x>105&&x<345&&y1==355) break;
 if(x>65&&x<395&&y1==445-30) break;
 if(x>405&&x<xmax-85&&y1==445-30) break;
 if(x>xmax-75&&x<xmax&&y1==445-30) break;
 if(x>65&&x<130&&y1==100-30) break;
 if(x>175&&x<255&y1==145-30) break;
 if(x>365&&x<435&&y1==45-30) break;
 if(x>445&&x<555&&y1==60-30) break;
 if(y1==175&&x>145&&x<220) break;

 if(y1<ymax-20)
 { flag=0;
 nwx=x; nwy=y1;
 for(int m=0; m<limit; m++)
{ if(pow(dots[m].x-x,2)+pow(dots[m].y-y1,2)<225)
    { for(int n=m+1; n<=limit; n++)
      { dots[n-1]=dots[n]; }
	limit--;
     break;
    }
}

setcolor(BLACK);
circle(x,y1-1,15);
setfillstyle(SOLID_FILL, BLACK);
 floodfill(x,y1-1,BLACK);

setcolor(YELLOW);
 circle(x,y1,15);
 setfillstyle(SOLID_FILL, YELLOW);
 floodfill(x,y1,YELLOW);

 if(color%2)
{ setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
pieslice(nwx,nwy,250,290,15); } color++;}
 break; }
 }

 if(pow(ghost1[step1-1].x-nwx,2)+pow(ghost1[step1-1].y-nwy,2)<625) gameover();
 else if(pow(ghost2[step2-1].x-nwx,2)+pow(ghost2[step2-1].y-nwy,2)<625) gameover();
 else if(pow(ghost3[step3-1].x-nwx,2)+pow(ghost3[step3-1].y-nwy,2)<625) gameover();
 else if(pow(ghost4[step4-1].x-nwx,2)+pow(ghost4[step4-1].y-nwy,2)<625) gameover();

 if(flag==1) break;
else valve=i;

}

{ if(move==19712) x+=valve;
else if(move==19200) x-=valve;
else if(move==18432) y-=valve;
else if(move==20480) y+=valve; }

}

delay(5);}

}

void gameover()
{ cleardevice();

setcolor(9);
fscore = 650;
settextstyle(3,0,3);
outtextxy(getmaxx()/2-20,getmaxy()/2,"GAME OVER");
delay(1200);
cleardevice();
writescore();
exit(0);
}

void main()
{ clrscr();
 int gdriver=DETECT, gmode, errorcode;
 initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
 int xmax,ymax;

 xmax=getmaxx();
 ymax=getmaxy();
 setcolor(getmaxcolor());
 dotsdevlop(xmax,ymax);
 int limit=0;
 while(dots[limit].x!='\0') limit++;
 construct(xmax,ymax,limit);
 ghost(xmax,ymax);
 moveplayer(xmax,ymax,limit);

 getch();

 closegraph();
}