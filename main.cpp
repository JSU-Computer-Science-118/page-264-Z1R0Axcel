//Luke McClinton J00916724 11/08/22
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
int main() {
  int num;
  cout << "Enter an integer between 1 and 1000: ";
  cin >> num;
  if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 8 == 0 ||
      num % 11 == 0 || num % 13 == 0 || num % 17 == 0 || num % 19 == 0 ||
      num % 23 == 0 || num % 29 == 0 || num % 31 == 0) {
    if (num % 2 == 0)
      cout << "Divisible by 2" << endl;
    if (num % 3 == 0)
      cout << "Divisible by 3" << endl;
    if (num % 5 == 0)
      cout << "Divisible by 5" << endl;
    if (num % 7 == 0)
      cout << "Divisible by 7" << endl;
    if (num % 11 == 0)
      cout << "Divisible by 11" << endl;
    if (num % 13 == 0)
      cout << "Divisible by 13" << endl;
    if (num % 17 == 0)
      cout << "Divisible by 17" << endl;
    if (num % 19 == 0)
      cout << "Divisible by 19" << endl;
    if (num % 23 == 0)
      cout << "Divisible by 23" << endl;
    if (num % 29 == 0)
      cout << "Divisible by 29" << endl;
    if (num % 31 == 0)
      cout << "Divisible by 31" << endl;
  } else
    cout << "The number is a prime." << endl;
  }
