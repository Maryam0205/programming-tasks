#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void printMaze();
void move(int x, int y);
main()
{
 system("cls");
 printMaze();
 int x = 3;
 int y = 2;
 while(1)
 {
  move(x,y);
  if ( y < 13)
   y =y+1;
  if (y == 13 )
  { 
    gotoxy(3,12);
    cout << " ";
    y = 2;
  }
 }
}
void printMaze()
{
 cout <<"###################################"<<endl;
 cout <<"#                                 #"<<endl;
 cout <<"#                                 #"<<endl;
 cout <<"#                                 #"<<endl;
 cout <<"#                                 #"<<endl;
 cout <<"#                                 #"<<endl;
 cout <<"#                                 #"<<endl;
 cout <<"#                                 #"<<endl;
 cout <<"#                                 #"<<endl;
 cout <<"#                                 #"<<endl;
 cout <<"#                                 #"<<endl;
 cout <<"#                                 #"<<endl;
 cout <<"#                                 #"<<endl;
 cout <<"###################################"<<endl;
}
 
void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void move(int x, int y)
{
 gotoxy(x, y-1);
 cout << " ";
 gotoxy(x,y);
 cout << "P";
 Sleep(200);
}
 