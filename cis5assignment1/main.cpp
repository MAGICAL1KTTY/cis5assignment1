#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string firstname, lastname, goals, interests, dreams;

	cout << "First and last name? " << endl;
	cin >> firstname >> lastname;
	
	cout << endl;
	cout << "Beyond this point, replace every space in you response with a underscore or a hyphen. For example, your-response-would-look-something-like-this. " << endl;
	cout << endl;

	cout << "Goals in life? " << endl;
	cin >> goals;
	cout << "Current interests? " << endl;
	cin >> interests;
	cout << "Dreams? " << endl;
	cin >> dreams;

	string year1, year3, year5, year7;

	cout << "Where do you see yourself in a year? " << endl;
	cin >> year1;
	cout << "Where do you see yourself in three years from now? " << endl;
	cin >> year3;
	cout << "Where do you see yourself in five years from now? " << endl;
	cin >> year5;
	cout << "Where do you see yourself in seven years from now? " << endl;
	cin >> year7;

	cout << endl;

	cout << "Hello, " << firstname << " " << lastname << "!" << endl;
	cout << "Your current goals in life are: " << goals << endl;
	cout << "Your current interests are: " << interests << endl;
	cout << "Your dreams are: " << dreams << endl;
	cout << "In a year, you see yourself... " << year1 << endl;
	cout << "In three years from now, you see yourself... " << year3 << endl;
	cout << "In five years from now, you see yourself... " << year5 << endl;
	cout << "In seven years from now, you see yourself... " << year7 << endl;
	cout << "What a nice introduction!" << endl;
}