#include<iostream>
#include<vector>
using namespace std;
int findDuplicate(vector<int> &arr) 
{
    int ans = 0;
    
    //XOR ing all array elements
    for(int i = 0; i<arr.size(); i++ ) {
    	ans = ans^arr[i];
    }
	
    //XOR [1, n-1]
    for(int i = 1; i<arr.size();i++ ) {
    	ans = ans^i;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int arr[10];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

     findDuplicate(arr);
   
}