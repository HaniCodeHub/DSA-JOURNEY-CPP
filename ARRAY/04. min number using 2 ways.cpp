#include<iostream>
using namespace std;

int main(){
	
//	finding the minimum no (2 ways)
//  1...
	int arr[5] = {4,11,7,3,12};
//	int ans = arr[0];
//	for(int i=1; i<5; i++){
//		if(ans>arr[i]){
//			ans = arr[i];
//		}
//	}

//	2...
	int ans = INT_MAX;
	for(int i=0; i<5; i++){
		if(ans>arr[i]){
			ans = arr[i];
		}
	}
	
	cout<<ans;
	
	
	return 0;
}
