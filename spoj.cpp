#include <iostream>
#include <cmath>
using namespace std;

double input;

int main()
{
  /*
  cin >> input;           logarytm naturalny
  cout << log(input);
  */
  /*
  cin >> input;
  int p = M_PI * pow(input,2);
  cout << p << endl;
*/
  /*
  cin >> input;
  int natural,
      dziesietny;

  natural = log(input); // 4 = 1.39
  dziesietny = log10(input); // 4 = 0.60
  if (natural > dziesietny)
  {
    cout << "naturalny jest wiekszy" << endl;
  }
  else
  {
    cout << "dziesietny jest wiekszy" << endl;
  }
  */
/*
  int podstawa, wykladnik;
  cin >> podstawa;
  cin >> wykladnik;

  cout << pow(podstawa, 1.0 / wykladnik) << endl;
*/
  
/*
  for (int i = 0; i < 5; i++)
  {

    if (i == 0)
    {
      cout << sin(0*M_PI/180) << endl; //0
    }
    else if (i == 1)
    {
      cout << sin(30*M_PI/180) << endl; //0.5
    }
    else if (i == 2)
    {
      cout << sin(45*M_PI/180) << endl; // 0.7
    }
    else if (i == 3)
    {
      cout << sin(60*M_PI/180) << endl; // 0.86
    }
    else if (i == 4)
    {
      cout << sin(90*M_PI/180) << endl; // 1
    }
  }
 */
 /* 
 cin >> input;
 cout << round(input) << endl;  // 5 
 cout << ceil(input) << endl;   // 6
 cout << floor(input) << endl;  // 5
*/
  
  double x, y;
  cin >> x >> y;

  cout << x + y << endl; // 4
  cout << x - y << endl; // 0
  cout << x * y << endl; // 4
  cout << x / y << endl; // 1

  return 0;
}