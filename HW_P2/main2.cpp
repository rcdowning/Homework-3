#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  /************* declare parameters ***************/

  double X1;
  double Y1;
  double X2;
  double Y2;
  double m;  // slope of line

  /************* initalize parameters ************/

  X1 = 2;
  Y1 = 10;
  X2 = 12;
  Y2 = 6;

  /************* calculating slope *************/

  m = (Y2 - Y1) / (X2 - X1);

  /*************** display results **************/

  cout << setprecision(2) << fixed;
  cout << "The value of the slope is " << m << endl;

  return 0;



  
}