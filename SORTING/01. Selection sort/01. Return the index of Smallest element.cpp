#include<iostream>
using namespace std;

int smallestElement(int arr[], int n){
	int index = 0;	
	for(int i=1; i<n; i++){
		if(arr[i]<arr[index]){
			index = i;
		}
	}
	return index;
}


int main(){
	
//	return the index of smallest element in array

	int arr[] = {8, 10, 4, 7, 9, 12, 3, 26, 14};
	int size = sizeof(arr)/sizeof(arr[0]);
	cout<<smallestElement(arr, size);
	
	return 0;
}
