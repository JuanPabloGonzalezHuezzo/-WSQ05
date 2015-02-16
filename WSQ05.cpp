#include <iostream>
using namespace std;
int main () {

double a, b;
cout << "How hot is it? (Fahrenheit)" << endl;
cin >> a;
b=5*(a-32)/9;
cout << endl << "This temperature is equal to:" <<b << "degrees celsius" << endl;
if (b==100 || b>100){
  cout << endl << "Water should boil." << endl;
}
  else {
    cout << endl << "Water will not boil (under typical conditions)." << endl;
  }
return 0;
}
