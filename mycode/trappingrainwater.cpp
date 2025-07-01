#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int trap(vector<int>& height) {
        int h=height.size();
        if(h < 3) return 0;
        int leftmax[20000],rightmax[20000];
        leftmax[0]=height[0];
        rightmax[h-1]=height[h-1];
        int totalwater=0;
        for(int i=1; i < h; i++){
           leftmax[i]= max(leftmax[i-1],height[i-1]);
        }
        for(int i=h-2; i >= 0; i--){
           rightmax[i]= max(rightmax[i+1],height[i+1]);
        }
        for(int i=0 ; i < h; i++) {
           int current = min(leftmax[i],rightmax[i]); 
           int water = current - height[i];
           if(water>0) totalwater+=water;
        }
    return totalwater;    
}

int main(){
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << "Trapped rainwater: " << trap(height) << endl;
    return 0;
}