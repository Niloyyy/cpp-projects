#include <iostream>
#include <vector>
using namespace std;

int main() {

    int t;cin>>t;
    while(t--){
    int x;
    cin >> x;
    vector<int> numbers = {11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111};

    vector<bool> dp(x + 1, false);
    dp[0] = true;

    for (int i = 1; i <= x; i++) {
        for (int j = 0; j < numbers.size(); j++) {
            if (i >= numbers[j] && dp[i - numbers[j]]) {
                dp[i] = true;
                break;
            }
        }
    }

    if (dp[x]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
    return 0;
}
