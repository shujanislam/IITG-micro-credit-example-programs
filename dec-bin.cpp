#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> binary;
	int x;
	int remainder;
	
	cout<<"Enter any number: ";
	cin>>x;
	
	cout<<"Your Number: "<<x<<endl;

	remainder = x % 2;

	binary.insert(binary.begin(), remainder);

	while(x / 2 >= 1 ){
		x = x / 2;
		remainder = x % 2;
		binary.insert(binary.begin(), remainder);
	}
	
	cout<<"Binary Number: ";
	for(int i : binary){
		cout<<i;
	}
	cout<<endl;
	
}
