// ask for a,b,c and return the solutions to the quadratic equation that correpsonds

#include <iostream>
#include <math.h>
#include <complex>
int main()

{
  using namespace std;
  cout << "Hello! Please enter a value for 'a' in the quadratic equation: ";
  double a = 0;
  double b = 0;
  double c = 0;
  cin >> a;
  cout << "Enter a value for 'b'"; 
  cin >> b;
  cout << "Enter a value for 'c'";
  cin >> c;
  double disc = b*b - 4*a*c;
  if (disc < 0){
      complex<double> discy= b*b - 4*a*c;
      complex<double> solution1 = (-1*b + sqrt(discy))/(2*a);
      cout << "The first solution is: " << solution1 << endl;
      complex<double> solution2 = (-1*b - sqrt(discy))/(2.0 * a);
      cout << "The second solution is: " << solution2 << endl;
    }
  else{
      double positiv1 = (-1*b + sqrt(disc))/(2.0 * a);
      cout << "The first solution is: " << positiv1 << endl;
      double negativ1 = (-1*b - sqrt(disc))/(2.0 * a);
      cout << "The second solution is: " << negativ1 << endl;
    }
  return 0;
}

 
