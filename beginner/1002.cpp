#include <iostream>
#include <math.h> 
#include <iomanip> 

using namespace std;

int main() {
    double R;
    cin >> R;

    double result = (double) pow(R, 2) * 3.14159;

    cout << fixed << showpoint << setprecision(4);
    cout << "A=" << result << endl;
    return 0;
}