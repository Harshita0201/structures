/* Q. Create a structure called Volume that uses three variables of type Distance (from the
ENGLSTRC example) to model the volume of a room. Initialize a variable of type Volume
to specific dimensions, then calculate the volume it represents, and print out the result.
To calculate the volume, convert each dimension from a Distance variable to a variable
of type float representing feet and fractions of a foot, and then multiply the resulting
three numbers. */

#include<iostream>
using namespace std;
struct dist
{
    int feet;
    float inches;
};
struct volume
{
    dist length;
    dist width;
    dist height;
};
int main()
{
    volume room={{12,3},{10,2.5},{10,3}};
    float l=room.length.feet + room.length.inches/12;
    float w=room.width.feet + room.width.inches/12;
    float h=room.height.feet + room.height.inches/12;
    cout << "Volume of room is =" << l*w*h;
    return 0;
}
