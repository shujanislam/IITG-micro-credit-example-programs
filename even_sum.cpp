#include<iostream>

using namespace std;

int main(){
	int i, j;	

	for(i = 1; i <= 4; i++){
		int sum = 0;
		for(j = 1; j <= i; j++){
			if(j % 2 == 0){
				sum += j;
			}
		}

		cout<<sum<<endl;
	}
}
