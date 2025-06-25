#include<iostream>
using namespace std;

/* Kadne's checks and replaces sum of subarry only when it is larger than 0
i.e. if a -ve num is there then it obv won't help if finding max number,so we change it to 0 
and move on*/

int maxsubarr(int arr[],int n){
    int maxSum=INT16_MIN;  // Initialize to the smallest possible integer
    int currsum=0;
    for(int i=0;i<n;i++){
      currsum+=arr[i];
      maxSum= max(maxSum,currsum);
      if(currsum<0) currsum=0; // Reset current sum if it becomes negative
    }
    return maxSum;

}

int main(){
    int arr[5]={2,-3,6,-5,2};
    int n=sizeof(arr)/sizeof(int);
   cout<<"Maximum sum of subarray possible = "<<maxsubarr(arr,n);
    return 0;
}