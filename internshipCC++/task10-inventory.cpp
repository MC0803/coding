#include<iostream>
using namespace std;

struct student{
    int id;
    string name;
    string course;
    int age;
};

int main(){
   int n,i,searchid,j=0;
   string searchn;
   cout<<"Enter number of students: "<<endl;
   cin>>n;
   student s[n];
   for(i=0;i<n;i++){
     cout<<"Enter id: "<<endl;
     cin>>s[i].id;
      cout<<"Enter name: "<<endl;
      cin>>s[i].name;
      cout<<"Enter course: "<<endl;
      cin>>s[i].course;
      cout<<"Enter age: "<<endl;
      cin>>s[i].age; 
   } 
   cout<<"to search student by name enter 1 or by id enter 2: "<<endl;
 cin>>j;
 if(j==1){
      cout<<"Enter name to search: "<<endl;
      cin>>searchn;
       for(i=0;i<n;i++){
        if(s[i].name==searchn){
        cout<<"Id: "<<s[i].id<<endl;
        cout<<"Name: "<<s[i].name<<endl;
        cout<<"Course: "<<s[i].course<<endl;
        cout<<"Age: "<<s[i].age<<endl;
         }
      }
    }else if(j==2){
      cout<<"Enter id to search: "<<endl;
      cin>>searchid;
      for(i=0;i<n;i++){
        if(s[i].id==searchid){
            cout<<"Id: "<<s[i].id<<endl;
            cout<<"Name: "<<s[i].name<<endl;
            cout<<"Course: "<<s[i].course<<endl;
            cout<<"Age: "<<s[i].age<<endl;
          }
      }
    }else{
        cout<<"Invalid input"<<endl;
    }
    return 0;
}