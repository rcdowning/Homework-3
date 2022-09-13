#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

  /*************** declare parameters ***************/

  int c0;      // number of inital cases
  double r;    // growth rate parameter
  double m;    // degree of polynomial

  // calculated values based on equation 1 and 2
  
  double ct;   // c(t)
  double A;    // equation constant related to baseline prevalence 

  // user input
  double t;    // in weeks

  /************** initalize parameters *************/
  
  c0 = 5;
  r = 0.2;
  m = 1.65;
  //t = 5;

  /********************* input *********************/
  //request user for input
  
  cout << "For the model where m = " << m << ", c0 = " << c0;
  cout << ", and r = " << r << "..." << endl;
  cout << "Input t [weeks] for the sub-exponential growth model:" << endl;
  cin >> t;

  /********* conversions and calculations *********/
  // convert t from weeks to days
  t = t*7;

  // solve equation 2, which finds A
  A = pow(c0, (1/m));

  // find c(t) at user specified t
  ct = pow( ((r/m) *t + A), m);

  /*********** display results to user ************/
  // output for the form c(t) = xx where t in the equation is shown in weeks
  //cout << setprecision(2) << fixed;
  //cout << fixed << showpoint;
  //cout << setprecision(0) << fixed;
  
  //cout << setprecision(0);
  //cout << "c(" << t/7.0 << ") = " << scientific << ct << endl;

  // test formatting from setw

  cout << setprecision(0) << fixed;
  cout << setw(10) << "Your input is being evaluated...";
  cout << "\n";
  cout << setw(10) << "c(" << t/7.0 << ") = " << ct << endl;

  //cout << "We recommend trying the following time points: \n";
  //cout << setw(5) << 10 << setw(7) << 20 << setw(7) << 50 << endl;
  //return 0;
  
  cout << "We recommend trying the following time points: \n";
  cout << setw(5) << setfill('*') << 10;
  cout << setw(7) << setfill('*') << 20;
  cout << setw(7) << setfill ('#') << 50 << endl;
 
}