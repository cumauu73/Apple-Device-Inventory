#include <iostream>
#include <string>
using namespace std;

int main() {
  string SerialNumber;
  cout << "Enter the Serial Number: ";
  cin >> SerialNumber;
  if (SerialNumber =="abc") {
    cout << "The serial number is not valid.";
  }
  else {
    cout << "hi correct";
  }
   return 0;
}