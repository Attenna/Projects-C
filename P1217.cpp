#include <iostream>
#include <cstdio>
using namespace std;

int array[10000];

void is_prime_number(int a){
	int is_prime = 1;
	for(int j = 3; j*j <= a; j++){
		if(a%j ==0){
			is_prime =0;
			break;
		}
	}
	if(is_prime == 1){
		cout << a << endl;
	}
}


void summoning(int a,int b){
	for(int i = 1; i < 10000; i+=2){
		array[i] = 
	}
}

int main (){
	int a,b = 0;
	cin>>a>>b;
	
}
