#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<time.h>
#include<dos.h>
#include<string.h>
#include<stdlib.h>
#include<process.h>
void graph()
{
	int driver, mode;
	driver = DETECT;
	initgraph(&driver, &mode, "c:\\turboc3\\bgi");
}

void placehg(char a,int i)
  { settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
   setcolor(YELLOW);
   int y=300,x=100;
    if (a=='A')
     outtextxy(x+i*50,y,"A");
    else if (a=='B')
     outtextxy(x+i*50,y,"B");
     else if (a=='C')
     outtextxy(x+i*50,y,"C");
     else if (a=='D')
     outtextxy(x+i*50,y,"D");
     else if (a=='E')
     outtextxy(x+i*50,y,"E");
     else if (a=='F')
     outtextxy(x+i*50,y,"F");
     else if (a=='G')
     outtextxy(x+i*50,y,"G");
     else if (a=='H')
     outtextxy(x+i*50,y,"H");
     else if (a=='I')
     outtextxy(x+i*50,y,"I");
     else if (a=='J')
     outtextxy(x+i*50,y,"J");
     else if (a=='K')
     outtextxy(x+i*50,y,"K");
     else if (a=='L')
     outtextxy(x+i*50,y,"L");
     else if (a=='M')
     outtextxy(x+i*50,y,"M");
     else if (a=='N')
     outtextxy(x+i*50,y,"N");
     else if (a=='O')
     outtextxy(x+i*50,y,"O");
     else if (a=='P')
     outtextxy(x+i*50,y,"P");
     else if (a=='Q')
     outtextxy(x+i*50,y,"Q");
     else if (a=='R')
     outtextxy(x+i*50,y,"R");
     else if (a=='S')
     outtextxy(x+i*50,y,"S");
     else if (a=='T')
     outtextxy(x+i*50,y,"T");
     else if (a=='U')
     outtextxy(x+i*50,y,"U");
     else if (a=='V')
     outtextxy(x+i*50,y,"V");
     else if(a=='W')
     outtextxy(x+i*50,y,"W");
     else if(a=='X')
     outtextxy(x+i*50,y,"X");
     else if(a=='Y')
     outtextxy(x+i*50,y,"Y");
     else if(a=='Z')
     outtextxy(x+i*50,y,"Z");
   }
 void chances(int i)
 { setcolor(WHITE);
  line(33,193+i*40,47,207+i*40);
  line(47,193+i*40,33,207+i*40);
  }
void dash(int n)
{ setcolor(WHITE);
  int i,x=90,y=350;
  for(i=0;i<n;i++)
   {
       line(x,y,x+30,y);
       x+=50;
     if(x==560)
      { y+=30;
	x=90;
      }
   }
}
void rect(int i)
{ setcolor(CYAN);
  int j=i/8;
   i=i%8;
   rectangle(400+i*30,100+j*30,420+i*30,120+j*30);
 }
void cut(int i)
{   int j=i/8;
    i=i%8;
    setcolor(YELLOW);
    line(400+i*30,100+j*30,420+i*30,120+j*30);
    line(420+i*30,100+j*30,400+i*30,120+j*30);
 }
void copy(char a, int i)
{ settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
  int j=i/8;
  i=i%8;
  int x=405,y=95;
  setcolor(MAGENTA);
  if (a=='A')
   outtextxy(x+i*30,y+j*30,"A");
    else if (a=='B')
     outtextxy(x+i*30,y+j*30,"B");
     else if (a=='C')
     outtextxy(x+i*30,y+j*30,"C");
     else if (a=='D')
     outtextxy(x+i*30,y+j*30,"D");
     else if (a=='E')
     outtextxy(x+i*30,y+j*30,"E");
     else if (a=='F')
     outtextxy(x+i*30,y+j*30,"F");
     else if (a=='G')
     outtextxy(x+i*30,y+j*30,"G");
     else if (a=='H')
     outtextxy(x+i*30,y+j*30,"H");
     else if (a=='I')
     outtextxy(x+5+i*30,y+j*30,"I");
     else if (a=='J')
     outtextxy(x+i*30,y+j*30,"J");
     else if (a=='K')
     outtextxy(x+i*30,y+j*30,"K");
     else if (a=='L')
     outtextxy(x+i*30,y+j*30,"L");
     else if (a=='M')
     outtextxy(x+i*30,y+j*30,"M");
     else if (a=='N')
     outtextxy(x+i*30,y+j*30,"N");
     else if (a=='O')
     outtextxy(x+i*30,y+j*30,"O");
     else if (a=='P')
     outtextxy(x+i*30,y+j*30,"P");
     else if (a=='Q')
     outtextxy(x+i*30,y+j*30,"Q");
     else if (a=='R')
     outtextxy(x+i*30,y+j*30,"R");
     else if (a=='S')
     outtextxy(x+i*30,y+j*30,"S");
     else if (a=='T')
     outtextxy(x+i*30,y+j*30,"T");
     else if (a=='U')
     outtextxy(x+i*30,y+j*30,"U");
     else if (a=='V')
     outtextxy(x+i*30,y+j*30,"V");
     else if(a=='W')
     outtextxy(x+i*30,y+j*30,"W");
     else if(a=='X')
     outtextxy(x+i*30,y+j*30,"X");
     else if(a=='Y')
     outtextxy(x+i*30,y+j*30,"Y");
     else if(a=='Z')
     outtextxy(x+i*30,y+j*30,"Z");
  }
void thankyou();
void sorry();
void congo();
void hgm(char setnew[],int);
void choices()
{   graph();
      char puz1[5][10]={"APOLOGIZE","FORGOTTEN","AIRPLANES","DAYLIGHT","FIREFLIES"};
      char puz2[5][10]={"ERAGON","DRACULA","INKHEART","DIVERGENT","MOCKINGJAY"};
      char puz3[5][10]={"SPEED","FROZEN","TWISTER","MEGAMIND","INCEPTION"};
	settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 6);
	setcolor(GREEN);
	moveto(150, 50);
	outtext("MAIN MENU");
	settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 2);
	setcolor(RED);
	moveto(150, 150);
	outtext("<1> SONGS TITLES");
	moveto(150, 200);
	outtext("<2> BOOK TITLES");
	moveto(150,250);
	outtext("<3> MOVIES TITLES");
	settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 4);
	setcolor(CYAN);
	moveto(160, 350);
	outtext("ENTER YOUR CHOICE");
	int choice;
	gotoxy(25, 25);
	cin >> choice;
	int r=rand()%5;
	switch (choice)
	{
	case 1: {
		  hgm(puz1[r],9);

		  break;
		}
     case 2: { hgm(puz2[r],6+r);
		  break;
		}
	 case 3: { hgm(puz3[r],5+r);
		   break;
		  }

	default: {  settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 6);
		setcolor(MAGENTA);
		moveto(160, 550);
		outtext("WRONG CHOICE!!!");
		}

	}
	closegraph();
	getch();
 }
void hgm(char setnew[],int s)
{
  graph();
  char set[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
  char ch,ch1;
  char pattern[10]={'\0'},solve[10];
  int miss=0,flag=0,flg=0,c;
  int i,a=1;
   dash(s);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
  outtextxy(10,150,"CHANCES");
  for(i=0;i<7;i++)
  { setcolor(BLUE);
    circle(40,200+i*40,15);
  }
  for(i=0;i<26;i++)
   { copy(set[i],i);
     rect(i);
   }
  do
   { flag=0,c=0;
     setcolor(GREEN);
     settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
     outtextxy(10,10,"GUESS A CHARACTER OR SOLVE THE PUZZLE?");
     outtextxy(10,25,"ENTER CHOICE(G/S):");
     gotoxy(25,3);
     cin>>ch1;
     if (ch1=='S')
      { setcolor(RED);
	outtextxy(10,45,"SOLVE:");
	gotoxy(12,4);
	for(i=0;i<s;i++)
	 cin>>solve[i];
	for(i=0;i<s;i++)
	 { if(setnew[i]!=solve[i])
	     flg=1;
	  }
	 if (flg==0)
	  { outtextxy(10,60,"YES, THAT'S RIGHT!");
	    delay(200);
	    for(i=0;i<s;i++)
	     { placehg(setnew[i],i);
	       delay(200);
	     }
	    closegraph();
	    graph();
	    congo();
	    break;
	  }
	 else
	 { outtextxy(10,60,"SORRY, THAT IS INCORRECT ;(");
	   delay(300);
	   outtextxy(10,75,"YOUR CHANCES ARE UP!");
	   delay(500);
	   setcolor(BLACK);
	   outtextxy(10,60,"SORRY, THAT IS INCORRECT ;(");
	   outtextxy(10,75,"YOUR CHANCES ARE UP!");
	   for(i=0;i<s;i++)
	      {placehg(setnew[i],i);
	       delay(300);
	      }
	   miss=7;
	   a=0;
	 }
       }
      else if(ch1=='G')
      { setcolor(RED);
	outtextxy(10,45,"ENTER A CHARACTER:");
	gotoxy(26,4);
	cin>>ch;


	for(i=0;i<26;i++)
	  if(ch==set[i])
	   { set[i]='\0';
	     cut(i);
	   }
	  for(i=0;i<s;i++)
	   if(ch==setnew[i])
	    {
	      pattern[i]=ch;
	      flag=1;
	    }

	  if(!flag)
	   { outtextxy(10,90,"WRONG GUESS!");
	     miss++;
	     chances(miss-1);
	     delay(300);
	     setcolor(BLACK);
	     outtextxy(10,45,"ENTER A CHARACTER:");
	     outtextxy(10,90,"WRONG GUESS!");
	     delay(500);
	   }
	  else
	    { outtextxy(10,90,"GOOD GUESS ;)");
	      delay(300);
	      setcolor(BLACK);
	      outtextxy(10,45,"ENTER A CHARACTER:");
	      outtextxy(10,90,"GOOD GUESS ;)");
	      for(i=0;i<s;i++)
	       if(ch==setnew[i])
		{
		 placehg(ch,i);
		}
	      }
	 for(i=0;i<s;i++)
	   if(pattern[i]!='\0')
	     placehg(pattern[i],i);
	 if(miss>=7)
	   { setcolor(BLUE);
	     outtextxy(10,100,"CHANCES ARE UP ;(");
	      delay(200);
	      for(i=0;i<s;i++)
	      {placehg(setnew[i],i);
	       delay(200);
	      }
	       a=0;
	    }
	 for(i=0;i<s;i++)
	   if(pattern[i]!='\0')
	    c++;
	 if(c==s)
	  { setcolor(BLUE);
	    outtextxy(10,100,"YOU WON!");
	    delay(200);
	    a=0;
	    closegraph();
	    congo();
	    closegraph();
	    graph();
	    thankyou();
	    closegraph();
	  }


      }
      setcolor(BLACK);
      outtextxy(10,10,"GUESS A CHARACTER OR SOLVE THE PUZZLE?");
     outtextxy(10,25,"ENTER CHOICE(G/S):");
     gotoxy(25,3);
     cout<<" ";
     gotoxy(26,4);
     cout<<" ";
     delay(1000);

   } while(a==1);
   closegraph();
    if(miss>=7)
    sorry();

   graph();
   thankyou();
  closegraph();
  getch();
 }
void thankyou();
void load();
void mainmenu(int);
void instructcb();
void startcb();

void game2()
{ load();
  startcb();
  mainmenu(2);
}
void blinkc(int i)
{  for(int j=0;j<=3;j++)
    {   setcolor(YELLOW);
	rectangle(167+i*50, 230, 207+i*50, 300);
	delay(200);
	setcolor(BLACK);
	rectangle(167+i*50, 230, 207+i*50, 300);
	delay(200);
	setcolor(WHITE);
	rectangle(167+i*50,230,207+i*50,300);
	delay(200);
     }
  }
void blink(int);
void startcb()
{     graph();
       setbkcolor(BLACK);

	setlinestyle(SOLID_LINE, 6, THICK_WIDTH);
	rectangle(167, 230, 207, 300);
	rectangle(217, 230, 257, 300);
	rectangle(267, 230, 307, 300);
	rectangle(317, 230, 357, 300);
	settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 6);
	setcolor(MAGENTA);
	outtextxy(10, 100, "COWS & BULLS");
	settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 6);
	blinkc(0);
	outtextxy(177,240,"E");
	blinkc(1);
	outtextxy(227, 240, "A");
	blinkc(2);
	outtextxy(277,240,"F");
	blinkc(3);
	outtextxy(327, 240, "D");


	delay(2000);
	clrscr();
}
void place(char a,int i)
{  setcolor(YELLOW);
   settextstyle(SANS_SERIF_FONT,HORIZ_DIR,6);
      if (a=='A')
	outtextxy(277+i*50,240,"A");
      else if (a=='B')
	outtextxy(277+i*50,240,"B");
      else if (a=='C')
	outtextxy(277+i*50,240,"C");
      else if (a=='D')
	outtextxy(277+i*50,240,"D");
      else if (a=='E')
	outtextxy(277+i*50,240,"E");
      else if (a=='F')
	outtextxy(277+i*50,240,"F");


   }
void blink(int i)
{  int j;
     for(j=0;j<3;j++)
     { setcolor(YELLOW);
	line(117+i*50, 200, 157+i*50, 200);
	delay(200);
	setcolor(BLACK);
	line(117+i*50, 200, 157+i*50, 200);
	delay(200);
	setcolor(WHITE);
	line(117+i*50,200,157+i*50,200);
	delay(200);
     }
 }
 void congo()
 {graph();
	 int i;
	 setcolor(RED);
	 settextstyle(DEFAULT_FONT, HORIZ_DIR, 4);
	    for(i=0;i<=5;i++)
			{ outtextxy(100,100, "CONGRATULATIONS!!!");
			  outtextxy(150,150, "YOU WON :)");
			  delay(300);
			  setcolor(BLACK);
			  outtextxy(100,100, "CONGRATULATIONS!!!");
			  outtextxy(150,150, "YOU WON :)");
			  delay(300);
			  int x=(rand()%20)+1;
			  setcolor(x);
		     }
	delay(1000);
	closegraph();

  }
  void sorry()
  { graph();
	 int i;
	  setcolor(RED);
	  settextstyle(DEFAULT_FONT, HORIZ_DIR, 4 );
	   for (i=0;i<=5;i++)
			{ outtextxy(60,100, "SORRY, YOU LOST ;(");
			  outtextxy(150,150, "BETTER LUCK ");
			  outtextxy(180,200,"NEXT TIME!!!");
			  delay(700);
			  setcolor(BLACK);
			  outtextxy(70,100, "SORRY, YOU LOST ;(");
			  outtextxy(150,150, "BETTER LUCK ");
			  outtextxy(180,200,"NEXT TIME!!!");
			  delay(700);
			  int x=(rand()%20)+1;
			  setcolor(x);
			}
	  delay(1000);
	 closegraph();
}
void fill(int i)
{ setcolor(RED);
  line(552,112+35*i,568,127+35*i);
  line(568,112+35*i,552,127+35*i);
  }
void cb()
{
  graph();
  char A[6]={'A','B','C','D','E','F'};
  char p[4]={'\0'};
  char ep[4];
  int j1[6]={0};
  int i,j;
  for(i=0;i<4;i++)
   { while(1)
     { int j=rand()%6;
       if (j1[j]==0)
	{ p[i]=A[j];
	  j1[j]=1;
	  break;
	}
      }
    }
   int c=0;
       setcolor(YELLOW);
       setlinestyle(SOLID_LINE, 6, THICK_WIDTH);
	rectangle(267, 230, 307, 300);
	rectangle(317, 230, 357, 300);
	rectangle(367, 230, 407, 300);
	rectangle(417, 230, 457, 300);
	setcolor(CYAN);
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
	outtextxy(450,75,"CHANCES REMAINING");
	setcolor(GREEN);
	for(j=120;j<300;j+=35)
	 circle(560,j,15);
   do
   { c++;

     do
     { int f=0;
       settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
       setcolor(CYAN);
       outtextxy(10,10+(c-1)*65,"ENTER YOUR CODE:");
       gotoxy(25,2+(c-1)*4);
       for(i=0;i<4;i++)
	cin>>ep[i];
       for(i=0;i<4;i++)
	if(ep[i]!='A' && ep[i]!='B' && ep[i]!='C' && ep[i]!='D' && ep[i]!='E' && ep[i]!='F')
	{ f=1;
	  break;
	}
       if (f==1)
	{ outtextxy(10,40+(c-1)*65,"Invalid Code! Try Again! ");
	  delay(500);
	  setcolor(BLACK);
	  outtextxy(10,40+(c-1)*65,"Invalid Code! Try Again! ");
	  outtextxy(10,10+(c-1)*65,"ENTER YOUR CODE:");
	  delay(500);
	}
	else
	 break;
       }while(1);
	fill(c-1);
     int y=0,b=0,yellow[4]={0};
     for(i=0;i<4;i++)
      { if(ep[i]==p[i])
	{
	  y++;
	  yellow[i]=1;
	}

      }
     for(i=0;i<4;i++)
     { if (yellow[i]!=1)
	for(int j=0;j<4;j++)
	 { if(ep[j]==p[i])
	     b++;
	 }
     }
     setcolor(RED);
     outtextxy(10,28+(c-1)*65,"NUMBER OF ");
     setcolor(YELLOW);
     outtextxy(110,28+(c-1)*65,"YELLOW ");
     setcolor(RED);
     outtextxy(185,28+(c-1)*65,"DOTS:");
     gotoxy(32,(c-1)*4+3);
     cout<<y;
     outtextxy(10,48+(c-1)*65,"NUMBER OF ");
     setcolor(GREEN);
     outtextxy(110,48+(c-1)*65,"GREEN ");
     setcolor(RED);
     outtextxy(175,48+(c-1)*65,"DOTS:");
     gotoxy(32,4+4*(c-1));
     cout<<b<<"\n";
     settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 4);
     if (y==4 || c==6)
     { if (y==4)
	{ delay(100);
	  for(i=0;i<4;i++)
	   { place(ep[i],i);
	     delay(500);
	   }
	   closegraph();
	  congo();
	}
       else
	 { setcolor(CYAN);
	   settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
	   outtextxy(10,395,"YOUR CHANCES ARE UP!!");
	   delay(100);
	   for(i=0;i<4;i++)
	   { place(p[i],i);
	     delay(500);
	   }
	   closegraph();
	  sorry();
	  }
      break;
     }
   }while(1);
  thankyou();

}
void game1();
void instructtictac();



void display(int a, char b)
{
	setcolor(CYAN);
	settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 6);
	if (a == 1)
	{
		if (b == 'X')
			outtextxy(205, 125, "X");
		else
			outtextxy(205, 125, "O");
	}
	if (a == 2)
	{
		if (b == 'X')
			outtextxy(305, 125, "X");
		else
			outtextxy(305, 125, "O");
	}
	if (a == 3)
	{
		if (b == 'X')
			outtextxy(405, 125, "X");
		else
			outtextxy(405, 125, "O");
	}
	if (a == 4)
	{
		if (b == 'X')
			outtextxy(205, 225, "X");
		else
			outtextxy(205, 225, "O");
	}
	if (a == 5)
	{
		if (b == 'X')
			outtextxy(305, 225, "X");
		else
			outtextxy(305, 225, "O");
	}
	if (a == 6)
	{
		if (b == 'X')
			outtextxy(405, 225, "X");
		else
			outtextxy(405, 225, "O");
	}
	if (a == 7)
	{
		if (b == 'X')
			outtextxy(205, 325, "X");
		else
			outtextxy(205, 325, "O");
	}
	if (a == 8)
	{
		if (b == 'X')
			outtextxy(305, 325, "X");
		else
			outtextxy(305, 325, "O");
	}
	if (a == 9)
	{
		if (b == 'X')
			outtextxy(405, 325, "X");
		else
			outtextxy(405, 325, "O");
	}
}
int check(char p[])
{
	int flag = 0,i,j;
	setcolor(RED);
	setlinestyle(SOLID_LINE, 6, THICK_WIDTH);
	if (p[1] == p[2] && p[2] == p[3])
	{
		if (p[1] == 'X')
			flag = 1;
		else if (p[1] == 'O')
			flag = 2;
	       if(flag==1 || flag==2)
	       for (i=215;i<=415;i++)
	       { line(i,150,i+1,150);
		 delay(5);
	       }
	}
	else if (p[4] == p[5] && p[5] == p[6])
	{
		if (p[4] == 'X')
			flag = 1;
		else if (p[4] == 'O')
			flag = 2;
		if(flag==1 || flag==2)
		for(i=215;i<=415;i++)
		{ line(i,245,i+1,245);
		  delay(5);
		}
	}

	else if (p[7] == p[8] && p[8] == p[9])
	{
		if (p[7] == 'X')
			flag = 1;
		else if (p[7] == 'O')
			flag = 2;
		if(flag==1 || flag==2)
		for(i=215;i<=415;i++)
		{ line(i,355,i+1,355);
		  delay(5);
		}
	}
	else if (p[1] == p[4] && p[4] == p[7])
	{
		if (p[1] == 'X')
			flag = 1;
		else if (p[1] == 'O')
			flag = 2;
		if(flag==1 || flag==2)
		for(j=145;j<355;j++)
		{ line(215,j,215,j+1);
		  delay(5);
		}

	}
	else if (p[2] == p[5] && p[5] == p[8])
	{
		if (p[2] == 'X')
			flag = 1;
		else if (p[2] == 'O')
			flag = 2;
		if(flag==1 ||flag==2)
		for(j=145;j<355;j++)
		{ line(320,j,320,j+1);
		  delay(5);
		}
	}
	else if (p[3] == p[6] && p[6] == p[9])
	{
		if (p[3] == 'X')
			flag = 1;
		else if (p[3] == 'O')
			flag = 2;
		if(flag==1 || flag==2)
		for(j=145;j<355;j++)
		 { line(415,j,415,j+1);
		   delay(5);
		 }
	}

	else if (p[1] == p[5] && p[5] == p[9])
	{

		if (p[1] == 'X')
			flag = 1;
		else if (p[1] == 'O')
			flag = 2;
		if(flag==1 || flag==2)
		for(i=210,j=145;i<=410,j<355;i++,j++)
		{ line(i,j,i+1,j+1);
		  delay(5);
		}
	}
	else if (p[3] == p[5] && p[5] == p[7])
	{
		if (p[3] == 'X')
			flag = 1;
		else if (p[3] == 'O')
			flag = 2;
		if(flag==1 || flag==2)
		for(i=425,j=145;i>=225,j<355;i--,j++)
		{ line(i,j,i-1,j+1);
		  delay(5);
		}
	}
	if (flag != 0)
	{       closegraph();
		graph();
		settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 6);
		if (flag == 1)
		      {	for(i=0;i<=5;i++)
			{ outtextxy(100,100, "CONGRATULATIONS!!!");
			  outtextxy(150,150, "YOU WON :)");
			  delay(300);
			  setcolor(BLACK);
			  outtextxy(100,100, "CONGRATULATIONS!!!");
			  outtextxy(150,150, "YOU WON :)");
			  delay(300);
			  int x=(rand()%20)+1;
			  setcolor(x);
			}
			delay(1000);
		      }
		else
		      {	for(i=0;i<=5;i++)
			{ outtextxy(100,100, "SORRY, YOU LOST ;(");
			  outtextxy(150,150, "BETTER LUCK ");
			  outtextxy(180,200,"NEXT TIME!!!");
			  delay(300);
			  setcolor(BLACK);
			  outtextxy(70,100, "SORRY, YOU LOST ;(");
			  outtextxy(150,150, "BETTER LUCK ");
			  outtextxy(180,200,"NEXT TIME!!!");
			  delay(300);
			  int x=(rand()%20)+1;
			  setcolor(x);
			}
		   }
		delay(1000);
	}

	closegraph();
	if (flag == 0)
		return 0;
	return 1;

}
void tictac();
void menu();
void print(int i)
{ setcolor(MAGENTA);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
  if (i==0)
   outtextxy(170,150,"T");
  else if(i==1)
   outtextxy(200,150,"O");
  else if(i==2)
   outtextxy(230,150," ");
   else if(i==3)
    outtextxy(260,150,"T");
   else if(i==4)
    outtextxy(290,150,"H");
   else if(i==5)
    outtextxy(320,150,"E");
   else if(i==6)
    outtextxy(350,150," ");
   else if(i==7)
    outtextxy(230,250,"W");
   else if(i==8)
    outtextxy(260,250,"O");
   else if(i==9)
    outtextxy(290,250,"R");
   else if(i==10)
    outtextxy(320,250,"L");
   else if(i==11)
    outtextxy(350,250,"D");
    else if(i==12)
     outtextxy(380,250," ");
    else if(i==13)
     outtextxy(410,250,"O");
    else if(i==14)
     outtextxy(440,250,"F");
    else if(i==15)
     outtextxy(470,250," ");
    else if(i==16)
     outtextxy(290,350,"F");
     else if(i==17)
     outtextxy(320,350,"U");
     else if(i==18)
     outtextxy(350,350,"N");
     else if(i==19)
      outtextxy(380,350," ");
     else if(i==20)
      outtextxy(410,350,"&");
     else if(i==21)
     outtextxy(440,350," ");
     else if(i==22)
     outtextxy(470,350,"G");
     else if(i==23)
      outtextxy(500,350,"A");
     else if(i==24)
      outtextxy(530,350,"M");
      else if(i==25)
      outtextxy(560,350,"E");
     else
     outtextxy(590,350,"S");

   }
void starthgm()
{  graph();
       setbkcolor(BLACK);
	setlinestyle(SOLID_LINE, 6, THICK_WIDTH);
	setcolor(CYAN);
	line(117,200,157,200);
	line(167, 200, 207, 200);
	line(217, 200, 257, 200);
	line(267, 200, 307, 200);
	line(317, 200, 357, 200);
	line(367,200,407,200);
	line(417,200,457,200);
	settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 6);
	setcolor(MAGENTA);
	blink(0);
	outtextxy(127,140,"H");
	blink(1);
	outtextxy(177,140,"A");
	blink(2);
	outtextxy(227, 140, "N");
	blink(3);
	outtextxy(277,140,"G");
	blink(4);
	outtextxy(327, 140, "M");
	blink(5);
	outtextxy(377,140,"A");
	blink(6);
	outtextxy(427,140,"N");
	line(530,200,530,400);
	line(510,400,550,400);
	line(530,200,480,230);
	line(480,230,480,260);
	circle(480,280,20);
	line(480,300,480,340);
	line(480,340,500,360);
	line(480,340,460,360);
	line(480,320,460,310);
	line(480,320,500,310);
	delay(2000);
	clrscr();
   }
void game3()
{ load();
  starthgm();
  mainmenu(3);
 }

void main()
{       int i,j;
	graph();
	settextstyle(GOTHIC_FONT, VERT_DIR, 6);
	setcolor(WHITE);
	outtextxy(35, 100, "WELCOME!");
	delay(1900);
	for(i=0;i<=26;i++)
	  { print(i);
	    delay(250);
	   }
	menu();
	closegraph();
	getch();
	}
      void menu()
      {	graph();
	settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 6);
	setcolor(GREEN);
	moveto(150, 50);
	outtext("MAIN MENU");
	settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 2);
	setcolor(RED);
	moveto(150, 150);
	outtext("<1> TIC TAC TOE");
	moveto(150, 200);
	outtext("<2> COWS & BULLS");
	moveto(150,250);
	outtext("<3> HANGMAN");
	moveto(150, 300);
	outtext("<4> EXIT");
	settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 4);
	setcolor(CYAN);
	moveto(160, 350);
	outtext("ENTER YOUR CHOICE");
	int choice;
	gotoxy(25, 25);
	cin >> choice;
	graph();
	switch (choice)
	{
	case 1: {
		  game1();
		  break;
		}
	case 2: { game2();
		  break;
		}
	 case 3: { game3();
		   break;
		  }

	case 4: {  closegraph();
		   graph();
		  settextstyle(DEFAULT_FONT,VERT_DIR,5);
		  setcolor(GREEN);
		  outtextxy(35,100,"THANK YOU!!");
		  delay(1000);
		  closegraph();
		  exit(0);
		 }
	default: {  settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 6);
		setcolor(MAGENTA);
		moveto(160, 550);
		outtext("WRONG CHOICE!!!");
		}
	}
	closegraph();
	getch();
  }
void starttictac();
  void game1()
  { load();
    starttictac();
    mainmenu(1);

   }
   void instructhgm();
    void mainmenu(int ch)
    { 	clrscr();
	setbkcolor(BLACK);

	setcolor(RED);

	graph();
	settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 6);
	setcolor(GREEN);
	moveto(150, 50);
	outtext("MAIN MENU");
	settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 2);
	setcolor(RED);
	moveto(150, 150);
	outtext("<1> NEW GAME");
	moveto(150, 250);
	outtext("<2> INSTRUCTIONS");
	settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 4);
	setcolor(CYAN);
	moveto(160, 350);
	outtext("ENTER YOUR CHOICE");
	int choice;
	gotoxy(25, 25);
	cin >> choice;
	graph();
	switch (choice)
	{
	case 1: { if (ch==1)
		   tictac();
		  else if(ch==2)
		   cb();
		   else
		    choices();
		  break;
		}
	case 2: { closegraph();
		  if (ch==1)
		   instructtictac();
		  else if(ch==2)
		   instructcb();
		  else
		   instructhgm();
		   break;

		}
	case 3: { graph();
		  outtextxy(200,50,"THANK YOU!!");
		  exit(0);
		 }
	default: {  settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 6);
		setcolor(MAGENTA);
		moveto(160, 550);
		outtext("WRONG CHOICE!!!");
		}
	}
	closegraph();
	getch();
}
void load()
{clrscr();
int i;
	setbkcolor(BLACK);
	graph();
	settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
	outtextxy(75,50,"YOUR GAME IS LOADING...");
	for(i=150;i<=450;i++)
	   { setcolor(WHITE);
	     rectangle(150,200,i,250);
	     delay(10);
	    }
	 delay(100);
	 closegraph();
}
void pos(int c)
{ int x=150,y=30;
 if(c==1)
   outtextxy(x,y,"1");
   else if(c==2)
   outtextxy(x,y,"2");
   else if(c==3)
   outtextxy(x,y,"3");
   else if(c==4)
   outtextxy(x,y,"4");
   else if(c==5)
   outtextxy(x,y,"5");
   else if(c==6)
   outtextxy(x,y,"6");
   else if(c==7)
   outtextxy(x,y,"7");
   else if(c==8)
   outtextxy(x,y,"8");
   else if(c==9)
   outtextxy(x,y,"9");
   }

void tictac()
{
	graph();
	setbkcolor(BLACK);
	setcolor(RED);
	setlinestyle(SOLID_LINE, 6, THICK_WIDTH);
	line(167, 200, 467, 200);
	line(167, 300, 467, 300);
	line(267, 100, 267, 400);
	line(367, 100, 367, 400);
	settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 2);
	outtextxy(235,170,"(1)");
	outtextxy(235,270,"(4)");
	outtextxy(235,370,"(7)");
	outtextxy(335,170,"(2)");
	outtextxy(335,270,"(5)");
	outtextxy(335,370,"(8)");
	outtextxy(435,170,"(3)");
	outtextxy(435,270,"(6)");
	outtextxy(435,370,"(9)");
	char p[10]={'\0'};
	int s = 0,s1=1;
	int c,ch1;

	for (int i = 0; i<5; i++)
	{   setcolor(CYAN);
	   settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
	   outtextxy(10,10,"ENTER POSITION OF X: ");
	    int ch, ch1;
	    do
	     {  gotoxy(27,2);
		cin >> ch;
		if (p[ch]!='X' && p[ch]!='O')
		  { p[ch] = 'X';
		    display(ch, 'X');
		    break;
		  }
		else
		  { outtextxy(10,15,"Enter again!");
		    delay(200);
		    setcolor(BLACK);
		    outtextxy(10,15,"Enter again!");
		   }
	      }while(s1);
	      if (i>1)
	       {  c = check(p);
		  if (c == 1)
		   {   s = 1;
		       break;
		   }
	       }
	      if (i == 4)
		break;
	      int j = 1;
	      do
		{ ch1 = 1 + (rand() % 9);
		  if (p[ch1] != 'O'&& p[ch1] != 'X')
			break;
		} while (j);
		delay(1700);
		 setcolor(CYAN);
	   settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
		outtextxy(10,30, "POSITION OF O:");
		setcolor(GREEN);
		pos(ch1);
		p[ch1] = 'O';
		display(ch1, 'O');
		if (i>1)
		 {  c = check(p);
		    if (c == 1)
		     {  s = 1;
			break;
		     }
		 }
	setcolor(BLACK);
	outtextxy(10,30, "POSITION OF O:");
	pos(ch1);
	outtextxy(10,10,"ENTER POSITION OF X: ");
	gotoxy(27,2);
	cin>>" ";
	delay(800);

	}

	if (s == 0)
	{       graph();
		settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 6);
		for(i=0;i<=5;i++)
			{ outtextxy(150,100, "DRAW MATCH!!!");
			  delay(300);
			  setcolor(BLACK);
			  outtextxy(150,100, "DRAW MATCH!!!");
			  delay(300);
			  int x=(rand()%20)+1;
			  setcolor(x);
			}
		delay(1900);

	}
	thankyou();

}
void thankyou()
{  graph();
   int i;
	settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 6);
	setcolor(YELLOW);
	int j;
	for(i=80,j=100;i<=250;i++)
	{ outtextxy(i,j,"THANK YOU");
	  outtextxy(i,j+50,"FOR PLAYING!! ");
	  delay(8);
	  setcolor(BLACK);
	  outtextxy(i,j,"THANK YOU");
	  outtextxy(i,j+50,"FOR PLAYING!! ");
	  setcolor(YELLOW);
	}
	delay(1000);
	closegraph();
	menu();
}
void instructtictac()
{
	graph();
	settextstyle(GOTHIC_FONT, VERT_DIR, 6);
	setcolor(WHITE);
	outtextxy(35, 40, "INSTRUCTIONS");
	settextstyle(DEFAULT_FONT, HORIZ_DIR, 5);
	setcolor(GREEN);
	outtextxy(150, 40, "HOW TO PLAY");
	settextstyle(TRIPLEX_FONT, HORIZ_DIR, 2);
	setcolor(CYAN);

	outtextxy(130, 100, "Enter a position (1-9) where you would like ");
	outtextxy(130, 125, "to place a 'X'. Now the computer places ");
	outtextxy(130, 150, "an 'O'. The game goes on with the placing ");
	outtextxy(130, 175, "of an X or O alternately.");
	outtextxy(130, 200, "If either player gets 3 characters in a");
	outtextxy(130, 225, " a row, column or diagonal the player");
	outtextxy(130, 250, "is declared the winner.");
	outtextxy(130, 270, "BEST OF LUCK!!");
	delay(3000);
	delay(3500);

	clrscr();
	tictac();
	getch();

}
void instructcb()
{
	graph();
	settextstyle(GOTHIC_FONT, VERT_DIR, 6);
	setcolor(WHITE);
	outtextxy(35, 40, "INSTRUCTIONS");
	settextstyle(DEFAULT_FONT, HORIZ_DIR, 5);
	setcolor(GREEN);
	outtextxy(150, 40, "HOW TO PLAY");
	settextstyle(TRIPLEX_FONT, HORIZ_DIR, 2);
	setcolor(CYAN);

	outtextxy(130, 100, "Enter a code of 4 letters (A-F). The computer ");
	outtextxy(130, 125, "has chosen a randomized code of 4 characters. ");
	outtextxy(130, 150, "The computer counts the number of yellow dots which");
	outtextxy(130, 175, "represent the number of characters placed in the");
	outtextxy(130, 200, "correct position and the number of green dots  ");
	outtextxy(130, 225, "that represent the number of characters present in");
	outtextxy(130, 250, "the code, but not placed at the right position. A");
	outtextxy(130, 275, "player should guess the correct code in 6 chances. ");
	outtextxy(130, 300, "BEST OF LUCK!!");
	delay(3000);
	delay(3500);

	clrscr();
	cb();
	getch();

}
void starttictac()
{       graph();
	setlinestyle(SOLID_LINE, 6, THICK_WIDTH);
	line(167, 200, 467, 200);
	line(167, 300, 467, 300);
	line(267, 100, 267, 400);
	line(367, 100, 367, 400);
	settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 2);
	outtextxy(217, 150, "X");
	outtextxy(317, 250, "O");
	outtextxy(217, 350, "X");
	outtextxy(417, 250, "O");
	delay(200);
	settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 6);
	setcolor(MAGENTA);
	outtextxy(10, 100, "TIC TAC TOE");

	delay(2000);
}
void instructhgm()
{  graph();
	settextstyle(GOTHIC_FONT, VERT_DIR, 6);
	setcolor(WHITE);
	outtextxy(35, 40, "INSTRUCTIONS");
	settextstyle(DEFAULT_FONT, HORIZ_DIR, 5);
	setcolor(GREEN);
	outtextxy(150, 40, "HOW TO PLAY");
	settextstyle(TRIPLEX_FONT, HORIZ_DIR, 2);
	setcolor(CYAN);

	outtextxy(130, 100, "Enter a letter (A-Z). The computer has chosen");
	outtextxy(130, 125, "a set of words as per the category. If the  ");
	outtextxy(130, 150, "letter is present in the string,then its ");
	outtextxy(130, 175, "position is displayed on the screen. If the ");
	outtextxy(130, 200, "character is not presented it is marked as an  ");
	outtextxy(130, 225, "error. There is room for upto 7 errors, but ");
	outtextxy(130, 250, "only one chance to solve the puzzle.");
	outtextxy(130, 275, "BEST OF LUCK!!");
	delay(3000);
	delay(3500);

	closegraph();
	choices();
	getch();
  }