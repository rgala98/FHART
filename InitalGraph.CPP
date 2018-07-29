#include<iostream.h>
#include<graphics.h>
#include<process.h>
#include<stdlib.h>
#include<conio.h>
#include<bios.h>
#include<dos.h>

int keyl,xdis=145,ydis=-5,xlb=0,ylb=0-7,xjt=205,i0,i1,j1,i2,j2,i3,j3,i4,j4;
int li,i,yjt=107;
void help_fl();void dis_fl();void logo_fl();void load_fl();void menu_fl();
void credits_flst();void credits_flnd();

void cre0()
{for(i0=-100;i0<=50;i0++)
 {setcolor(15);
  outtextxy(170,i0,"Digital Joints Inc. ");
  setcolor(0);
  outtextxy(170,i0-1,"Digital Joints Inc. ");}
  setcolor(15);
  outtextxy(170,i0,"Digital Joints Inc. ");
}

void cre1()
{for(i1=-100;i1<=350;i1++)
  {setcolor(15);    settextstyle(8,0,4);
   outtextxy(30,i1,"Nisarg"); delay(5);
   setcolor(0);
   outtextxy(30,i1-1,"Nisarg");}
   setcolor(15);
   outtextxy(30,i1,"Nisarg");
   setcolor(0);
   outtextxy(30,i1,"Nisarg");
   setcolor(0);
   outtextxy(30,i1-1,"Nisarg");   delay(100);

 for(j1=340,li=620;j1>=100;j1--,li-=2)
  {setcolor(15);    settextstyle(8,0,4);
   outtextxy(30,j1,"Nisarg"); delay(5);
   setcolor(0);
   outtextxy(30,j1+1,"Nisarg");
   setcolor(3);
   rectangle(0,li,160,540); }
   setcolor(15);
   outtextxy(30,j1,"Nisarg");
}

void cre2()
{for(i2=-100;i2<=350;i2++)
  {setcolor(15);    settextstyle(8,0,4);
   outtextxy(185,i2,"Rahul"); delay(5);
   setcolor(0);
   outtextxy(185,i2-1,"Rahul");}
   setcolor(15);
   outtextxy(185,i2,"Rahul");
   setcolor(0);
   outtextxy(185,i2,"Rahul");
   setcolor(0);
   outtextxy(185,i2-1,"Rahul");   delay(100);

 for(j2=340,li=570;j2>=150;j2--,li-=2)
  {setcolor(15);    settextstyle(8,0,4);
  outtextxy(185,j2,"Rahul"); delay(5);
  setcolor(0);
  outtextxy(185,j2+1,"Rahul");
  setcolor(9);
  rectangle(160,li,310,540); }
  setcolor(15);
  outtextxy(185,j2,"Rahul");
}

void cre3()
{for(i3=-100;i3<=350;i3++)
  {setcolor(15);    settextstyle(8,0,4);
   outtextxy(325,i3,"Raveesh"); delay(5);
   setcolor(0);
   outtextxy(325,i3-1,"Raveesh");}
   setcolor(15);
   outtextxy(325,i3,"Raveesh");
   setcolor(0);
   outtextxy(325,i3,"Raveesh");
   setcolor(0);
   outtextxy(325,i3-1,"Raveesh");   delay(100);

 for(j3=340,li=520;j3>=200;j3--,li-=2)
  {setcolor(15);    settextstyle(8,0,4);
   outtextxy(325,j3,"Raveesh"); delay(5);
   setcolor(0);
   outtextxy(325,j3+1,"Raveesh");
   setcolor(14);
   rectangle(310,li,475,540);}
   setcolor(15);
   outtextxy(325,j3,"Raveesh");
}

void cre4()
{for(i4=-100;i4<=350;i4++)
  {setcolor(15);    settextstyle(8,0,4);
   outtextxy(496,i4,"Swapnil"); delay(5);
   setcolor(0);
   outtextxy(496,i4-1,"Swapnil");}
   setcolor(15);
   outtextxy(496,i4,"Swapnil");
   setcolor(0);
   outtextxy(496,i4,"Swapnil");
   setcolor(0);
   outtextxy(496,i4-1,"Swapnil");   delay(100);

 for(j4=340,li=480;j4>=240;j4--,li-=2)
  {setcolor(15);    settextstyle(8,0,4);
   outtextxy(496,j4,"Swapnil"); delay(5);
   setcolor(0);
   outtextxy(496,j4+1,"Swapnil");
   setcolor(4);
   rectangle(475,li,639,540);}
   setcolor(15);
   outtextxy(496,j4,"Swapnil");
}

void load_bd()
{setcolor(4);                    //red borders
 rectangle(2,2,638,478);
 rectangle(5,5,635,475);
 rectangle(8,8,632,472);

 setfillstyle(1,1);              //blue bar
 bar(325,100,540,200);

 setcolor(1);                    //blue rect
 rectangle(100,100,540,200);
 rectangle(101,101,541,201);
}

void load_text()
{setcolor(0);                      //black font
 settextstyle(0,0,10);
 outtextxy(130,115,"FAHRT");

 setcolor(1);                      //blue font
 settextstyle(0,0,10);
 outtextxy(130,115,"FA");

 setcolor(1);
 rectangle(290,115,310,185);       //half H
 rectangle(310,145,325,155);
 setfillstyle(1,1);
 floodfill(311,146,1);
 floodfill(295,130,1);

 setcolor(4);
 settextstyle(8,0,1);
}

void load_bar()
{setcolor(10);
 rectangle(78,349,563,381);
 setfillstyle(1,1);
 for(i=0;i<69;i++,xlb+=7)
  {bar(79+xlb,350,86+xlb,380);
   if(i==28 || i==42 || i>=55)
     delay(450);
   else
     delay(215);
  }
}

void smoke()
{setcolor(8);
 line(108+xjt,70+yjt,111+xjt,80+yjt);
 line(115+xjt,70+yjt,115+xjt,80+yjt);
 line(122+xjt,70+yjt,119+xjt,80+yjt);
 delay(500);
 setcolor(0);
 line(108+xjt,70+yjt,111+xjt,80+yjt);
 line(115+xjt,70+yjt,115+xjt,80+yjt);
 line(122+xjt,70+yjt,119+xjt,80+yjt);
 delay(500);
 setcolor(8);
 line(108+xjt,70+yjt,111+xjt,80+yjt);
 line(115+xjt,70+yjt,115+xjt,80+yjt);
 line(122+xjt,70+yjt,119+xjt,80+yjt);
}

void dis()
{setfillstyle(1,15);
 floodfill(10,10,1);
 setcolor(0);
 settextstyle(2,0,11);
 outtextxy(50+xdis,50+ydis,"DISCLAIMER");
 outtextxy(51+xdis,50+ydis,"DISCLAIMER");
 outtextxy(50+xdis,49+ydis,"DISCLAIMER");
 outtextxy(50+xdis,51+ydis,"DISCLAIMER");
 outtextxy(49+xdis,50+ydis,"DISCLAIMER");
 line(190,86,425,86);
 line(190,87,425,87);
 line(190,88,425,88);
 settextstyle(2,0,5);

 outtextxy(100,100,"FAHRT 2017 is an intellectual property of Digital Joints Inc.  ");
 outtextxy(115,120,"in association with Shadow Productions and Luci Labs. ");
 outtextxy(100,170,"All the characters, town and names used in this game are purely ");
 outtextxy(100,190,"work of Fiction. Any resemblances to any person (dead or alive)");
 outtextxy(100,210,"or using name of any town is purely coincidental. ");
 outtextxy(240,270,"All Rights Reserved. ");
}

void rating()
{setfillstyle(1,0);
 bar(550,370,595,435);     //outer box
 setfillstyle(1,15);
 bar(555,385,590,420);     //inner box
 setcolor(0);
 settextstyle(0,0,4);
 outtextxy(560,390,"T");
 setcolor(15);
 settextstyle(11,0,1);
 outtextxy(556,375,"TEEN");
 settextstyle(0,0,1);
 outtextxy(557,425,"DJRB");
}

void rights()
{settextstyle(0,0,0);
 setcolor(15);
 arc(124,461,0,360,7);
 outtextxy(121,458,"C");
 outtextxy(140,458,"2017 Digital Joints Inc. All rights reserved.");
}

void logobk()
{setcolor(15);
 setfillstyle(4,1);
 bar(-1,-1,640,480);
 setfillstyle(1,0);
 bar(20,20,619,459);
 rectangle(170,140,470,340);   //outer box
 rectangle(190,160,450,300);   //inner box
 circle(250,320,10);           //left circle
 circle(390,320,10);	       //right circle
 circle(250,320,6);            //inner left
 circle(390,320,6);	       //inner right
 setfillstyle(9,6);
 floodfill(175,150,15);
 setcolor(15);
}

void joint()
{line(100+xjt,100+yjt,105+xjt,170+yjt);
 line(130+xjt,100+yjt,125+xjt,170+yjt);
 line(105+xjt,170+yjt,125+xjt,170+yjt);
 line(104+xjt,155+yjt,126+xjt,155+yjt);
 line(100+xjt,100+yjt,105+xjt, 90+yjt);
 line(125+xjt, 90+yjt,130+xjt,100+yjt);
 line(105+xjt, 90+yjt,125+xjt, 90+yjt);   // <-- lower
 line(105+xjt, 90+yjt,110+xjt, 85+yjt);
 line(125+xjt, 90+yjt,120+xjt, 85+yjt);
 line(110+xjt, 85+yjt,120+xjt, 85+yjt);   // <-- upper
 setfillstyle(1,8);
 bar(112+xjt,83+yjt,117+xjt,84+yjt);
 setfillstyle(9,12);
 floodfill(107+xjt,89+yjt,15);
 setfillstyle(1,7);
 floodfill(125+xjt,160+yjt,15);
 setfillstyle(9,2);
 floodfill(125+xjt,152+yjt,15);

}

void logotxt()
{setcolor(2);
 settextstyle(2,0,5);
 outtextxy(197,160,"0 1 1 0 1 1 0 1 0 1 1 1 0 0 0 1");
 outtextxy(197,180,"1 0 0 0 1 1 0     1 0 0 0 1 1 0");
 outtextxy(197,200,"0 1 0 1 0 1 0     0 0 1 1 0 1 1");
 outtextxy(197,220,"0 1 0 1 1 1 1     1 1 1 1 1 0 1");
 outtextxy(197,240,"1 0 0 1 0 0 1     0 1 0 0 0 1 1");
 outtextxy(197,260,"0 0 1 0 0 1 0     1 1 0 1 1 0 1");
 outtextxy(197,280,"1 0 0 1 1 0 1 0 1 0 1 1 0 1 0 0");
 setcolor(3);
 settextstyle(8,0,4);
 outtextxy(168,350,"Digital Joints Inc.");

 do
 {smoke();
 }while(!kbhit());

}

void menuscr()
{setcolor(15);
 settextstyle(0,0,5);
 outtextxy(160,85, "MAIN MENU");
 settextstyle(8,0,3);
 outtextxy(250,160, "1.PLAY");
 outtextxy(250,200, "2.HELP");
 outtextxy(250,240, "3.CREDITS");
 outtextxy(250,280, "4.QUIT");
}

void menu_key()
{Menu_rep:
 keyl=bioskey(0);
 settextstyle(8,0,3);
 if(keyl==561)         //1
  {setcolor(4);
    rectangle(239,163,402,197);
    rectangle(240,165,400,195);
    rectangle(241,164,401,196);
   setcolor(14);
    outtextxy(250,160, "1.PLAY");
   delay(500);
   setcolor(2);
    rectangle(239,163,402,197);
    rectangle(240,165,400,195);
    rectangle(241,164,401,196);
   setfillstyle(11,3);
    bar(241,165,400,195);
   setcolor(15); settextstyle(8,0,3);
    outtextxy(250,160, "1.PLAY");
    outtextxy(250,161, "1.PLAY");
    outtextxy(249,160, "1.PLAY");
  delay(500);
  // cout<<"1.";
  cleardevice();
  outtextxy(250,200,"GAME");
  }

 else if(keyl==818)    //2
  {setcolor(4);
    rectangle(239,203,402,237);
    rectangle(240,205,400,235);
    rectangle(241,204,401,236);
   setcolor(14);
    outtextxy(250,200, "2.HELP");
   delay(500);
   setcolor(2);
    rectangle(239,203,402,237);
    rectangle(240,205,400,235);
    rectangle(241,204,401,236);
   setfillstyle(11,3);
    bar(241,205,400,235);
   setcolor(15); settextstyle(8,0,3);
    outtextxy(250,200, "2.HELP");
    outtextxy(250,201, "2.HELP");
    outtextxy(249,200, "2.HELP");
   delay(500);
   help_fl();
   }

 else if(keyl==1075)   //3
  {setcolor(4);
    rectangle(239,243,402,277);
    rectangle(240,245,400,275);
    rectangle(241,244,401,276);
   setcolor(14);
    outtextxy(250,240, "3.CREDITS");
   delay(500);
   setcolor(2);
    rectangle(239,243,402,277);
    rectangle(240,245,400,275);
    rectangle(241,244,401,276);
   setfillstyle(11,3);
    bar(241,245,400,275);
   setcolor(15); settextstyle(8,0,3);
    outtextxy(250,240, "3.CREDITS");
    outtextxy(250,241, "3.CREDITS");
    outtextxy(249,240, "3.CREDITS");
   delay(500);
   credits_flst();
   }

 else if(keyl==1332||keyl==283)   //4
  {setcolor(4);
    rectangle(239,283,402,317);
    rectangle(240,285,400,315);
    rectangle(241,284,401,316);
   setcolor(14);
    outtextxy(250,280, "4.QUIT");
   delay(500);
   setcolor(2);
    rectangle(239,283,402,317);
    rectangle(240,285,400,315);
    rectangle(241,284,401,316);
   setfillstyle(11,3);
    bar(241,285,400,315);
   setcolor(15); settextstyle(8,0,3);
    outtextxy(250,280, "4.QUIT");
    outtextxy(250,281, "4.QUIT");
    outtextxy(249,280, "4.QUIT");
   delay(500);
   exit(0);
   }

 else if(keyl!=561||keyl!=818||keyl!=1075||keyl!=1075||keyl!=1332)
  {settextstyle(0,0,1);
    setcolor(15);
    outtextxy(200,460,"Press Either '1', '2', '3' or '4'");
    delay(500);
    setcolor(4);
    outtextxy(200,460,"Press Either '1', '2', '3' or '4'");
    delay(100);
   goto Menu_rep;
  }
}

void hp_text()
{setcolor(6);  settextstyle(8,0,6);
 outtextxy(250,10,"HELP");
 setcolor(9);
 line(200,80,435,80);
 line(200,81,435,81);
// setcolor(14); settextstyle(7,0,5);
// outtextxy(180,100,"Play and Win");
// setcolor(2);  settextstyle(1,0,5);
// outtextxy(130,150,"for more help visit");
 setcolor(15);
 settextstyle(7,0,2);
 outtextxy(130,100,"Objective of the Game comes here");
}
void logo1()
{ //facebook
 setfillstyle(1,1);
 bar(105,235,150,280);
 settextstyle(2,0,5);
 outtextxy(170,250,"www.facebook.com/fahrt_2017");
 settextstyle(3,0,7);
 outtextxy(125,215,"f");
 outtextxy(126,215,"f");
 outtextxy(125,214,"f");
}

void logo2()
{//google plus
 setfillstyle(1,4);
 bar(105,315,150,360);
 settextstyle(2,0,5);
 outtextxy(170,330,"www.plus.google.com/fahrt_2017");
 settextstyle(8,0,4);
 outtextxy(110,305,"g");
 outtextxy(111,305,"g");
 outtextxy(110,304,"g");

 outtextxy(130,310,"+");
 outtextxy(129,309,"+");
 outtextxy(130,309,"+");
}

void menu_fl()
{cleardevice();
 menuscr();
 menu_key();
 getch();
}
void help_fl()
{cleardevice();
 hp_text();
 logo1();
 logo2();
 rights();
 getch();
 menu_fl();
}

void credits_flst()
{cleardevice();
 cre1();
 cre2();
 cre3();
 cre4();
 cre0();
 getch();
 menu_fl();
}
void credits_flnd()
{cleardevice();
 cre1();
 cre2();
 cre3();
 cre4();
 cre0();
}

void dis_fl()
{cleardevice();
 dis();
 rating();
 getch();
}

void logo_fl()
{cleardevice();
 logobk();
 joint();
 logotxt();
 delay(100);
}

void load_fl()
{cleardevice();
 load_bd();
 rights();
 load_text();
 load_bar();
 delay(350);
}

void main()
{clrscr();
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 dis_fl();
 logo_fl();
 load_fl();
 menu_fl();
 closegraph();
}