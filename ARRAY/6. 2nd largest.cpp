#include<iostream>
using namespace std;
int main(){
//	Find the second largest element in an array of unique elements of size n. Where n>3
	
	int arr[] = {1,2,4,5,6,3,10,20};
	int first, second;
	first = second = INT_MIN;
	int n = sizeof(arr)/sizeof(arr[0]);
//	1st approach
//	largest element
	/*for(int i=0; i<n; i++){
		if(first<arr[i]){
			first = arr[i];
		}
	}
	cout<<"Fist largest: "<<n<<endl;
	
//	second largest element
	for(int i=0; i<n; i++){
		if(arr[i]>second && arr[i] != n){
			second = arr[i];
		}
	}
	cout<<"Second largest: "<<second;*/
	

//	2nd approach
	for(int i=0; i<n; i++){
		first = max(first, arr[i]);
	}
	cout<<"Fist largest: "<<n<<endl;
	
	for(int i=0; i<n; i++){
		if(arr[i]>second && arr[i] != n){
			second = arr[i];
		}
	}
	cout<<"Second largest: "<<second;
	

	return 0;
}
