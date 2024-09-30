#include<iostream>
using namespace std;

void fun(int arr[], int n){
	cout<<sizeof(arr)<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i];
	}
}

int main(){
	int arr[] = {1,2,3,4,5};
	cout<<sizeof(arr)<<endl;
	fun(arr, 5);
	
	return 0;
}
