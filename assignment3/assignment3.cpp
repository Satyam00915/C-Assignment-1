#include <iostream>

using namespace std;

int main() {
  // Question 1
  int n;
  cin >> n;

  int sum = 0;
  for (int i = 0; i <= n; i++) {
    sum += i;
  }

  cout << "The sum is " << sum;

  // Question 2

  int n;
  cin >> n;

  int fact = 1;

  for (int i = n; i > 0; i--) {
    fact *= i;
  }

  cout << "The factorial of " << n << " is " << fact;

  // Question 3

  int table;
  cin >> table;

  for (int i = 1; i <= 10; i++) {
    cout << table << " X " << i << " = " << table * i << endl;
  }
}