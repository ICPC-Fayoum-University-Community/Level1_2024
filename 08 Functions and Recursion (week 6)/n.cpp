#include <bits/stdc++.h>
using namespace std;

int piles, truck_load;

int solve(int pile) {
    if(pile < truck_load) return 1;
    return solve(pile / 2) + solve((pile + 1) / 2);
}

int main() {
    
    while (cin >> piles >> truck_load)
    {
        cout << solve(piles) << '\n';
    }
    
    return 0;
}
