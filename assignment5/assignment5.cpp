#include <iostream>

using namespace std;

int main() {
  //   // Question 1
  //   int n;
  //   cout << "Enter the size of the array: ";
  //   cin >> n;
  //   int arr[n];

  //   cout << "Enter the Array: ";

  //   for (int i = 0; i < 5; i++) {
  //     cin >> arr[i];
  //   }

  //   int sum = 0;

  //   for (int i = 0; i < 5; i++) {
  //     sum += arr[i];
  //   }

  //   cout << "The sum of array is: " << sum;

  // Question 2
  //   int n;
  //   cout << "Enter the size of the array: ";
  //   cin >> n;
  //   int arr[n];

  //   cout << "Enter the Array: ";

  //   for (int i = 0; i < 5; i++) {
  //     cin >> arr[i];
  //   }

  //   int oddsum = 0;
  //   int evensum = 0;

  //   for (int i = 0; i < n; i++) {
  //     if (arr[i] % 2 == 0) {
  //       evensum += arr[i];
  //     } else {
  //       oddsum += arr[i];
  //     }
  //   }

  //   cout << "The Sum of even numbers is: " << evensum;
  //   cout << "\nThe Sum of odd numbers is: " << oddsum;

  // Question 3

  int n;
  cout << "Enter the size of the array: ";
  cin >> n;
  int arr[n];

  cout << "Enter the Array: ";

  for (int i = 0; i < 5; i++) {
    cin >> arr[i];
  }

  int oddNo = 0;
  int evenNo = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 == 0) {
      evenNo++;
    } else {
      oddNo++;
    }
  }

  cout << "Number of Odd Numbers: " << oddNo << endl;
  cout << "Number of Even Numbers: " << evenNo << endl;
}