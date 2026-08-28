#include <iostream>
using namespace std;

void assending(int arr[],int n){
	
	
	for (int a=0;a<n-1;a++){
		for(int b=0;b<n-a-1;b++){
			if (arr[b]>arr[b+1]){
				int temp = arr[b];
				arr[b]=arr[b+1];
				arr[b+1]=temp;
			}
		}
	}
	
}

int main(){
 int arr[] = {5, 6, 8, 2, 4, 9};
 int n = sizeof (arr)/sizeof (arr[0]);
 

assending(arr,n);
	for(int l=0;l<n;l++){
		cout<<arr[l]<<", ";
	}


}
