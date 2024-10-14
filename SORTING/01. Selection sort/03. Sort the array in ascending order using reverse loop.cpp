#include<iostream>
using namespace std;
int main(){
//	sort the element in ascending using the reverse loop
	int arr[] = {10, 8, 9, 5, 3, 4, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0; i<n-1; i++){
		for(int j=n-1; j>=0; j--){
			if(arr[i]>arr[j]){
				swap(arr[i], arr[j]);
			}
		}
	}
	
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
