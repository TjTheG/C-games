#include <iostream>
#include <iomanip>
using namespace std;

int main ()

{
    cout << "Choose a number" << endl;
    int num;
    cin >> num;
    cout << "You chose number " << num << endl;
    cout << "Watch it multiply " << endl;
for (int i = 1; i < 13; i++)
{
    
    
    
    //cout << i << endl;
    cout << setw(4) << num << " X " << setw(2) << i << " = " << setw(5) << num * i << endl;

    
}





}