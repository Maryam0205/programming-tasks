#include <iostream>
using namespace std;
float playTime(float weekend, float holidays, string year);
main()
{
    float weekend, holidays;
    int result;
    string year;
    cout << "leap year or normal year ";
    cin >> year;
    cout << "Enter holidays which ae not weekends ";
    cin >> holidays;
    cout << "Enter no. of weekends spend in hometown ";
    cin >> weekend;
    result = playTime(weekend, holidays, year);
    cout << "The total time to play volleyball is " << result;
}
float playTime(float weekend, float holidays, string year)
{
    float playTime, workWeekend, holidayPlay;
    if (year == "normal")
    {
        holidayPlay = (holidays * 2) / 3;
        workWeekend = ((48 - weekend) * 3 / 4);
        playTime = holidayPlay + workWeekend + weekend;
    }
    if (year == "leap")
    {
        holidayPlay = (holidays * 2) / 3;
        workWeekend = ((48 - weekend) * 3) / 4;
        playTime = holidayPlay + weekend + workWeekend;
        playTime = playTime + (playTime * 0.15);
    }
    return playTime;
}