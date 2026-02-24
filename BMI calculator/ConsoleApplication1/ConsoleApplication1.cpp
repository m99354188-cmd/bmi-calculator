#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double bmi,weight,height = 0.0;

	cout << " enter your weight in kg : \n ";

		cin >> weight;

	cout << " enter your height in cm : \n";
	cin >> height;

	bmi = weight / pow(height / 100, 2);
	cout << " your bmi is : " << bmi << endl;
	if (bmi < 18.5)
		cout << " you are underweight \n ";
	else if (bmi >= 18.5 && bmi <= 25)
		cout << " you are normal \n ";
	else if (bmi > 25 && bmi <= 30)
		cout << " you are over weight \n";
	else if (bmi > 30)
		cout << " you should stop eating ";
	




	


	return 0;
}