/* Create a structure called time. Its three members, all type int, should be called hours,
minutes, and seconds. Write a program that prompts the user to enter a time value in
hours, minutes, and seconds. This can be in 12:59:59 format, or each number can be
entered at a separate prompt (“Enter hours:”, and so forth). The program should then
store the time in a variable of type struct time, and finally print out the total number of
seconds represented by this time value:
long totalsecs = t1.hours*3600 + t1.minutes*60 + t1.seconds*/
#include<iostream>
using namespace std;
struct time
{
    int hours;
    int minutes;
    int seconds;
};
int main()
{
   time t;
   cout << "\n Enter the number of hours=";
   cin >> t.hours;
   cout << "\n Enter the number of minutes=";
   cin >> t.minutes;
   cout << "\n Enter the number of seconds=";
   cin >> t.seconds;
   long totalsecs= t.hours*60*60 + t.minutes*60 + t.seconds;
   cout << "\n Total number of seconds in the time you entered =" << totalsecs ;

   return 0;

}
