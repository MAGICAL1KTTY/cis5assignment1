#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	string name;
	cout << "First and last name? "<< endl;
	cin >> name;

	string goals; 
	cout << "Goals in life? "<< endl;
	cin >> goals;
	
	string interests;
	cout << "Current interests? " << endl;
	cin >> interests;

	string dreams;
	cout << "Dreams? " << endl;
	cin >> dreams;

	string year1;
	cout << "Where do you see yourself in a year? " << endl;
	cin >> year1;

	string year3;
	cout << "Where do you see yourself in three years from now? " << endl;
	cin >> year3;

	string year5;
	cout << "Where do you see yourself in five years from now? " << endl;
	cin >> year5;

	string year7;
	cout << "Where do you see yourself in seven years from now? " << endl;
	cin >> year7;
}