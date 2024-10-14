#include<iostream>
using namespace std;
void descending(int arr[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(arr[j]>arr[i]){
				swap(arr[i], arr[j]);
			}
		}
	}
	
//	print the array
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[] = {10, 23, 4, 5, 6, 9, 7};
	descending(arr, sizeof(arr)/sizeof(arr[0]));
	return 0;
}
