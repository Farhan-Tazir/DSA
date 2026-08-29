#include <iostream>
using namespace std;

int sum(int n){
	
	if(n==0|| n==1){
		return s;
	}
	else{
		int s = 0;
		s +=sum(n-1);
		return sum;
	}
	
		
}

int main(){
	int n;
	
	cout<<"Enter a number :";
	cin>>n;
	
	cout<<"your sum of the number till '0' is "<<sum(n);

}