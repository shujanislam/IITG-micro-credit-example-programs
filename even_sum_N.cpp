#include<iostream>

using namespace std;

int main(){
	int num, i;
	int sum = 0;

	cout<<"Enter a number: ";
	cin>>num;

	for(i = 1; i <= num; i++){
		if(i % 2 == 0){
			sum = sum + i;
		}
	}

	cout<<"Sum of all even numbers: "<<sum<<endl;
}
