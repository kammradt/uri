#include <iomanip>
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
  cout << fixed << setprecision(1);

  double n1, n2, n3, n4;
  cin >> n1 >> n2 >> n3 >> n4;
  double average = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;

  cout << "Media: " << average << endl;
  if (average >= 7.0)
  {
    cout << "Aluno aprovado." << endl;
    return 0;
  }

  if (average < 5.00)
  {
    cout << "Aluno reprovado." << endl;
    return 0;
  }

  cout << "Aluno em exame." << endl;
  double exam;
  cin >> exam;

  cout << "Nota do exame: " << exam << endl;
  double new_average = (average + exam) / 2;

  if (new_average >= 5)
    cout << "Aluno aprovado." << endl;
  else
    cout << "Aluno reprovado." << endl;

  cout << "Media final: " << new_average << endl;

  return 0;
}
