#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>



void gameover()
{ delay(200);
  closegraph();
  exit(0);
}

int wincheck(int Brick[15][15])
 {
  for(int i=0;i<11;i++)
   {
    for(int j=0;j<10;j++)
     {
      if(Brick[i][j]!=15)
       return(0);
     }
   }
  return(1);
  }
int brickcheck_y(int ball_x,int ball_y,int ball_r,int Brick[15][15])
 {
  int m=0,n=0;
  for(int i=0;i<11;i++)
   {
    for(int j=0;j<10;j++)
     {
      if((ball_x+ball_r>25+60*j)&&(ball_x-ball_r<25+(60*j)+45))
       {
       m=1;}
      else
       m=0;
      if(ball_y+ball_r>=40+20*i&&ball_y-ball_r<=40+20*i+8)
       n=1;
      else n=0;
      if(m==1&&n==1&&Brick[i][j]!=15)
       {
	Brick[i][j]=15;
	setfillstyle(1,Brick[i][j]);
	bar(25+60*j,40+20*i,25+60*j+45,40+20*i+8);
	return(1);
       }
     }
   }
   return(0);
  }

int brickcheck_x(int ball_x,int prevball_x,int ball_y,int ball_r,int Brick[15][15])
 {
  int m=0,n=0;
  for(int i=0;i<11;i++)
   {
    for(int j=0;j<10;j++)
     {
      for(int k=40+20*i;k<=40+20*i+8;k++)
       {
       m=0;
       n=0;
       if((ball_y+ball_r==k)||ball_y-ball_r==k)
	n=1;
       else
	n=0;
       if((ball_x+ball_r>=25+60*j&&prevball_x+ball_r<=25+60*j)||(prevball_x-ball_r>=25+60*j+45&&ball_x-ball_r<=25+60*j+45))
	m=1;
       else
	m=0;
       if(m==1&&n==1&&Brick[i][j]!=15)
	{
	 Brick[i][j]=15;
	 setfillstyle(1,Brick[i][j]);
	 bar(25+60*j,40+20*i,25+60*j+45,40+20*i+8);
	 return(1);
	}
      }
      }
     }
   return(0);
  }


void printpaddle(int prevx,int x,int y,int size)
 {
    setfillstyle(1,WHITE);
    setcolor(WHITE);
    bar(prevx,y,prevx+size,y+5);
    setcolor(0);
    setfillstyle(1,2);
    bar(x,y,x+size,y+5);
    rectangle(x,y,x+size,y+5);
  }

void printball(int prevx,int prevy,int x,int y,int r)//PRINTS BALL AT GIVEN COORDINATES (x,y) AND ERASES IT FROM (prevx,prevy) r IS RADIUS
 {
    setcolor(WHITE);
    setfillstyle(1,WHITE);
    fillellipse(prevx,prevy,r,r);

    setfillstyle(1,RED);
    fillellipse(x,y,r,r);
    setcolor(0);
    circle(x,y,r);
    prevx=x;
    prevy=y;
 }

void bricklayer(int Brick[15][15])
 {
  for(int i=0;i<11;i++)
   {
    for(int j=0;j<10;j++)
     {
      Brick[i][j]=0;
     }
   }
  for(i=0;i<11;i++)
   {
    for(int j=0;j<10;j++)
     {
      setfillstyle(1,Brick[i][j]);
      bar(25+60*j,40+20*i,25+60*j+45,40+20*i+8);
     }
   }
 }

void initialgraphics(int wall_left,int wall_right,int wall_up,int wall_down,int wallcolor,int ball_r,int Brick[15][15],int life)
 {
  setfillstyle(1,wallcolor);
  bar(0,0,640,480);
  setfillstyle(1,15);
  bar(wall_left-ball_r,wall_up-ball_r,wall_right+ball_r,wall_down+ball_r);
  setcolor(0);
  rectangle(wall_left-ball_r,wall_up-ball_r,wall_right+ball_r,wall_down+ball_r);

  bricklayer(Brick);

  setfillstyle(1,4);
  setcolor(0);
  for(int i=1;i<=life;i++)
   {
    fillellipse(50+20*i,13,5,5);
   }

 }

void gamewon()
 {
  cleardevice();
  setcolor(15);
  outtextxy(320,240,"GAME WON");
  getch();
 }

int game()
 {
  long score=0;
  char stringscore[5];
  int Brick[15][15];
  int life=4;
  int startcondition=1;

  //WALL DATA

  int wall_left=20;
  int wall_right=640-wall_left;
  int wall_up=30;
  int wall_down=450;
  int wallcolor=14;

  //PADDLE DATA
  int paddlex=280;
  int paddley=wall_down-20;
  int prevpaddlex=paddlex;
  int paddlesize=80;

  //BALL DATA
  int ball_r=5;
  int ball_x=paddlex+paddlesize/2;//wall_left+ball_r+10;
  int ball_y=paddley;//wall_up+ball_r+10;
  int prevball_x=wall_left+ball_r;
  int prevball_y=wall_up+ball_r;
  int directionx=-1;
  int directiony=-1;

  char ch;

  initialgraphics(wall_left,wall_right,wall_up,wall_down,wallcolor,ball_r,Brick,life);
  settextstyle(0,0,1);
  outtextxy(480,10,"SCORE ");
  float m=2,n=3;
  char a;

  ltoa(score,stringscore,10);
  while(1)
   {
    setcolor(0);
    //outtextxy(527,10,stringscore);

    if(wincheck(Brick)==1)
     {
      gamewon();
      gameover();
      return(1);
     }
    //PADDLE
    printpaddle(prevpaddlex,paddlex,paddley,paddlesize);

    //BALL PRINTED HERE
    printball(prevball_x,prevball_y,ball_x,ball_y,ball_r);

    if(startcondition==1)
    {
     settextstyle(2,0,4);
     outtextxy(240,460,"<<<PRESS 'L' TO LAUNCH>>>");
     outtextxy(420,460,"USE A AND D TO MOVE");
    }

    while(startcondition==1)
     {
      a=getch();
      if(a=='l')
       {
	startcondition=0;
	setcolor(wallcolor);
	settextstyle(2,0,4);
	outtextxy(240,460,"<<<PRESS 'L' TO LAUNCH>>>");
	outtextxy(420,460,"USE A AND D TO MOVE");
       }
      else if(a=='e')
       {
	exit(0);
       }
     }
    //CHANGES BALL CO-ORDINATES
    if(directionx>0)
     {
      prevball_x=ball_x;
      ball_x+=m;
     }
    else
     {
      prevball_x=ball_x;
      ball_x-=m;
     }

    if(directiony>0)
     {
      prevball_y=ball_y;
      ball_y+=n;
     }
    else
     {
      prevball_y=ball_y;
      ball_y-=n;
     }
    //IF KEYBOARD IS PRESSED
    if(kbhit())
     {
      ch=getch();//GETS THE CHARACTER PRESSED

      if(ch=='e')//FOR GAME TESTING
       break;

      else if(ch=='d'&&paddlex+10<wall_right-paddlesize)//MOVES PADDLE TO RIGHT
       {
	prevpaddlex=paddlex;
	paddlex+=10;
       }

      else if(ch=='a'&&paddlex>10+wall_left)//MOVES PADDLE TO LEFT
       {
	prevpaddlex=paddlex;
	paddlex-=10;
       }
     }

    //IF BALL HITS LEFT AND RIGHT WALLS
    if(ball_x-ball_r<wall_left)
     {
      directionx=1;//CHANGES DIRECTION ALONG X AXIS
     }
    else if(ball_x+ball_r>wall_right)
     {
      directionx=-1;
     }
    //IF BALL HITS UPPER WALL OR PADDLE
    if(ball_y-ball_r<wall_up)
     {
      directiony=-1*directiony;//CHANGES DIRECTION ALONG Y AXIS
      ball_x=ball_x+5;
     }
    if((ball_y+ball_r>paddley&&ball_x+ball_r>paddlex&&ball_x-ball_r<paddlex+paddlesize))
      {
       directiony=-1*directiony;//CHANGES DIRECTION ALONG Y AXIS
       ball_y=paddley-ball_r-5;
       ball_x=ball_x+5;
      }

    if(brickcheck_y(ball_x,ball_y,ball_r,Brick)==1)
     {
      directiony=directiony*-1;
      score+=5;
      ltoa(score,stringscore,10);
      setfillstyle(1,wallcolor);
      bar(525,8,640,20);
      settextstyle(0,0,1);
      outtextxy(527,10,stringscore);
     }

    if(brickcheck_x(ball_x,prevball_x,ball_y,ball_r,Brick)==1)
     {

      directionx=directionx*-1;
      score+=5;
      ltoa(score,stringscore,10);
      setfillstyle(1,wallcolor);
      bar(525,8,640,20);
      settextstyle(0,0,1);
      outtextxy(527,10,stringscore);
     }

    if(ball_y+ball_r>wall_down)//TEMPORARY CODE FOR GAME TESTING
     {
      setfillstyle(1,15);
      bar(paddlex,paddley,paddlex+paddlesize,paddley+5);
      ball_x=320;
      paddlex=280;
      ball_y=paddley-ball_r;
      directionx=1;
      startcondition=1;
      life--;
      setfillstyle(1,0);
      fillellipse(50+20*(life+1),13,5,5);
      delay(100);
      if(life<0)
      {
       gameover();
       break;
      }

     }
    delay(15);

  }

  return(0);
 }

void main()
{clrscr();
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 game();
 getch();
 closegraph();
}