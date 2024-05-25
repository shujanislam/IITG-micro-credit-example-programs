#include<iostream>

using namespace std;

int main(){
	int num, i;

	cout<<"Enter a number: ";
	cin>>num;

	for(i = 2; i <= num; i++){
		if(num % i != 0){
			cout<<"Prime Number";
			break;
		}
		else{
			cout<<"Not Prime Number";
			break;
		}

	}
}
