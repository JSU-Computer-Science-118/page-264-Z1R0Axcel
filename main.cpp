// Luke McClinton J00916724 11/08/22
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
int main() {
  int num;
 cin >> num;
  if (num % 2 == 0 && num !=2 || num % 3 == 0 && num !=3 || num % 5 == 0 && num !=5 || num % 8 == 0 && num !=8 ||
      num % 11 == 0 && num !=11 || num % 13 == 0 && num !=13 || num % 17 == 0 && num !=17 || num % 19 == 0 && num !=19 ||
      num % 23 == 0 && num !=23 || num % 29 == 0 && num !=29 || num % 31 == 0 && num !=31) {
    if (num % 2 == 0)
      cout << "2 ";
    if (num % 3 == 0)
      cout << "3 ";
    if (num % 5 == 0)
      cout << "5 ";
    if (num % 7 == 0)
      cout << "7 ";
    if (num % 11 == 0)
      cout << "11 ";
    if (num % 13 == 0)
      cout << "13 ";
    if (num % 17 == 0)
      cout << "17 ";
    if (num % 19 == 0)
      cout << "19 ";
    if (num % 23 == 0)
      cout << "23 ";
    if (num % 29 == 0)
      cout << "29 ";
    if (num % 31 == 0)
      cout << "31";
  } else
  cout << "Prime " << num << endl;
}
