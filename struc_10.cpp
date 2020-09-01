/* Create a structure called sterling that stores money amounts in the old-style British
system discussed in Exercises 8 and 11 in Chapter 3, “Loops and Decisions.” The members
could be called pounds, shillings, and pence, all of type int. The program should
ask the user to enter a money amount in new-style decimal pounds (type double), convert
it to the old-style system, store it in a variable of type struct sterling, and then
display this amount in pounds-shillings-pence format. */

#include <iostream>
using namespace std;
struct sterling{
    int pounds;
    int shillings;
    int pence;
};

int main()
{
    sterling s;
    double money;
    cout << "Enter money in new decimal style (in pounds): ";
    cin >> money;
    s.pounds = money;
    s.shillings = ((money - s.pounds) * 20) ;
    s.pence = (money*240 - s.pounds*240 - (s.shillings * 12));
    cout << "\nIn old money system, the entered amount = ";
    cout << s.pounds << " pounds " << s.shillings << " shillings " << s.pence << " pence\n\n";
    return 0;
}
