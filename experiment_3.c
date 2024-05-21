/*Write a function using reference variables as arguments to swap the values of a pair of integers.*/

#include <iostream>

using namespace std;

void swap(int &a, int &b) 
{
    int t = a;
    a = b;
    b = t;
}

int main()
{
    int num1, num2;

    cout << "Enter the 1st integer: ";
    cin >> num1;
    cout << "Enter the 2nd integer: ";
    cin >> num2;

    cout << "Original values of: 1st number = " << num1 << ", 2nd number = " << num2 << endl;

    swap(num1, num2);

    cout << "Swapped values: 1st = " << num1 << ", 2nd = " << num2 << endl;

    return 0;
}
