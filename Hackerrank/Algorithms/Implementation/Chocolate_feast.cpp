#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int no_tests, inst_chocs = 0, wrappers = 0, extra_chocs = 0, total_extras;
    cin >> no_tests; 
    for(int a0 = 0; a0 < no_tests; a0++){
        int n, c, m;
        cin >> n >> c >> m;
        
        total_extras = 0; // Reset
        inst_chocs = floor(n/c);
        wrappers = inst_chocs;   // Total no_wrappers obtained
        
        // Check for total no_chocs possible
        while (wrappers >= m){ // More chocs obtainable
            extra_chocs = floor(wrappers / m);
            wrappers += (wrappers % m) + extra_chocs;
            total_extras += extra_chocs;
        }
        
        cout << inst_chocs + total_extras << endl ;
    }
    return 0;
}
