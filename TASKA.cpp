#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    unordered_map<string, string> iptonam;
    
    for (int i = 0; i < n; i++) {
        string name, ip;
        cin >> name >> ip;
        iptonam[ip] = name;
    }
    
    while (m--) {
        string cmd, ip;
        cin >> cmd >> ip;
        
        string cleanIP = ip.substr(0, ip.size() - 1);  // Remove the trailing dot
        
        cout << cmd << " " << ip << " #" << iptonam[cleanIP] << "\n";  // Output the command with associated name
    }

    return 0;
}
