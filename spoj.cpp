#include <iostream>
#include <cmath>
#include <string>
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
  /*
  double x, y;
  cin >> x >> y;

  cout << x + y << endl; // 4
  cout << x - y << endl; // 0
  cout << x * y << endl; // 4
  cout << x / y << endl; // 1
*/
  /*
  string tekst;
  cin >> tekst;
  int ile = tekst.length();

  for (int i = 1; i <= ile; i++)
  {
    cout << tekst[ile - i] << endl;
  }
*/
  /*
  string tekst;
  cin >> tekst;
  int ile = tekst.length();

  for (int i = 0; i <= ile; i++)
  {
    if (i % 2 == 0)
    {
      cout << tekst[i] << endl;
    }
  }
  */
  /*
  const int CAPACITY = 20;
  int tab[CAPACITY] = {5, 3, 7, 8, 98, 3, 23, 56, 23, 6, 5, 43, 6, 3, 4, 7}; // mozna zastosowac srand i szukac pseudolosowych lotto
  int input;
  string find = "nie";
  cin >> input;

  for (int i = 0; i < CAPACITY; i++)
  {
    if (tab[i] == input)
    {
      find = "tak";
    }
  }
  if (find == "tak")
  {
    cout << "liczba znajduje sie w zbiorze " << endl;
  }
  else
  {
    cout << "brak liczby w zbiorze " << endl;
  }
  */

  return 0;
}