/* Use the time structure from Exercise 9, and write a program that obtains two time values
from the user in 12:59:59 format, stores them in struct time variables, converts
each one to seconds (type int), adds these quantities, converts the result back to hoursminutes-
seconds, stores the result in a time structure, and finally displays the result in
12:59:59 format. */

#include<iostream>
using namespace std;
struct time
{
    int hours;
    int minutes;
    int secs;

};
int main()
{
    time t1, t2;
    char c;
    cout << "\n Enter time 1=";
    cin >> t1.hours >> c >> t1.minutes >> c >> t1.secs;
    cout << "\n Enter time 2=";
    cin >> t2.hours >> c >> t2.minutes >> c >> t2.secs;
    int h_sum=t1.hours*3600 + t2.hours*3600; //sum of hours of both time converted to secs total
    int m_sum=t1.minutes*60 +t2.minutes*60; // sum of minutes of both time converted to secs total
    int s_sum=t1.secs+t2.secs; //sum of seconds of both time
    int h=h_sum/3600;
    int m=m_sum/60;
    cout << "\n The sum of both time=" << h<< c << m << c << s_sum;
    return 0;
}
