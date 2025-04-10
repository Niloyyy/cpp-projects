#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define f first
#define s second
using namespace std;
const double PI = 2 * acos(0.0);
const int mod = 1e9 + 7;
const int inf = INT_MAX;
const int _inf = INT_MIN;

//cayley_menger_determinant

double determinant(vector<vector<double>> &A) {
    int n = A.size();
    double det = 1.0;
    int swaps = 0;

    for (int i = 0; i < n; i++) {
        int maxRow = i;
        for (int k = i + 1; k < n; k++) {
            if (fabs(A[k][i]) > fabs(A[maxRow][i])) {
                maxRow = k;
            }
        }

        if (fabs(A[maxRow][i]) < 1e-10) {
            return 0;
        }

        if (maxRow != i) {
            swap(A[i], A[maxRow]);
            swaps++;
        }

        for (int k = i + 1; k < n; k++) {
            double factor = A[k][i] / A[i][i];
            for (int j = i; j < n; j++) {
                A[k][j] -= factor * A[i][j];
            }
        }

        det *= A[i][i];
    }

    if (swaps % 2 != 0) {
        det = -det;
    }

    return det;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; 
    cin >> tc;
    while (tc--) {
        double ab, ac, ad, bc, bd, cd;
        cin >> ab >> ac >> ad >> bc >> bd >> cd;
        vector<vector<double>> matrix = {
            {0, 1 , 1 , 1 , 1},
            {1, 0, ab*ab, ac*ac , ad*ad},
            {1 , ab*ab , 0 , bc*bc , bd*bd},
            {1 , ac*ac , bc*bc , 0 , cd*cd},
            {1 , ad*ad , bd*bd , cd*cd , 0}
        };
        double ans = sqrt(determinant(matrix) / 288.0);
        cout << fixed << setprecision(4) << ans << endl;
    }

    return 0;
}
