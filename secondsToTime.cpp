#include <iostream>
using namespace std;

int main () {

	double num;
	cout << "Enter a number of seconds: ";
	cin >> num;

	if (num >= 60) {
		double minutes = num / 60;
		cout << "There are " << minutes << " minutes in " << num << " seconds." << endl;

	}
	if (num >= 3600) {
		double hours = num / 3600;
		cout << "There are " << hours << " hours in " << num << " seconds." << endl;
	}
	if (num >= 86400) {
		double days = num / 86400;
		cout << "There are " << days << " days in " << num << " seconds." << endl;
	}
	else {
		cout << "The input must be greater than or equal to 60 seconds." << endl;
	}

	return 0;
}
