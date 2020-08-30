/*Q. A phone number, such as (212) 767-8900, can be thought of as having three parts: the
area code (212), the exchange (767), and the number (8900). Write a program that uses a
structure to store these three parts of a phone number separately. Call the structure
phone. Create two structure variables of type phone. Initialize one, and have the user
input a number for the other one. Then display both numbers. The interchange might
look like this:
Enter your area code, exchange, and number: 415 555 1212
My number is (212) 767-8900
Your number is (415) 555-1212*/


#include<iostream>
using namespace std;
struct phone
{
    int area_code;
    int exchange;
    int num;
};
int main()
{
    phone p1={212,767,8900};
    phone p2;

    cout << "Enter your code, exchange, and number:";
    cin >> p2.area_code >> p2.exchange >> p2.num;

    cout << "\n My num is=" << "(" << p1.area_code << ") " << p1.exchange << "-" << p1.num;
    cout << "\n Your num is=" << "(" << p2.area_code << ") " << p2.exchange << "-" << p2.num;

    return 0;
}
