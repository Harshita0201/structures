/* Q- We said earlier that C++ I/O statements don’t automatically understand the data types of
enumerations. Instead, the (>>) and (<<) operators think of such variables simply as integers.
You can overcome this limitation by using switch statements to translate between
the user’s way of expressing an enumerated variable and the actual values of the enumerated
variable. For example, imagine an enumerated type with values that indicate an
employee type within an organization:
enum etype { laborer, secretary, manager, accountant, executive,
researcher };
Write a program that first allows the user to specify a type by entering its first letter
(‘l’, ‘s’, ‘m’, and so on), then stores the type chosen as a value of a variable of type
enum etype, and finally displays the complete word for this type.
Enter employee type (first letter only)
laborer, secretary, manager,
accountant, executive, researcher): a
Employee type is accountant.*/



#include <iostream>
using namespace std;

enum employee {laborer, secretary, manager, accountant, executive, researcher};

int main()
	{
	char letter;
	employee etype;

	cout << "Enter employee type (first letter only) " << endl
		  << "\t(laborer, secretary, manager, " << endl
		  << "\taccountant, executive, researcher): ";
	cin >> letter;

	switch(letter)
		{
		case 'l': etype = laborer; break;
		case 's': etype = secretary; break;
		case 'm': etype = manager; break;
		case 'a': etype = accountant; break;
		case 'e': etype = executive; break;
		case 'r': etype = researcher;
		}
	switch(etype)
		{
		case 0:
			cout << "\nEmployee type is laborer";
			break;
		case 1:
			cout << "\nEmployee type is secretary";
			break;
		case 2:
			cout << "\nEmployee type is manager";
			break;
		case 3:
			cout << "\nEmployee type is accountant";
			break;
		case 4:
			cout << "\nEmployee type is executive";
         break;
		case 5:
			cout << "\nEmployee type is researcher";
		}
		return 0;
	}
