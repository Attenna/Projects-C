//Luogu P3764 author: OrientDragon
#include<bits/stdc++.h>
#define int unsigned long long
using namespace std;
inline int solve(int n){//代码在这里 
	function<int(int,int,int)>f=[](int l,int k,int n){
		function<int(int,int)>od=[](int x,int y){
			//[x,y]中有多少个奇数，选用大模拟O(1)处理
			if((y-x+1)&1&&x&1)return((y-x+1)>>1)+1;
			else return(y-x+1)>>1;
		};
		//log数论分块
		int ret=0,r=0,tmp=0;
		for(;l<=k;l=r+1){//O(log(n))
			tmp=log2(l);
			r=min((1ull<<(tmp+1))-1,k);
			tmp*=n/l;
			ret+=tmp*od(l,r);//核心 
		}
		return ret;
	};
	//一般数论分块模板
	int ans=0,l=1,r=0;
	for(;l<=n;l=r+1){//O(sqrt(n))
		r=n/(n/l);
		ans+=f(l,r,n);//这里是用于处理log的区间和 
	}
	return ans<<1;
}main(){int n;cin>>n;cout<<solve(n);}

