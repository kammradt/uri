#include <iostream>
#include <math.h> 
#include <iomanip> 

using namespace std;

int main() {
    int distance;
    double fuel_used;
    cin >> distance >> fuel_used;

    cout << fixed << setprecision(3);

    cout << (double) (distance/fuel_used) << " km/l" << endl;

    return 0;
}