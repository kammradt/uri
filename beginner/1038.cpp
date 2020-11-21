#include <iomanip>
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
  int x, y;
  cin >> x >> y;

  vector<double> values{
      4.00,
      4.50,
      5.00,
      2.00,
      1.50,
  };

  cout << fixed << setprecision(2);
  cout << "Total: R$ " << (values[x-1] * y) << endl;

  return 0;
}
