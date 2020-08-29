/* Q. Create a structure of type date that contains three members: the month, the day of the
month, and the year, all of type int. (Or use day-month-year order if you prefer.) Have
the user enter a date in the format 12/31/2001, store it in a variable of type struct date,
then retrieve the values from the variable and print them out in the same format. */

#include<iostream>
using namespace std;
struct date
{
    int day;
    int month;
    int year;
};
int main(void)
{
    date d;
    char uk;
    cout << "\n Enter the date";
    cin >> d.day >> uk >> d.month >> uk >> d.year;
    cout << "\n The date you entered is:";
    cout << d.day << uk << d.month << uk << d.year;
    return 0;
}
