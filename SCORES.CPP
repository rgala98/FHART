struct player
{ char name[20];
  int sc;
}player;
fstream fin,fout;





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
