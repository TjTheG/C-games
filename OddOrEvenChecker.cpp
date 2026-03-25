#include <iostream>
using namespace std;

int main()
{
int number;
cout << "Enter a whole number to check if it's even or odd" << endl;
cin >> number;

cout << "You chose " << number << endl;

if (number % 2 == 0)
{
    cout << number << " is an even number" << endl;
}
else if (number % 2 != 0)
{
    cout << number << " is an odd number, odd" << endl;
}
else
cout << "Wrong input" << endl;
return 0;



}