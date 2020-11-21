#include <iomanip>
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
  double A, B, C;
  cin >> A >> B >> C;

  double _root = pow(B, 2) - (4 * A * C);

  if (!A || _root < 0)
  {
    cout << "Impossivel calcular" << endl;
    return 0;
  }

  double root = sqrt(_root);
  double R1 = ((-B) + root) / (2 * A);
  double R2 = ((-B) - root) / (2 * A);

  cout << fixed << setprecision(5);
  cout << "R1 = " << R1 << endl;
  cout << "R2 = " << R2 << endl;

  return 0;
}
