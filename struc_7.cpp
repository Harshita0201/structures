/* Q-Add a variable of type enum etype (see Exercise 6), and another variable of type struct
date (see Exercise 5) to the employee class of Exercise 4. Organize the resulting program
so that the user enters four items of information for each of three employees: an
employee number, the employee’s compensation, the employee type, and the date of first
employment. The program should store this information in three variables of type
employee, and then display their contents. */




#include<iostream>
using namespace std;
struct date
{
    int day;
    int month;
    int year;
};
enum etype {laborer, secretary, manager, accountant, executive, researcher};
struct employee
{
    int num;
    float compen;
    date d;
    etype em;
};
int main()
{
    int n,i;
    char letter;
    char uk;
    cout << "\n Enter the number of employees :";
    cin >> n;
    employee e[n];
    for(i=0;i<n;i++)
    {
        cout << "\n Enter number of " << i+1 << " employee=";
        cin >> e[i].num;
        cout << "\n Enter compensation of " << i+1 << " employee=";
        cin >> e[i].compen;
        cout << "\n Enter date of birth of " << i+1 << " employee=";
        cin >> e[i].d.day >> uk >>  e[i].d.month >> uk >> e[i].d.year ;
        cout << "\n Enter the first letter of employee type=";
        cin >> letter;
        switch(letter)
        {
          case 'l': e[i].em = laborer; break;
		  case 's': e[i].em = secretary; break;
		  case 'm': e[i].em = manager; break;
		  case 'a': e[i].em = accountant; break;
		  case 'e': e[i].em = executive; break;
		  case 'r': e[i].em = researcher;
        }

    }
    cout << "\n The following is the information your entered=";
    for(i=0;i<n;i++)
    {
        cout << "\n Number of " << i+1 << " employee=" << e[i].num;
        cout << "\n Compensation of " << i+1 << " employee=" << e[i].compen;
        cout << "\n Date of birth of " << i+1 << " employee=" << e[i].d.day << uk << e[i].d.month << uk << e[i].d.year;
        cout << "\n Employee type = ";
        switch(e[i].em)
		{
		case 0:
			cout << "\t Employee type is laborer";
			break;
		case 1:
			cout << "\t Employee type is secretary";
			break;
		case 2:
			cout << "\t Employee type is manager";
			break;
		case 3:
			cout << "\t Employee type is accountant";
			break;
		case 4:
			cout << "\t Employee type is executive";
         break;
		case 5:
			cout << "\t Employee type is researcher";
		}

    }
    return 0;

}
