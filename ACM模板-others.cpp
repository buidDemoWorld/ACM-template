//Problem:
//Date:
//Skill:
//Bug:
/////////////////////////////////////////Definations/////////////////////////////////////////////////
//ѭ������
#define CLR(a) memset((a),0,sizeof(a))
#define F(i,a,b) for(int i=a;i<=int(b);++i)
#define F2(i,a,b) for(int i=a;i>=int(b);--i)
#define RE(i,n)  for(int i=0;i<int(n);i++)
#define RE2(i,n) for(int i=1;i<=int(n);i++)
//�������
//#define INC(c) do{scanf("%c",&c);}while(isspace(c))
//#define ON cout<<endl
#define PII pair<int,int>
using namespace std;
const int inf = 0x3f3f3f3f;
const long long llinf = 0x3f3f3f3f3f3f3f3f;
////////////////////////////////////////Options//////////////////////////////////////////////////////
typedef long long ll;
#define PLL pair<ll,ll>
#define stdcpph
#define CPP_IO

#ifdef stdcpph
#include<bits/stdc++.h>
#else
#include<ctype.h>
#include<string.h>
#include<math.h>
#include<vector>
#include<map>
#include<algorithm>
#include<functional>
#ifdef CPP_IO
#include<iostream>
#include<iomanip>
#include<string>
#else
#include<stdio.h>
#endif
#endif
////////////////////////////////////////Basic Functions//////////////////////////////////////////////
template<typename INint>
inline void IN(INint &x)
{
	x = 0; int f = 1; char c; cin.get(c);
	while (c<'0' || c>'9') { if (c == '-')f = -1; cin.get(c); }
	while (c >= '0'&&c <= '9') { x = x * 10 + c - '0'; cin.get(c); }
	x *= f;
}
template<typename INint>
inline void OUT(INint x)
{
	if (x > 9)OUT(x / 10);
	cout.put(x % 10 + '0');
}
////////////////////////////////////////Added Functions//////////////////////////////////////////////
const int maxn = int(1);
ll n, a, b;
struct cmp
{
	bool operator()(const PLL a,const PLL b)const 
	{
		if (a.first != b.first)return a.first < b.first;
		else return a.second <= b.second;
	}
};

////////////////////////////////////////////Code/////////////////////////////////////////////////////
int main()
{
	//freopen("C:\\Users\\VULCAN\\Desktop\\data.in", "r", stdin);
	int T(1), times(0);
#ifdef CPP_IO// CPP_IO
	std::ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//cin >> T;
#else
	//IN(T);
#endif 
	/////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////
	return 0;
}
