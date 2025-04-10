
#include <bits/stdc++.h>
using namespace std;

string find_sum(string str1, string str2) {

	if (str1.length() > str2.length())
		swap(str1, str2);

	string str = "";

	int n1 = str1.length(), n2 = str2.length();

	reverse(str1.begin(), str1.end());
	reverse(str2.begin(), str2.end());

	int carry = 0;
	for (int i=0; i<n1; i++) {

		int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
		str.push_back(sum%10 + '0');

		
		carry = sum/10;
	}

	for (int i=n1; i<n2; i++)
	{
		int sum = ((str2[i]-'0')+carry);
		str.push_back(sum%10 + '0');
		carry = sum/10;
	}

	if (carry)
		str.push_back(carry+'0');

	reverse(str.begin(), str.end());

	return str;
}

bool isSmaller(string str1, string str2)
{
	// Calculate lengths of both string
	int n1 = str1.length(), n2 = str2.length();

	if (n1 < n2)
		return true;
	if (n2 < n1)
		return false;

	for (int i = 0; i < n1; i++)
		if (str1[i] < str2[i])
			return true;
		else if (str1[i] > str2[i])
			return false;

	return false;
}

string find_diff(string str1, string str2) {
	
	if (isSmaller(str1, str2))
		swap(str1, str2);

	string str = "";

	int n1 = str1.length(), n2 = str2.length();

	// Reverse both of strings
	reverse(str1.begin(), str1.end());
	reverse(str2.begin(), str2.end());

	int carry = 0;

	
	for (int i = 0; i < n2; i++) {
		
		int sub
			= ((str1[i] - '0') - (str2[i] - '0') - carry);

		if (sub < 0) {
			sub = sub + 10;
			carry = 1;
		}
		else
			carry = 0;

		str.push_back(sub + '0');
	}

	for (int i = n2; i < n1; i++) {
		int sub = ((str1[i] - '0') - carry);

		if (sub < 0) {
			sub = sub + 10;
			carry = 1;
		}
		else
			carry = 0;

		str.push_back(sub + '0');
	}

	reverse(str.begin(), str.end());

	return str;
}

string long_division(string number, int divisor) {
	string ans;

	int idx = 0;
	int temp = number[idx] - '0';
	while (temp < divisor)
		temp = temp * 10 + (number[++idx] - '0');
		
	while (number.size() > idx) {
	
		ans += (temp / divisor) + '0';

		temp = (temp % divisor) * 10 + number[++idx] - '0';
	}
	if (ans.length() == 0)
		return "0";

	
	return ans;
}

int main() {
	for(int i = 0 ;i < 10;i++){
	string num1 , num2; cin >> num1 >> num2;
	string aa = find_sum(num1 , num2);
	string bb = find_diff(num1 , num2);
	cout <<long_division(aa , 2)<<endl;
	cout <<long_division(bb , 2)<<endl;;
}	
	// cout<<aa<<" "<<bb;
	return 0;
}
// code ends here