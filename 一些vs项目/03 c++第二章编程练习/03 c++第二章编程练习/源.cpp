#include <iostream>
#include <cmath>
using namespace std;
int Lengthchange(int l);
int Monthchance(int a);
double Lightchange(double l);

int main()
{
	cout << "name:Frank-Chandler " << "address:China" << endl;
	int length;
	cout << "the long is ";
	cin >> length;
	cout <<length << "long."<<endl;
	int result = Lengthchange(length);
	cout << result << " yard." << endl;
	cout << "Your age is ";
	int age;
	cin >> age;
	cout << " years old." << endl;
	int month = Monthchance(age);
	cout << "Your life has pass " << month << "months."<<endl;
	cout << "Please enter a Celsius value:";
	int temp;
	cin >> temp;
	cout << temp << " Degrees Celius is " << 1.8 * temp + 32.0 << " degrees Fahrenheit." << endl;
	cout << "Enter the number of light years:";
	double light;
	cin >> light;
	cout << light << endl;
	double sky = Lightchange(light);
	cout << light << " light years = " << sky << " astronmical units.";
}
int Lengthchange(int l)
{
	return 220 * l;
}
int Monthchance(int a)
{
	return a * 12;
}
double Lightchange(double l)
{
	return l * 63240;
}