/* Revise the four-function fraction calculator program of Exercise 12 in Chapter 3 so that
each fraction is stored internally as a variable of type struct fraction, as discussed in
Exercise 8 in this chapter.*/
#include<iostream>
using namespace std;
struct frac
{
    int num;
    int den;
};
int main()
{
    frac f1, f2;
    char fk, operat;

    cout << "\n Enter first fraction=";
    cin >> f1.num >> fk >> f1.den;
    cout << "\n Enter second fraction=";
    cin >> f2.num >> fk >> f2.den;
    cout << "\n Enter operator=";
    cin >> operat;

    switch(operat)
    {
    case '+':
        cout << "\n Fraction 1 + Fraction 2=" <<(f1.num*f2.den) + (f2.num*f1.den) << fk << f1.den*f2.den;
        break;
    case '-':
        cout << "\n Fraction 1 - Fraction 2=" <<(f1.num*f2.den) - (f2.num*f1.den) << fk << f1.den*f2.den;
        break;
    case '*':
        cout << "\n Fraction 1 * Fraction 2=" <<(f1.num*f2.num) << fk << (f1.den*f2.den);
        break;
    case '/':
        cout << "\n Fraction 1" << fk << "Fraction 2=" << (f1.num*f2.den) << fk << (f1.den*f2.num);
        break;
    }
    return 0;

}
