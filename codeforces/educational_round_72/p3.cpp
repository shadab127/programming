/**
 * @Author: shadabKhan
 * @Date:   Monday, September 9th 2019, 1:27:00 am
 * @Last modified by:   shadabKhan
 * @Last modified time: Monday, September 9th 2019, 2:00:32 am
 */



#include <bits/stdc++.h>

using namespace std;

const int N = int(3e5) + 99;

int t;
string s;
int nxt[N];

int main() {
	cin >> t;
	for(int tc = 0; tc < t; ++tc){
		cin >> s;
		for(int i = 0; i < s.size(); ++i)
			if(s[i] == '1') nxt[i] = i;
			else nxt[i] = (i == 0? -1 : nxt[i - 1]);
		int res = 0;
		for(int r = 0; r < s.size(); ++r){
			int sum = 0;
			for(int l = r; l >= 0 && r - l < 20; --l){
				if(s[l] == '0') continue;
				sum += 1 << (r - l);
				if(sum <= r - (l == 0? -1 : nxt[l - 1]))
					++res;
			}
		}
		cout << res << endl;
	}

	return 0;
}
