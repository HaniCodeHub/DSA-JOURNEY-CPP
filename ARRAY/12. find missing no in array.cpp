#include<iostream>
using namespace std;
int main(){
//	find missing no. in array
	int arr[] = {1,3,4,5,6};
	int size = sizeof(arr)/sizeof(arr[0]);
	int n = size + 1;
	
	int sum = 0;
	for(int i=0; i<size; i++){
		sum += arr[i];
	}
	
	int ans = n*(n+1)/2;
	sum = ans - sum;
	
	cout<<"Missing number is "<<sum;
	
		
	return 0;
}
