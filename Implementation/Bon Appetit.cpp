
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n,k,b_charge,fair_charge  = 0;
    float sum = 0.0;
    cin >> n >> k;
    float amounts[n];

        for (int i=0; i<n; i++) {
            cin >> amounts[i];
            i==k ? :sum += amounts[i]/2;
        } 

        cin >> b_charge;
        b_charge > sum ? cout << b_charge - sum : cout << "Bon Appetit";

    cout << "\n";
    return 0;
}
