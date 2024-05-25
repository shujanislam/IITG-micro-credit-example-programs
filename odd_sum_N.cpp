#include<iostream>

using namespace std;

int main(){
	int num, i;
	int sum = 0;

	cout<<"Enter a number: ";
	cin>>num;

	for(i = 2; i <= num; i++){
		if(i % 2 == 1){
			sum = sum + i;
		}
	}

	cout<<"Sum of odd numbers: "<<sum<<endl;
}
