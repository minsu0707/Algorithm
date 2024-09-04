#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int total = 0;
    for(int i=0; i<5; i++) {
        int num;
        cin >> num;
        total+= num;
    }
    cout << total;
    
    return 0;
}