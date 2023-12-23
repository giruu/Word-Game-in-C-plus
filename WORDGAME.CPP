/**
 * This code snippet is a C++ program that implements a word game. It includes a class called 'mode' with various member functions that handle different aspects of the game, such as single player mode, multiplayer mode, help mode, and about mode. The program allows players to enter words and checks if they are correct based on a dictionary file. It also keeps track of scores and provides options to go back to the main menu or quit the game.
 *
 * Example Usage:
 * #include<iostream.h>
 * #include<conio.h>
 * #include<string.h>
 * #include<stdlib.h>
 * #include<stdio.h>
 * #include<iomanip.h>
 * #include<fstream.h>
 *
 * // Code snippet goes here
 *
 * void main()
 * {
 *     clrscr();
 *     mode a;
 *     a.menu();
 *     getch();
 * }
 *
 * Code Analysis:
 * Inputs:
 * - User input for various options in the game, such as choosing single player or multiplayer mode, entering words, and selecting options from the menu.
 * - The program reads data from a dictionary file called 'dic.txt'.
 *
 * Flow:
 * 1. The program starts by displaying a menu with different options for the game.
 * 2. The user can choose between single player mode, multiplayer mode, help mode, about mode, or quit the game.
 * 3. In single player mode, the user can play the game by entering words and checking if they are correct based on the dictionary file.
 * 4. In multiplayer mode, the user can choose between time battle or number of players. In time battle, the user has 10 chances to enter words. In number of players mode, the user can enter words and take turns with another player.
 * 5. The program keeps track of scores and provides options to go back to the main menu or quit the game.
 *
 * Outputs:
 * - The program displays various messages and prompts to guide the user through the game.
 * - It also displays the correct word and the points earned by the player.
 * - The program can write user suggestions to a file called 'suggest.txt'.
 * - In multiplayer mode, the program indicates which player's turn it is.
 */
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<iomanip.h>
#include<fstream.h>
int add=0;
ofstream file("suggest.txt");
char str[100];
class mode
{
 public:
 int m;
 int i;
 int i1;
 char ch[20];
 int choice;
 char get[30];
 void singleplr();
 void multiplr();
 void help();
 void about();
 void quit();
 void menu();
 void option();
 void color();
 void match();
 void store();
 void match2();
 void match3();
};

void mode::store()
{
ofstream file("suggest.txt");
cout<<"ENTER";
cin>>str;
file<<str;
file.close();
cout<<"\n";

}

void mode::match()
{
 clrscr();
 ifstream file("dic.txt");
char word[20];
char data[100];
int cs;
int chances;
double scor;
 textcolor(128+19);
 cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";cprintf("WELCOME");cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
cout<<"............................................................................................\n";
cout<<"BEFORE YOU START THE GAME:-\n";
cout<<"1.after entering the word if \"ENTER WORDS appears means you have written wrong spelling\n";
cout<<"2.if you have entered wrong word then \"CORRECT statement will not be displayed\n";
cout<<"...............................................................................................\n";
cout<<"ENTER THE CHANCES\n";
cin>>chances;
for(int a=1;a<=chances;a++)
{
ifstream file("dic.txt");
cout<<"----->>>>>--------------------->>>>>----------------------->>>>>-------------\n";
cout<<"\t\t\t\tENTER WORD \t\n";
cin>>word;
while(!file.eof())
{
file.getline(data,100);
if((strcmp(data,word)==0))
{
cout<<"~~~~~~~~~~~\n";
textcolor(128+14);
cprintf("CORRECT");
cs=strlen(word);
cs=cs-1;
scor++;
textcolor(YELLOW);
cout<<"\n";
cprintf("POINTS");
cout<<"\n";
cout<<scor;
cout<<"\n";
cout<<"\nNOW WRITE WORD FROM:-\n";
cout<<word[cs]<<"\n";

}
}
}

 color();
 textcolor(WHITE);
 option();
}

void mode::match2()
{
 clrscr();
 ifstream file("dic.txt");
char word[20];
char data[100];
int cs;
int chances=10;
double score;
 textcolor(128+19);
 cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";cprintf("WELCOME");cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
cout<<"............................................................................................\n";
cout<<"BEFORE YOU START THE GAME:-\n";
cout<<"1.after entering the word if \"ENTER WORDS appears means you have written wrong spelling\n";
cout<<"2.if you have entered wrong word then \"CORRECT statement will not be displayed\n";
cout<<"...............................................................................................\n";
cout<<"ENTER THE CHANCES\n";
for(int a=1;a<=chances;a++)
{
ifstream file("dic.txt");
cout<<"----->>>>>--------------------->>>>>----------------------->>>>>-------------\n";
cout<<"\t\t\t\tENTER WORD \t\n";
cin>>word;
while(!file.eof())
{
file.getline(data,100);
if((strcmp(data,word)==0))
{
cout<<"~~~~~~~~~~~\n";
textcolor(128+14);
cprintf("CORRECT");
cs=strlen(word);
cs=cs-1;
score++;
textcolor(YELLOW);
cout<<"\n";
cprintf("POINTS");
cout<<"\n";
cout<<score;
cout<<"\n";
cout<<"\nNOW WRITE WORD FROM:-\n";
cout<<word[cs]<<"\n";
}
}
}

 color();
 textcolor(WHITE);
 option();
}

void mode::match3()
{
 clrscr();
 ifstream file("dic.txt");
char word[20];
char data[100];
int cs;
int chances;
double scor;
 textcolor(128+19);
 cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";cprintf("WELCOME");cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
cout<<"............................................................................................\n";
cout<<"BEFORE YOU START THE GAME:-\n";
cout<<"1.after entering the word if \"ENTER WORDS appears means you have written wrong spelling\n";
cout<<"2.if you have entered wrong word then \"CORRECT statement will not be displayed\n";
cout<<"...............................................................................................\n";
cout<<"ENTER THE CHANCES\n";
cin>>chances;
for(int a=1;a<=chances;a++)
{
if(a==1)
{
cout<<"PLAYER 1 chance\n";
}
else if(a%2==0)
{
cout<<"PLAYER 2 CHANCE\n";
}
else
{
cout<<"PLAYER 1 Chance";
}
ifstream file("dic.txt");
cout<<"----->>>>>--------------------->>>>>----------------------->>>>>-------------\n";
cout<<"\t\t\t\tENTER WORD \t\n";
cin>>word;
while(!file.eof())
{
file.getline(data,100);
if((strcmp(data,word)==0))
{
cout<<"~~~~~~~~~~~\n";
textcolor(128+14);
cprintf("CORRECT");
cs=strlen(word);
cs=cs-1;
scor++;
textcolor(YELLOW);
cout<<"\n";
cprintf("POINTS");
cout<<"\n";
cout<<scor;
cout<<"\n";
cout<<"\nNOW WRITE WORD FROM:-\n";
cout<<word[cs]<<"\n";
}
}
}

 color();
 textcolor(WHITE);
 option();
}


void mode::color()
{
textbackground(BLACK);
textcolor(WHITE);
}

void mode::option()
{
  cout<<"PRESS 1 TO GO TO MAIN MENU\n";
  cout<<"PRESS 0 TO quit\n";
  cin>>choice;
  if(choice==1)
  {
  menu();
  }
  else if(choice==0)
  {
  exit(0);
  }
  else
  {
  cout<<"YOU ARE NOT GOOD AT TYPING\n";
  }
}

void mode::menu()
{clrscr();
 color();
 mode a;
 cout<<"******************************************************************************\n";
 cout<<"*	************************( )*********************( )**************************\n";
 cout<<"******************************$$";textcolor(128+13);cprintf(" WORD GAME ");cout<<"$$********************************\n";
 cout<<"*******************************************************************************\n";
 cout<<"*******************************************************************************\n";
 cout<<"*************************************(   )*************************************\n";
 cout<<"________________________________________________________________________________";
 cout<<"--------------------------------------------------------------------------------";
 cout<<"|\t\t\t\t-->1";textcolor(128+11);cprintf(" SINGLE PLAYER");cout<<"\t\t\t       |\t";
 cout<<"\n|";
 cout<<"|\t\t\t\t-->2";textcolor(YELLOW);cprintf(" MULTIPLAYER");cout<<"\t\t\t       |\t";
 cout<<"\n|";
 cout<<"|\t\t\t\t-->3";textcolor(128+12);cprintf(" HELP MODE");cout<<"\t\t\t\t      |\t";
 cout<<"\n|";
 cout<<"|\t\t\t\t-->4";textcolor(WHITE);cprintf(" ABOUT MODE");cout<<"\t\t\t\t      |\t";
 cout<<"\n|";
 cout<<"|\t\t\t\t-->5";textcolor(128+2);cprintf(" QUIT MODE");cout<<"\t\t\t\t      |\t";
 cout<<"\n|";
 cout<<"________________________________________________________________________________";
 cout<<"--------------------------------------------------------------------------------";
 cout<<"\n";
 textcolor(WHITE);
 cprintf("WANNA PLAY!!! THEN WHAT ARE YOU WAITING FOR\n");
 textcolor(128+9);
 cout<<"\n";
 cprintf("ENTER YOUR CHOICE");
 cout<<"\n";
 cin>>a.i1;
 textcolor(WHITE);
switch(a.i1)
{
 case 1:a.singleplr();
 break;
 case 2:a.multiplr();
 break;
 case 3:a.help();
 break;
 case 4 :a.about();
 break;
 case 5:a.quit();
 break;
 default:textcolor(128+4);cprintf("BE ATTENTIVE TRY AGAIN \n");
 break;
}
textcolor(WHITE);
color();
}


void mode::singleplr()
{
 color();
 char str[100];
 clrscr();
 textcolor(GREEN);
 cout<<"....................>>>>>>>>..................>>>>>>>>...........>>>>>>.........";
 cout<<"\n\t\t\t\t SINGLE PLAYER MODE\t\t\t\t";
 cout<<"\t\t\t------------------------------------\t\t\t";
 cout<<"-->1";cout<<"\t\t\t\t|  ";textcolor(YELLOW); cprintf("PLAY");
 cout<<"\n";
 cout<<"-->2";cout<<"\t\t\t\t|  ";textcolor(128+13); cprintf("HIGH SCORE");
 cout<<"\n";
 cout<<"-->3";cout<<"\t\t\t\t|  ";textcolor(WHITE); cprintf("QUIT");
 cout<<"\n";
 cout<<"-->4";cout<<"\t\t\t\t|  ";textcolor(128+11); cprintf("SUGGEST");
 cout<<"\n";
 cout<<"....................>>>>>>>>..................>>>>>>>>...........>>>>>>.........";
 cin>>i;
 textcolor(WHITE);
if(i==1)
 {
  match();
 }
else if(i==2)
 {
 ifstream file("hscore.txt");
 while(!file.eof())
 {
 file.getline(ch,100);
 cout<<ch;
 }
 cout<<"\n";
 option();
}
else if(i==3)
 {
 exit(0);
 }
else if(i==4)
 {
  store();
 option();
 }
else
{
 textcolor(128+12);
 cprintf("BE ATTENTIVE TRY AGAIN");
 option();
}

color();
}

void mode::multiplr()
{
 int nu;
 clrscr();
 color();
 cout<<"....................>>>>>>>>..................>>>>>>>>...........>>>>>>.........";
 cout<<"\n\t\t\t\t MULTIPLAYER MODE \t\t\t\t";
 cout<<"\t\t\t------------------------------------\t\t\t";
 cout<<"-->1";cout<<"\t\t\t\t|  ";textcolor(128+11); cprintf("TIME BATTLE");
 cout<<"\n";
 cout<<"-->2";cout<<"\t\t\t\t|  ";textcolor(BLUE); cprintf("NO OF PLAYERS");
 cout<<"\n";
 cout<<"....................>>>>>>>>..................>>>>>>>>...........>>>>>>.........";
 cin>>m;
 if(m==1)
 {
 textbackground(BLACK);
 textcolor(WHITE);
 cout<<"ONLY 10 CHANCES LEFT\n";
 match2();
 }
 else if(m==2)
 {
 cout<<"```````````````````````````````PLAYERS MUST NOT BE MORE THAN 2```````````````````````````\n";
 cout<<"ENTER NUMBER OF PLAYERS\n";
 cin>>nu;
 if(nu==1)
 {
 textbackground(BLACK);
 textcolor(WHITE);
 match();
 }
 else
 {
 textbackground(BLACK);
 textcolor(WHITE);
 match3();
 }
 }
 else
 {
 option();
 }
 textcolor(WHITE);
 color();
}

void mode::help()
{
  clrscr();
  color();
  cprintf("TELL US HOW CAN WE HELP:");
  cout<<"\n";
  cprintf("\nFOR HELP MAIL US AT:");
  cout<<"\n";
  textcolor(128+14);
  cprintf("CREATIVENATION786@GMAIL.COM");
  cout<<"\n\n";
  textcolor(WHITE);
  option();
  color();
}

void mode::about()
{
  clrscr();
  color();
  textcolor(128+15);
  cout<<".....>>>..........>>>..............";cprintf("REGARDS");cout<<"...>>..............>>>>>...............\n";
  cout<<"1) IT was a great experience building a project like this the one which we have\n planned so fast when you have so less time.........\n";
  cout<<"2) Project helped a lot in regaining the knowledge and knowing lots of more things this helped a lot................\n";
  cout<<"3) Spending several hours on laptop doing programing and coding more and more helped a lot the so called programers.......\n";
  cout<<"4) So it was a great experience and also a cool thing\n\n";
  textcolor(YELLOW);
  cout<<"THANX A LOT TO OUR DEVELOPER\n";
  cprintf(":-1. GIRWAR SINGH BHATI 2.Nemichand");
  cout<<"\n\n";
  textcolor(YELLOW);
  cout<<"PLATFORM\n";
  cprintf(":-1.WINDOWS 8 2.TURBO C++");
  cout<<"\n\n";
  textcolor(BLUE);
  cout<<"OUR TEACHER\n";
  cprintf(":-1.O.P. SUTHAR\n\n");
  cout<<"AND\n";
  textcolor(WHITE);
  cprintf("INTERNET:-");
  cout<<"\n";
  option();
  color();
}

void mode::quit()
{

clrscr();
cout<<"OK BYE";
exit(0);

}



void main()
{
clrscr();
mode a;
a.menu();
getch();
}