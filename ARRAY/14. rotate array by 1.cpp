#include<iostream>
using namespace std;
int main(){
//	rotate array by 1(clockwise)
	int arr[] = {1,2,3,4,5,8};
	int n = sizeof(arr)/sizeof(arr[0]);
	int temp = arr[n-1];
	
	for(int i=n-2; i>=0; i--){
		arr[i+1] = arr[i];
	}
	arr[0] = temp;
	
//	print the rotated array
	for(int i=0; i<n; i++){
		cout<<arr[i];
	}
	
	return 0;
}
