/*Q. Start with the fraction-adding program of Exercise 9 in Chapter 2, “C++ Programming
Basics.” This program stores the numerator and denominator of two fractions before
adding them, and may also store the answer, which is also a fraction. Modify the program
so that all fractions are stored in variables of type struct fraction, whose two
members are the fraction’s numerator and denominator (both type int). All fractionrelated
data should be stored in structures of this type. */

#include<iostream>
using namespace std;
struct frac
{
    int num;
    int denom;

};
int main()
{
    frac f1, f2;
    char fk; // for / sign
    cout << "\n Enter fraction 1=";
    cin >> f1.num >> fk >> f1.denom;
    cout << "\n Enter fraction 2=";
    cin >> f2.num >> fk >> f2.denom;
    cout << "\n Sum of f1+f2= " << (f1.num*f2.denom) + (f2.num*f1.denom) << "/" << f1.denom*f2.denom;
    return 0;

}
