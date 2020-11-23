#include <iomanip>
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  int bigger = a > b ? a : b;
  int smaller = a > b ? b : a;

  if (!(bigger % smaller))
    cout << "Sao Multiplos";
  else
    cout << "Nao sao Multiplos";
  cout << endl;

  return 0;
}
