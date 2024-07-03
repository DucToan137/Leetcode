#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

vector<double> convertTemperature(double celsius) {
	vector<double> result;

	double fahrenheit = celsius * 9 / 5 + 32;
	double kelvin = celsius + 273.15;

	result.push_back(kelvin);
	result.push_back(fahrenheit);

	return result;
}

int main() {

	double celsius = 36.50;
	vector<double> result = convertTemperature(celsius);

	for(int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}


	return 0;
}