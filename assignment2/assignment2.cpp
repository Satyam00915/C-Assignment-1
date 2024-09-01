#include <iostream>

using namespace std;

int main() {

  // Question 1
  //   int a, b, c;
  //   cin >> a >> b >> c;

  //   if (a > b && a > c) {
  //     cout << "The largest number is " << a;
  //   } else if (b > a && b > c) {
  //     cout << "The largest number is " << b;
  //   } else {
  //     cout << "The largest number is " << c;
  //   }

  // Question 2

  //   int marks;
  //   cout << "Enter the Score: ";
  //   cin >> marks;

  //   if (marks > 90 && marks < 100) {
  //     cout << "Grade: A";
  //   } else if (marks > 80 && marks < 89) {
  //     cout << "Grade: B";
  //   } else if (marks > 70 && marks < 79) {
  //     cout << "Grade: C";
  //   } else if (marks > 60 && marks < 69) {
  //     cout << "Grade: D";
  //   } else {
  //     cout << "Grade: F";
  //   }

  // Question 3
  int n;
  cin >> n;

  switch (n) {
  case 1:
    cout << "January";
    break;
  case 2:
    cout << "February";
    break;
  case 3:
    cout << "March";
    break;
  case 4:
    cout << "April";
    break;
  case 5:
    cout << "May";
    break;
  case 6:
    cout << "June";
    break;
  case 7:
    cout << "July";
    break;
  case 8:
    cout << "August";
    break;
  case 9:
    cout << "September";
    break;
  case 10:
    cout << "October";
    break;
  case 11:
    cout << "November";
    break;
  case 12:
    cout << "December";
    break;
  default:
    cout << "Invalid month";
  }
  return 0;
}