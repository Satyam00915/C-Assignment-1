#include <iostream>
#include <string>

using namespace std;

bool checkEvenOdd(int n) {
  if (n % 2 == 0) {
    return true;
  } else {
    return false;
  }
}

int main() {

  // Question 1
  int num;
  cin >> num;

  if (checkEvenOdd(num)) {
    cout << "Even" << endl;
  } else {
    cout << "Odd" << endl;
  }

  // Question 2

  string str = "CipherSchools";
  for (int i = 0; i < str.length(); i++) {
    cout << str[str.length() - i - 1];
  }

  // Question 3

  string str1;
  cin >> str1;

  int vowels = 0;
  int consonants = 0;

  for (int i = 0; i < str1.length(); i++) {

    if (str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' ||
        str1[i] == 'u') {
      vowels++;
    } else {
      consonants++;
    }
  }

  cout << "Vowels: " << vowels << endl;
  cout << "Consonants: " << consonants << endl;
}