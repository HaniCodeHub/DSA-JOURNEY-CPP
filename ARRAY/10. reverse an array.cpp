#include<iostream>
using namespace std;
int main(){
	int arr[5] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int i = n-1, j = 0;
//	reverse an array
//	1st approach
	/*int temp[n];
	
	while(i>=0){
		temp[j] = arr[i];
		j++;
		i--;
	}
	for(int i = 0; i<5; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(int i = 0; i<5; i++){
		cout<<temp[i]<<" ";
	}*/




//	2nd approach
	for(int i = 0; i<5; i++){
		cout<<arr[i]<<" ";
	}
	
	while(i>j){
		swap(arr[i], arr[j]);
		j++;
		i--;
	}
	cout<<endl;
	for(int i = 0; i<5; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
