#include <iostream>
#include <string>
using namespace std;

int main () {
	int month = 0;
	int year = 0;
	int days = 31;
	string stringMonth = "";

	cout << "Enter a month (1-12): ";
	cin >> month;

	cout << "Enter a year: ";
	cin >> year;

	if (month < 1 || month > 12) {
		cout << "Invalid month. Please enter a number between 1 and 12." << endl;
		return 1;
	}

	switch (month) {
	case 1: stringMonth = "January"; break;
	case 2:
		stringMonth = "February";
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			days = 29;
		else
			days = 28;
		break;
	case 3: stringMonth = "March"; break;
	case 4: stringMonth = "April"; days = 30; break;
	case 5: stringMonth = "May"; break;
	case 6: stringMonth = "June"; days = 30; break;
	case 7: stringMonth = "July"; break;
	case 8: stringMonth = "August"; break;
	case 9: stringMonth = "September"; days = 30; break;
	case 10: stringMonth = "October"; break;
	case 11: stringMonth = "November"; days = 30; break;
	case 12: stringMonth = "December"; break;
	}

	cout << stringMonth << " " << year << " has " << days << " days." << endl;

	return 0;
}
