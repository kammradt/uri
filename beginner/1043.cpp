#include <iomanip>
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  double a, b, c;
  cin >> a >> b >> c;

  cout << fixed << setprecision(1);

  if (a < (b + c) && b < (a + c) && c < (a + b))
    cout << "Perimetro = " << (a + b + c);
  else
    cout << "Area = " << ((a + b) * c) / 2;
  cout << endl;

  return 0;
}
