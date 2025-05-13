#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void swapasc(int *a,int n);
void swapdesc(int *a,int n);

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s); 
if (s.empty()) {
        cout << "Empty string" << endl;
        return 0; 
    }
 int a[100]; 
    int c = s.length();
    for (int i = 0; i < c; i++) {
        a[i] = s[i];
    }
    cout << "Enter 1 for ascending order or 2 for descending order: ";
    int choice;
    cin>>choice;
    if(choice!=1 && choice!=2){
        cout << "Invalid choice" << endl;
        return 0; 
    }
    else if(choice==1){
        swapasc(a,c);
    }
    else{
        swapdesc(a,c);
    }
    for (int i = 0; i < c; i++) {
        cout << static_cast<char>(a[i]) << " ";  
    }
    cout << endl; 
    return 0;
}

void swapasc(int *a,int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
         if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
         }
        }
    }
}
void swapdesc(int *a,int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
         if(a[j]<a[j+1]){
            swap(a[j],a[j+1]);
         }
        }
    }
}