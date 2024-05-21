//Write a macro that obtains the largest of 3 numbers

#include <iostream>
using namespace std;

#define Max(a, b) ((a > b) ? a : b)
#define Maxof(a, b, c) Max(Max(a, b), c)

int main() 
{
    int num1, num2, num3;
    cout << "Enter three integers: \n";
    cin >> num1 >> num2 >> num3;
    int largest = Maxof(num1, num2, num3);

    cout << "The largest of the three numbers is: " << largest << endl;

    return 0;
}//Aditya Tiwari
