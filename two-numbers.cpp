#include <iostream>
using namespace std;

void sumtwo(int arr[],int n,int target){
	bool find = false;
	for (int f=0;f<n-1;f++){
		for(int s=0;s<n-f-1;s++){
			if((arr[f]+arr[s])==target){
				cout<<"your value is found in the index of "<<arr[f]<<" "<<arr[s]<<"\n";
				find = true;
			}
		}
	}
	if(find == false){
		cout<<"sorry your peirs which make the "<<target<<" is not found ";
	}
}
	

int main(){
	int arr[] = {2, 4, 7, 11, 15};
	int n = sizeof (arr)/sizeof (arr[0]);
	int target = 11;
	
	sumtwo(arr,n,target);
	
}

