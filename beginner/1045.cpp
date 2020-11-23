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
  vector<double> numbers {a,b,c};
  sort(numbers.begin(), numbers.end());
  a = numbers[2];
  b = numbers[1];
  c = numbers[0];

  if (a >= (b + c) || b >= (a + c) || c >= (a + b))
  {
    cout << "NAO FORMA TRIANGULO" << endl;
    return 0;
  }

  int a_squared = pow(a, 2);
  int bc_squared = pow(b, 2) + pow(c, 2);

  if (a_squared == bc_squared)
    cout << "TRIANGULO RETANGULO" << endl;

  if (a_squared > bc_squared)
    cout << "TRIANGULO OBTUSANGULO" << endl;

  if (a_squared < bc_squared)
    cout << "TRIANGULO ACUTANGULO" << endl;

  if (a == b && b == c)
    cout << "TRIANGULO EQUILATERO" << endl;

  if (
      (a == b && a != c) ||
      (a == c && a != b) ||
      (b == c) && c != a)
    cout << "TRIANGULO ISOSCELES" << endl;

  return 0;
}
