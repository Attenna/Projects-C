#include<iostream>
using namespace std;

int main(){
    int ans1;
    char ans2;
    ans1 = 'A' - 'a';
    ans2 = 'A' + 'M'-18;
    cout << 'A' + 'B' << endl;
    cout << 'A' + 'B' - 2 * 'A' << endl; // 65 + 66 - 130 = 1
    cout << ans1 << endl; // 65 - 97 = -32
    cout << ans2 << endl; // 65 + 97 = 162
}