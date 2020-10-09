#include <iostream>
#include <conio.h>

using namespace std;

void printLine(string str)
{
	cout << str << endl;
}

void requireEnter()
{
	printLine("Click enter to continue");
	while (_getch() != 13);
}

struct Person 
{
	string firstName;
	string lastName;
	int age;
};

Person arr[20];
int peopleInDB;

void addPerson()
{
	cout << "What is your first name" << endl;
	cin >> arr[peopleInDB].firstName;

	cout << "What is your last name" << endl;
	cin >> arr[peopleInDB].lastName;

	cout << "What is your age" << endl;
	cin >> arr[peopleInDB].age;

	peopleInDB++;
}

void showAllPeople()
{
	if (peopleInDB < 0)
	{
		cout << "No one added yet." << endl;
		return;
	}

	for (auto i = 0; i < peopleInDB; i++) {
		cout << "Index: " << (i + 1) << endl;
		cout << "First: " << arr[i].firstName << endl;
		cout << "Last: " << arr[i].lastName << endl;
		cout << "Age: " << arr[i].age << endl;
	}
}

int main()
{
	char test;
	do
	{
		cout << "MENU:" << endl;

		cout << "1. Add a person" << endl;
		cout << "2. Show all people" << endl;

		test = _getch();

		switch (test)
		{
		case '1':
			addPerson();
			break;
		case '2':
			showAllPeople();
			break;
		}

		requireEnter();
		system("cls");
	} while (test != 27);
	return 0;
}
