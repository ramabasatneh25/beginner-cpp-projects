#include <iostream>
using namespace std;

int main()
{
	int num;
	int min;
	int max;

	cout << "Please input some numbers (with -99 to end): ";
	cin >> num;

	min = max = num;

	while (num != -99) {
		if (num > max) {
			max = num;
		}
		if (num < min) {
			min = num;
		}
		cin >> num;
	}

	cout << "The largest number is " << max << " and the smallest is " << min << endl;

	return 0;
}