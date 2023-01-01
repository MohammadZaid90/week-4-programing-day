#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy (int x, int y);
void maze();
void playerMovement(int x,int y);

int main()
{
  int x=3;
  int y=16;


  system("cls");
  maze();
  gotoxy(33,9);
  cout<<" ";

while(true)
{
  playerMovement(x,y);
   if(x<71)
     {
       x=x+1;
     }
   if(x==71)
     { 
       gotoxy(x-1,y);
       cout<<" ";
       y=y+1;
       gotoxy(x,y-1);
       cout<<" ";
       
     }

   if(y == 23)
     {
       gotoxy(x,y-1);
       cout<<" ";
       y = 16;
     }

 }
  
}

void maze()
{
cout<<"&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
cout<<"||..........................................................   ........ ||"<<endl;
cout<<"||.. %%%%%%%%%%%%%%%%%        ...     %%%%%%%%%%%%%%  |$| ..    %%%%    ||"<<endl;
cout<<"||..         |$|   |$|     |$|...     |$|        |$|  |$| ..     |$|    ||"<<endl;
cout<<"||..         |$|   |$|     |$|...     |$|        |$|  |$| ..     |$|    ||"<<endl;
cout<<"||..         %%%%%%%%  . . |$|...     %%%%%%%%%%%%%%      ..    %%%%.   ||"<<endl;
cout<<"||..         |$|       . . |$|...    ............... |$|  ..        .   ||"<<endl;
cout<<"||..         %%%%%%%%%%. . |$|...    %%%%%%%%%%%%    |$|  ..    %%%%.   ||"<<endl;
cout<<"||..                |$|.             |$|......       |$|  ..     |$|.   ||"<<endl;
cout<<"||..     .........  |$|.         p   |$|......|$|         ..     |$|.   ||"<<endl;
cout<<"||..|$|  |$|$$$|$|. |$|.  |&|           ......|$|         .. |$|    |$|.||"<<endl;
cout<<"||..|$|  |$|   |$|. .     %%%%%%%%%%%%  ......|$|         .. |$|.       ||"<<endl;
cout<<"||..|$|  |$|   |$|. .               |$|    %%%%%%         .. |$|.       ||"<<endl;
cout<<"||..|$|             .               |$|              |$|  .. |$|.       ||"<<endl;
cout<<"||..|$|  %%%%%%%%%%%%               |$|%%%%%%%%%%%   |$|  .. |$|%%%%%%  ||"<<endl;
cout<<"||.................................................  |$|  ............  ||"<<endl;
cout<<"||    .............................................           ........  ||"<<endl;
cout<<"||..|$|  |$|   |$|..   %%%%%%%%%%%%%    ......|$|    |$|  .. |$|.       ||"<<endl;
cout<<"||..|$|  |$|   |$|..          ...|$|       %%%%%%    |$|  .. |$|.  G    ||"<<endl;
cout<<"||..|$|            .          ...|$|                 |$|  .. |$|.       ||"<<endl;
cout<<"||..|$|                       ...|$|%%%%%%%%%%%      |$|  .. |$|%%%%%%  ||"<<endl;
cout<<"||.................................................  |$|                ||"<<endl;
cout<<"||     ............................................                     ||"<<endl;
cout<<"##########################################################################"<<endl;
}


void gotoxy (int x, int y)
    {
         COORD coordinates;     
         coordinates.X = x;     
         coordinates.Y = y;     
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);       
    }

void playerMovement(int x,int y)
{
  gotoxy(x-1,y);
  cout<<" ";
  gotoxy(x,y);
  cout<<"P";
  Sleep(80);
}