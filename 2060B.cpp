#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        // Read the card decks and sort each cow's deck
        vector<vector<int>> decks(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> decks[i][j];
            }
            sort(decks[i].begin(), decks[i].end());
        }

        // Priority queue to pick the next smallest card
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        // Push the smallest card of each cow into the priority queue
        vector<int> indices(n, 0); // To track the next card for each cow
        for (int i = 0; i < n; ++i) {
            pq.push(make_pair(decks[i][0], i)); // Push (card, cow_index)
        }

        vector<int> perm; // To store the permutation order
        int lastCard = -1;
        bool valid = true;

        for (int round = 0; round < m; ++round) {
            vector<pair<int, int>> nextRound; // To store cards for the next round
            for (int i = 0; i < n; ++i) {
                if (pq.empty() || pq.top().first <= lastCard) {
                    valid = false;
                    break;
                }

                // Get the cow with the smallest card
                pair<int, int> top = pq.top();
                pq.pop();
                int card = top.first;
                int cow = top.second;

                perm.push_back(cow + 1); // Add the cow to the permutation
                lastCard = card;

                // Move to the next card for this cow
                indices[cow]++;
                if (indices[cow] < m) {
                    nextRound.push_back(make_pair(decks[cow][indices[cow]], cow));
                }
            }
            if (!valid) break;

            // Push the next round of cards into the priority queue
            for (size_t j = 0; j < nextRound.size(); ++j) {
                pq.push(nextRound[j]);
            }
        }

        if (!valid) {
            cout << -1 << "\n";
        } else {
            for (size_t i = 0; i < perm.size(); ++i) {
                cout << perm[i] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
