#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n =0;
	scanf("%d",&n);
	int N = n;
	int dp[20][10][10] = {0};
	int grid[10][10] = {0};
	
	while (1){
		int x,y,val;
		cin>>x>>y>>val;
		if(x ==0 && y==0&&val == 0) break;
		grid[x][y] = val;
	}

		dp[2][1][1] = grid[1][1];
	
	for(int s = 2; s <= 2*N; s++){
		for(int i = 1; i <= N ; i++){
			for(int k = 1; k <= N ; k++){
				int j = s-i;
				int l = s-k;
				
				if(j<1||j>N||l<1||l>N) continue;
				
				int val;
				if(i == k && j ==l){
					val = grid[i][j];
				}
				else{
					val = grid[i][j] + grid[k][l];
				}
				
				dp[s][i][k] = max({
					dp[s-1][i-1][k-1],
					dp[s-1][i-1][k],
					dp[s-1][i][k-1],
					dp[s-1][i][k]
				}) + val;
			}
		}
	}
	cout << dp[2*N][N][N] << endl;
	return 0;
}
