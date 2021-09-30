// C++ code to demonstrate the
// use of round() function
#include <cmath>
#include <iostream>
using namespace std;
  
// Driver program
int main()
{
    // initializing value
    double x = 12.5;
    int y = 13.3;
      float z = 14.8;
  
    // Displaying the nearest values
    // of x, y and z
    cout << "Nearest value of x :" << round(x) << "\n";
    cout << "Nearest value of y :" << round(y) << "\n";
    cout << "Nearest value of z :" << round(z) << "\n";
  
    // For lround
    cout << "lround(-0.0) = " << lround(-0.0) << "\n";
 
  
    // For llround
    cout << "llround(-0.01234) = " << llround(-0.01234) << "\n";
    cout << "llround(2.3563) = " << llround(2.3563) << "\n";
    cout << "llround(2.555) = " << llround(2.555) << "\n";
    cout << "llround(2.7896) = " << llround(2.7896) << "\n";
    cout << "llround(-2.323) = " << llround(-2.323) << "\n";
    cout << "llround(-2.5258) = " << llround(-2.5258) << "\n";
    cout << "llround(-2.71236) = " << llround(-2.71236) << "\n";
  
    return ;
}
