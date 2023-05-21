//enter a number, program will print that number of digits of pi

#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

int main(){
  int digits;
  double pi = M_PI;
  bool cont = 0;

  while(cont == 0){
    cout << "How many digits do you want to print of pi?" << endl;
    cin >> digits;

    cout << M_PI << " = " << pi << endl;
    cout << "Here: \t" << setprecision(digits) << pi << endl;

    cout << "Are you done? \n 0 - No \n 1 - Yes" << endl;
    cin >> cont;
  }

  cout << "Thank u bye" << endl;

  return 0;
}