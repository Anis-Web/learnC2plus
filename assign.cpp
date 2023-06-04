// C++ Assignement
#include <iostream>
#include <climits>
using namespace std;

// Assign from 001 to 008
//Assign 01
int main() //the main should be a lowercase
{
  std::cout << "Line One\n";
  std::cout << "Line Two\n";
  std::cout << "Line Three\n";
  //ass03
  std::cout << "Iam Learning Programming\nwith\nElzero\nWeb\nSchool\n<3\n";
  //ass04
  std::cout << "|=======================|\n|== Elzero Web School ==|\n|==        C++        ==|\n|=======================|\n";

  cout << "====ass from 9 to 15====\n";
  cout << "ass 01 =>\n";
  int age = 40, period = 10;
  cout << "My Age Is: " << age << "\n";
  cout << period << " Years Ago My Age Was: " << age - period << "\n";
  cout << "After" << period << " Years My Age Will Be: " << age + period << "\n";
  cout << "ass 02 => \n";
  // Write Your One Line Code Here
  int a, b, c;
  // Do Not Edit Below
  a = 10, b = 20, c = 70;
  cout << "Sum Of All Number Is: " << a + b + c << "\n";
  cout << "ass 04 =>  \n";
  // Write my_text Variable Content Here
  string my_text = "============\n== Elzero ==\n============\n";
  // Do Not Edit Below
  cout << my_text;
  cout << "ass 05 =>  \n";
  // Do Not Edit Below
  int d, e, f = 100;
  // Add Your Code Here
  d = e = f;
  // Do Not Edit Below
  cout << d + e + f << "\n"; // 300
  cout << "ass 06 =>  \n";
  // Do Not Edit Below
  int j = 210, k = -50, l = -40;
  // Write Your cout Code Here
  cout << j - k - l <<  "\n";
  cout << "ass 08 =>  \n";
  // Edit Here To Fix The Error
  int current_year;
  int birth_year;
  // Do Not Edit Here
  current_year = 2022;
  birth_year = 1982;
  int age_in_years = current_year - birth_year;
  cout << age_in_years << "\n";
  // cout << "ass 09 =>  \n";
  // Write Your Code Here
  // int number;
  // cin >> number;
  // cout << number * number << "\n";
  // Num 10
  // Needed Output 100 [10 * 10]
  // cout << "ass 10 =>  \n";
  // Write Your Code Here
  // int numOne, numTwo;
  // cin >> numOne;
  // cin >> numTwo;
  // cout << numOne * numTwo << "\n";
  // Number One => 10
  // Number Two => 100
  // Needed Output 1000 [10 * 100]
  cout << "ass 11 =>  \n";
  cout << "Bello\nHello Elzeroo";
  cout << " Web Schoolll";
  cout << " I Love Programming";
  cout << " Too Much";
  cout << " Specially C++\n";
  // Needed Output
  // "Hello Elzero Web School I Love Programming Too Much Specially C++"
  cout << "=========================\n";
  cout << "====ass from 16 to 23====\n";
  cout << "=========================\n";
  cout << "ass 02 =>  \n";
  double salary = 5000.98;
  cout << sizeof(salary) << " Bytes\n";
  cout << sizeof(salary)*CHAR_BIT << " Bits\n";
  cout << "ass 03 =>  \n";
  cout << "Maximum integer Number is => " << INT_MAX << "\n";
  cout << "Minimum integer Number is => " << INT_MIN << "\n";
  cout << "Maximum short integer Number is => " << SHRT_MAX << "\n";
  cout << "Minimum short integer Number is => " << SHRT_MIN << "\n";
  cout << "ass 04 =>  \n";
  // Edit Line To Make 8 Become 4
  cout << sizeof(10.5f + 5 + 20.5f + 10) << "\n"; // 4
  cout << "ass 05 =>  \n";
  char char_a = '~',char_b = '&',char_c = '%',char_d = 'A';
  cout << "ASCII Value of " << char_a << " is: " << int(char_a) << "\n";
  cout << "ASCII Value of " << char_b << " is: " << int(char_b) << "\n";
  cout << "ASCII Value of " << char_c << " is: " << int(char_c) << "\n";
  cout << "ASCII Value of " << char_d << " is: " << int(char_d) << "\n";
  cout << "ass 06 =>  \n";
  int int_a = 69, int_b = 108;
  cout << "Character of this ASCII value " << int_a << "is: " << char(int_a) << "\n";
  cout << "Character of this ASCII value " << int_b << "is: " << char(int_b) << "\n";
  cout << "ass 07 =>  \n";
  // cout << char(1) << "\n"; // SOH (start of heading)
  // cout << char(13) << "\n"; // Carriage Return or CR
  // cout << char(17) << "\n"; // Device Control 1
  // cout << char(70) << "\n"; // F
  // we have to find EWS 
  // => E = 69, W = 87, S = 83
  int n_one = 1, n_two = 13, n_three = 17, n_foor = 70;
  cout << char(n_foor - n_one) << char(n_foor + n_three) << char(n_foor + n_two) << "\n"; // EWS
  cout << "ass 08 =>  \n";
  short int a_in_bs = 100;
  long int b_in_bs = 15001500;
  long double c_in_bs = 100.54565746;

  // Do Not Edit
  cout << sizeof(a_in_bs) << " Bytes\n"; // 2 Bytes
  cout << sizeof(b_in_bs) << " Bytes\n"; // 8 Bytes
  cout << sizeof(c_in_bs) << " Bytes\n"; // 16 Bytes
  cout << "ass 10 =>  \n";
  // Add Type Alias Here
  // using lli = long long int;
  typedef long long int lli;
  // Do Not Edit
  lli num = 150050005; // This Is Long Long Int
  cout << num << "\n"; // 150050005
  cout << "ass 11 =>  \n";
  // Do Not Edit Here
  short int x = 100;
  float y = 98.5f;
  double z = 1.7;

  // Edit This Line And Use Type Casting To Get The Output
  cout << int(x + y + z) << "\n"; // 200
  cout << "ass 12 =>  \n";
  // Do Not Edit Here
  short a12 = 1000;
  int b12 = 10000;
  long double c12 = 5.560000505012;

  // Change ??? To Something Else To Get The Output
  cout << sizeof(c12) - sizeof(b12)<< "\n"; // 12
  cout << sizeof(c12) + sizeof(b12) << "\n"; // 20
  cout << sizeof(c12) * sizeof(a12) << "\n"; // 32
  cout << a12 * int(c12) << "\n"; // 5000
  cout << char(sizeof(c12) * int(c12)) << "\n"; // P
  cout << "=========================\n";
  cout << "====ass from 24 to 29====\n";
  cout << "=========================\n";
  cout << "ass 01 =>  \n";

  cout << "ass 02 =>  \n";

  cout << "ass 03 =>  \n";

  cout << "ass 04 =>  \n";

  cout << "ass 05 =>  \n";

  cout << "ass 06 =>  \n";

  cout << "ass 07 =>  \n";
  
  cout << "ass 08 =>  \n";
  
  return 0;
}
//Assign 02
/*
  iostream Header File Content
  - cout
  - wcout
  - cin
  - wcin
  - cerr
  - wcerr
  - clog
  - wlog
*/
//Assign 03
// int main()
// {
//     std::cout << "Iam Learning Programming\nwith\nElzero\nWeb\nSchool\n<3";
//     return 0;
// }

// Assign from 009 to 015
