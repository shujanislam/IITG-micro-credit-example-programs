#include<iostream>

using namespace std;

int main(){
	int i, j;
	
	int sum = 1;
	for(i = 1; i <= 3; i++){
		for(j = 1; j <= 3; j++){
			cout<<sum;
			sum++;
		}	
		cout<<endl;
	}
}
