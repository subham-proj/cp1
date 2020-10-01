#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define f(i,a,b) for(ll i=a;i<b;i++)
#define rf(i,a,b) for(ll i=a;i>=b;i--)
#define rep(i,n) f(i,0,n)
#define rrep(i,n) rf(i,n-1,0)
#define w(t) ll t; cin>>t; while(t--)
#define vi vector<ll>
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define mii map<ll,ll>
#define mci map<char,ll>
using namespace std;

void fast_IO_file()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main()
{
	fast_IO_file();

	int flag = 0;
	string s, c = "";
	cin >> s;

	int n = s.length();

	rep(i, n)
	{


		if (i < n - 2 && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
		{


			if (flag != 1)
			{
				c += ' ';

			}

			i += 2;

			flag = 1;
		}
		else
		{
			flag = 0;
			c += s[i];
		}
	}
	int d = 0;

	if (c[0] == ' ')
		d = 1;


	f(i, d, c.length())
	cout << c[i];


	return 0;
}