#include <iostream>
#include <cmath>

using namespace std;

int main()
{

  /**************** declare parameters ******************/

  double E, R, t, i, RC; // units: [volts], [ohms], [seconds], [amps]
  const double e = 2.71828; // [Euler's number]

  /************** prompt for user input ****************/

  // obtain E
  cout << "Enter the voltage of the battery in volts: ";
  cin >> E; // volts
  cout << endl;

  // obtain R
  cout << "Enter the value of the resistor in ohms: ";
  cin >> R;
  cout << endl;
  
  // obtain RC
  cout << "Enter the value of the time constant: ";
  cin >> RC;
  cout << endl;

  // obtain t
  cout << "Enter the time after the switch was closed in seconds: ";
  cin >> t; // seconds
  cout << endl;

  /********************* calculate *********************/

  i = ((E/R) * pow(e,(-t/RC)));
  
  // display back to user

  cout << "i = " << i << " amps " << endl;



  
}