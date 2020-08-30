/* Q. A point on the two-dimensional plane can be represented by two numbers: an x coordinate
and a y coordinate. For example, (4,5) represents a point 4 units to the right of the
vertical axis, and 5 units up from the horizontal axis. The sum of two points can be
defined as a new point whose x coordinate is the sum of the x coordinates of the two
points, and whose y coordinate is the sum of the y coordinates.
Write a program that uses a structure called point to model a point. Define three points,
and have the user input values to two of them. Then set the third point equal to the sum
of the other two, and display the value of the new point. Interaction with the program
might look like this:
Enter coordinates for p1: 3 4
Enter coordinates for p2: 5 7
Coordinates of p1+p2 are: 8, 11 */
#include<iostream>
using namespace std;
struct cordi
{
    int x;
    int y;
};
int main()
{
    cordi p1, p2, p3;
    cout << "Enter the co-ordinates for point 1=";
    cin >> p1.x >> p1.y;

    cout << "Enter the co-ordinates for point 2=";
    cin >> p2.x >> p2.y;

    p3.x= p1.x + p2.x;
    p3.y= p1.y + p2.y;

    cout << "Cordinates for p1+p2 are=" << p3.x <<"," << vm p3.y;
}
