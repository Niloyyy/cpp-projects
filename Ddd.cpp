	#include<bits/stdc++.h>
	using namespace std;
	#define ll long long int
	#define endl '\n'
	#define eps 1e-9
	int dr[] = {+1 , 0 , -1 , 0};
	int dc[] = {0 , -1 , 0 , +1};


	int ub(vector<int>&v , int n , long long target){
		int l = 0 , h = n-1 , ans = -1;
		while(h >= l){
			int m = l + (h - l) / 2;
			if(v[m] > target){
				ans = m;
				h = m - 1;
			}else{
				l = m + 1;
			}
		}
		return ans;
	}

	int lb(vector<int>&v , int n ,  long long target){
		int l = 0 , h = n-1 , ans = -1;
		while(h >= l){
			int m = l + (h - l) / 2;
			if(v[m] >= target){ //smallest index for a[i] >= target;
				ans = m;
				h = m - 1;
			}else{
				l = m + 1;
			}
		}
		return ans;
	}

	int main(){
	    ios_base::sync_with_stdio(false);
	    cin.tie(NULL);

	    int tc = 1; //cin >> tc;
	    while(tc--){
	    	string s; cin >> s;
	    	string s1 = "";
	    	s1 += s[0];
	    	s1 += s[1];
	    	string s2 = "";
	    	s2 += s[2];
	    	s2 += s[3];
	    	int a = stoi(s1);
	    	int b = stoi(s2);
	    	//cout<<a<<b;
	    	//if(a==0 and b == 0) cout<<"NA";
	    	if(a <= 12 && b <= 12 && a!=0 && b != 0) cout<<"AMBIGUOUS";
	    	else if(a <= 12 && a != 0) cout<<"MMYY";
	    	else if(b <= 12 && b != 0) cout<<"YYMM";
	    	else cout<<"NA";


	    }
	    return 0;
	}