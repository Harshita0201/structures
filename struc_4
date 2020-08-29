/*Create a structure called employee that contains two members: an employee number
(type int) and the employee’s compensation (in dollars; type float). Ask the user to fill
in this data for three employees, store it in three variables of type struct employee, and
then display the information for each employee.*/

#include<iostream>
using namespace std;
struct employee
{
    int num;
    float compensation;
    char name[50];
};
int main()
{
    int n,i;
    cout << "\n Enter the number of employees : ";
    cin >> n;
    employee e[n];

    cout << "Enter the data for "<< n << " employees:";
    for(i=1;i<=n;i++)
    {
        cout << "\n Enter " << i << " employee number: ";
        cin >>e[i].num;
        cout << "\n Enter " << i << " employee compensation: ";
        cin >>e[i].compensation;
        cout << "\n Enter name:";
        cin >> e[i].name;
    }
    cout << "\n The info you entered is:";
    for(i=1;i<=n;i++)
    {
        cout << "\n Employee " << i << " number=" << e[i].num;
        cout << "\n Employee " << i << " compensation=" << e[i].compensation;
        cout << "\n Employee " << i << " name=" << e[i].name;
    }
    return 0;
}
