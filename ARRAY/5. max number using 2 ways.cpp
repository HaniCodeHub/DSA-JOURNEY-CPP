#include<iostream>
using namespace std;
int main(){
//	finding maximum number (2 ways)
//	1...
	int arr[5] = {4,6,8,3,7};
//	int ans = arr[0];
//	for(int i=0; i<5; i++){
//		if(ans<arr[i]){
//			ans = arr[i];
//		}
//	}	

	int ans = INT_MIN;
	for(int i=0; i<5; i++){
		if(ans<arr[i]){
			ans = arr[i];
		}
	}
	cout<<ans;
	return 0;
}
