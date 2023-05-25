//enter a number of digits up to a certain limit to return that number of digits of e

#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
  int digits;
  double e = M_E;
  bool cont = 0;

  while(cont == 0){
    cout << "How many digits do you want to print of e?" << endl;
    cin >> digits;

    if (digits <= 30){
      cout << M_E << " = " << e << endl;
      cout << "Here: \t" << setprecision(digits) << e << endl;

      cout << "Are you done? \n 0 - No \n 1 - Yes" << endl;
      cin >> cont;
    } else {
      cout << "Sorry, we can only do up to 30 digits of e :( \n Gotta set limits" << endl;
    }
  }

  cout << "Thank u bye" << endl;

  return 0;
}

//it rounds off the number 