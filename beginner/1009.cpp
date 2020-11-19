#include <iostream>
#include <math.h> 
#include <iomanip> 

using namespace std;

int main() {
    string name;
    double salary, additional;
    cin >> name >> salary >> additional;

    cout << fixed << setprecision(2);
    double result = salary + (additional * 0.15);
    cout << "TOTAL = R$ " << result << endl;
    return 0;
}