#include <iostream>
// Preprocessor Directive
/*
    Syntax for variables
    - [Data_type] [Variable_Name] = value;
*/
/*
    if we do not want to write "std::" we can write => 
*/
using namespace std;

int main()
{
    int price = 100;
    std::cout << "Line 1\n";
    std::cout << "Line 2\n";
    std::cout << "Line 3\n";
    // without std::
    cout << "Price is: 100";
    cout << "\nPrice after adding 15 is: " << price + 15;
    cout << "\nPrice after adding 50 is: " << price + 50;
    //updte the value
    price = 150;
    cout << "\nthe new price is: " << price;

    return 0;
}