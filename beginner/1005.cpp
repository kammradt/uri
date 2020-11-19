#include <iostream>
#include <math.h> 
#include <iomanip> 

using namespace std;

int main() {
    double n0, n1;
    cin >> n0 >> n1;

    cout << fixed << setprecision(5);
    double result = ((n0*3.5) + (n1*7.5)) / (11);
    cout << "MEDIA = " << result << endl;
    return 0;
}