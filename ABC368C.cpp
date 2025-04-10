#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int T = 0;
    for (int a : A) {
        int num = a / 5;
        T += num * 3;
        a -= num * 5;

        while (a > 0) {
            T++;
            if (T % 3 == 0) {
                a -= 3;
            } else {
                a -= 1;
            }
        }
    }

    cout << T << endl;

    return 0;
}
