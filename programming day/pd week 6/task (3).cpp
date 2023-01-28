#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
main()
{
    char character;
    int x, y, h;
    cout << "Enter a height ";
    cin >> h;
    cout << "Enter position of character on x cordinate ";
    cin >> x;
    cout << "Enter position of character on y axis ";
    cin >> y;
    system("cls");
    /* if ((x >= 0 && x <= 6) && (y >= 0 && y <= 8))
     {
         if (((x >= 0) && (x < 2)) && ((y > 2) && (y < 8)))
         {
             cout << "outside";
         }
         if (((x > 4) && (x < 6)) && ((y > 2) && (y < 8)))
         {
             cout << "outside";
         }*/
    if ((((x >= 0) && (x <= 3*h)) && (y == 0)) || ((x == h) && ((y >= h) && (y <= 4 * h))) || ((x == 2 * h) && ((y >= h) && (y <= 4 * h))) || (((x >= 0) && (x <= h)) && (y == h)) || (((x >= 2 * h) && (x <= 3 * h)) && (y == h)) || ((x == 0) && ((y >= 0) && (y <= h))) || ((x == 3 * h) && ((y >= 0) && (y <= h))) || (((x >= h) && (x <= 2 * h)) && (y == 4 * h)))
    {
        cout << "on border ";
    }
    /* else

         cout << "inside";
 }
 else
     cout << "outside";*/
    else if ((x < h * 3) && (y < h))
        cout << "inside ";
    else if (((x > h) && (x < 2 * h)) && ((y > 0) && (y < 4 * h))) 
        cout << "inside";
    /*else if(( x == 0)&&((y >=0 )&&(y <= h)))
        cout <<"on border";
    else if(( y == h)  ) */
    else
        cout << "outside";
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
