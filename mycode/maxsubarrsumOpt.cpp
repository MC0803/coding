#include<iostream>
using namespace std;

int maxsubarr(int arr[],int n){
    int maxSum=INT16_MIN; // Initialize to the smallest possible integer
    for(int start=0;start<n;start++){
        int currsum=0;
        for(int end=start;end<n;end++){
            currsum+=arr[end]; //instead of adding same values repeatedly.We add another element to already
           cout<<currsum<<" "; // calculated value of elements till that point.
           maxSum=max( maxSum,currsum );
        }
        cout<<endl;
    }
    return maxSum;

}

int main(){
    int arr[5]={2,-3,6,-5,2};
    int n=sizeof(arr)/sizeof(int);
   cout<<"Maximum sum of subarray possible = "<<maxsubarr(arr,n);
    return 0;
}