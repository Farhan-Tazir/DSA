#include <iostream>
using namespace std;

pair<int,int> sumtwo(int arr[], int n, int target){
    for (int f = 0; f < n; f++){
        for (int s = f + 1; s < n; s++){
            if (arr[f] + arr[s] == target){
                return {f, s};   // ? packs f and s into a pair, and returns the box
            }
        }
    }
    return {-1, -1};   // ? "not found" signal, packed the same way
}

	

int main(){
	int arr[] = {2, 4, 7, 11, 15};
	int n = sizeof (arr)/sizeof (arr[0]);
	int target = 17;
	
	pair<int,int> result = sumtwo(arr, n, target);
	
	if (result.first == -1) {
    cout << "Not found";
} else {
    cout << "Found at indices " << result.first << ", " << result.second;
}
	
}

