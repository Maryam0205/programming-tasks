#include<iostream>
using namespace std;
float totalIncome(string screening,int rows,int columns);
main()
{
    float income;
    int rows,columns;
    string screening;
    cout <<"Enter type of screening ";
    cin >>screening;
    cout <<"Enter numer of rows ";
    cin >>rows;
    cout <<"Enter number of columns ";
    cin >>columns;
    income = totalIncome(screening,rows,columns);
    cout <<"Total income is " <<income;

}
float totalIncome(string screening,int rows,int columns)
{
    float income;
    int chairs = rows*columns;
    if (screening == "premiere")
    {
        income = chairs * 12.00;
    }
    else if (screening == "normal")
    {
        income = chairs * 7.50;
    }
    else if (screening == "discount")
    {
        income = chairs * 5.00;
    }
    return income;
}