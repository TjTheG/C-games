#include <iostream>
using namespace std;

int main()
{
int choice;
double degree;


cout << "Choose a temperature unit" << endl;
cout << "1: Celcius" << endl;
cout << "2: Fahrenheit" << endl;
cout << "3: Kelvin" << endl;
cin >> choice;

cout << "Enter a degree in your chosen temperature unit" << endl;
cin >> degree;

if (choice ==1)
{
    cout << "You choose " << + degree << " Celsius. The chosen degree in fahrenheit is " << degree *1.8 + 32 << endl;
    cout << "The chosen degree in kelvin is " << degree + 273.15 << endl;
}
if (choice ==2)
{
    cout << "You choose " << + degree << " Fahrenheit. The chosen degree in Celsius is " << (degree -32) / 1.8 << endl;
    cout << "The chosen degree in kelvin is " << degree -32 /1.8 + 273.15 << endl;
}
if (choice ==3)
{
    cout << "You choose " << + degree << " Kelvin. The chosen degree in fahrenheit is " << degree -273.15 *1.8 +32 << endl;
    cout << "The chosen degree in Celvin is " << degree - 273.15 << endl;
}

}