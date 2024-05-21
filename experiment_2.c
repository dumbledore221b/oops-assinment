/*Write a program to read 2 numbers from the keyboard and display the larger value on the screen.*/

#include <iostream>

using namespace std;

int main() 
{
    int num1, num2;
  
    cout << "Enter the 1st number: ";
    cin >> num1;

    cout << "Enter the 2nd number: ";
    cin >> num2;

    if (num1 > num2) 
	{
        cout << "The larger value is: " << num1 << endl;
    }
	else 
	{
       cout << "The larger value is: " << num2 << endl;
    }

    return 0;
}//Aditya Tiwari
