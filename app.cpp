#include <iostream>
// Preprocessor Directive
/*
  if we do not want to write "std::" we can write => 
*/
using namespace std;
/*
  Syntax for variables
  - [Data_type] [Variable_Name] = value;

  Variables naming rules:
  - must be unique
  - case sensitive
  - cannot start with numbers
  - nums or letters or underscore 
  - no white spaces or special characters
  - reserved keywords "Class, Public ..."

  Enscape Sequences Characters
  - \n, \\, \", \', \t(Tab), \b, \a(alert), \r(carriage return)
*/

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
  cout << "\n";
  int a;
  a = 100;
  cout << a;
  cout << "\n==================\n";
  int b, c = 20, d;
  b = 10, d = 30;
  cout << b + c + d;
  cout << "\n============\n";
  int e;
  cout << e;
  cout << "\n============\n";

  const int num = 100; // const, for read only, we can not update the value
  cout << "\n==================================\n";
  cout << "\n==Calculate Your Age Application==\n";
  cout << "\n==================================\n";

  int age;
  // cin >> age; // cout << => output != cin >> => input
  
  int age_in_days = age * 365.25;
  int age_in_hours = age_in_days * 24;
  int age_in_minuts = age_in_hours * 60;
  int age_in_seconds = age_in_minuts * 60;

  cout << "Age in days is: " << age_in_days << " d\n";
  cout << "Age in hours is: " << age_in_hours << " h\n";
  cout << "Age in minuts is: " << age_in_minuts << " m\n";
  cout << "Age in seconds is: " << age_in_seconds << " s\n";

  cout << "\n==================================\n";

  return 0;
}