#include <iostream>
#include <math.h> 
#include <iomanip> 

using namespace std;

int main() {
    int number, hours;
    double per_hour;
    cin >> number >> hours >> per_hour;

    cout << "NUMBER = " << number << endl;

    cout << fixed << setprecision(2);
    double result = hours * per_hour;
    cout << "SALARY = U$ " << result << endl;
    return 0;
}