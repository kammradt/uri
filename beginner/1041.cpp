#include <iomanip>
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

vector<string> values{
    "Q1",
    "Q2",
    "Q3",
    "Q4",
};

void solve_y(double y, vector<int> options)
{
  if (y > 0)
    cout << values[options[0]] << endl;
  else
    cout << values[options[1]] << endl;
}

void solve_x(double x, double y)
{
  if (x > 0)
    solve_y(y, {0, 3});
  else
    solve_y(y, {1, 2});
}

int main()
{
  cout << fixed << setprecision(1);

  double x, y;
  cin >> x >> y;

  if (0.0 == x && 0.0 == y)
    cout << "Origem" << endl;
  else if (0.0 == x) 
    cout << "Eixo Y" << endl;
  else if (0.0 == y) 
    cout << "Eixo X" << endl;
  else 
    solve_x(x, y);

  return 0;
}
