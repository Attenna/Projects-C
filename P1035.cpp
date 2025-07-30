#include <iostream>

using namespace std;
int main(){
	int k, ans = 0;
	cin >> k;
	for (double Sn = 0; Sn <= k; ans++, Sn += 1.0/ans);
	cout << ans;
	return 0;
}
