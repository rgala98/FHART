#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>




class d
{   public:

	void slow_print(int dt)
	{
		char st[100] = "Stryker has taken over our kingdom.";
		int i=0,size=0;
		while(size==0)
		{
			if(st[i] == '.')
				size = (i+1);
			i++;
		}
		for (i = 0; i<=size; i++)
		{
			cout << st[i];
			delay(dt);
		}
	}
};



void main()
{
	clrscr();
	d ob;
	ob.slow_print(25);
	getch();
}