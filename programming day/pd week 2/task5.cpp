#include<iostream>
#include<windows.h>  
using namespace std;
void gotoxy (int x, int y);

main()
{
 system ("cls");
 gotoxy(80,23);
 cout << "###    ###  ###  #####  ##    ##  ###  ###    ### "<<endl;
 gotoxy(80,24);
 cout << "####  #### ## ## ##  ##  ##  ##  ## ## ####  #### "<<endl;
 gotoxy(80,25);
 cout << "##  ##  ## ##### #####    ####   ##### ##  ##  ## "<<endl;
 gotoxy(80,26);
 cout << "##      ## ## ## ## ##     ##    ## ## ##      ## "<<endl;
 gotoxy(80,27);
 cout << "##      ## ## ## ##  ##    ##    ## ## ##      ## "<<endl;         
}

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
