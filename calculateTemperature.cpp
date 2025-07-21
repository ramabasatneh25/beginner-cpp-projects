#include <iostream>
using namespace std;

double calculateCelsius(double fahrenheitTemp) {
	return (fahrenheitTemp - 32) * 5.0/9.0;
}
double calculateFahrenheit (double celsiusTemp) {
	return (celsiusTemp * 9.0/5.0) + 32;
}

int main() {

	double fahrenheitTemp, celsiusTemp, convertedTemp;

	cout << "Let's convert Temperatures!" << endl;
	cout << "Enter a temperature in fahrenheit so we can convert it to celsius: " << endl;
	cin >> fahrenheitTemp;

	convertedTemp = calculateCelsius(fahrenheitTemp);

	cout << fahrenheitTemp << " degrees fahrenheit in celsius would be " << convertedTemp << " degrees celsius" << endl;

	cout << "Enter a temperature in celsius so we can convert it to fahrenheit" << endl;
	cin >> celsiusTemp;

	convertedTemp = calculateFahrenheit(celsiusTemp);
	cout << celsiusTemp << " degrees celsius in fahrenheit would be " << convertedTemp << " degrees fahrenheit" << endl;

	return 0;
}