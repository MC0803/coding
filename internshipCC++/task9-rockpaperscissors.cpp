#include<iostream>
#include<random>
#include<ctime>
using namespace std;

int main(){
    mt19937 gen(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<> dist(1,3);
    
   int user,c=0;
   cout<<"Enter 1 for Rock, 2 for Paper, 3 for Scissors: "<<endl;
   cin>>user;
   if(user<1 || user >3){
    cout<<"Invalid input"<<endl;
   }
   do{
    int com = dist(gen);
    if((user==1 && com==3) || (user ==2 && com == 1) ||  (user ==3 && com==2)){
        cout<<"You win "<<endl;
        cout<<"Computer chose "<<com<<endl;
        c++;
     }
    else{
        cout<<"Computer chose "<<com<<endl;
        cout<<"You loose this time"<<endl;
    }
    if(user==com){
        cout<<"Its a tie"<<endl;
    }
    if(c==0){
    cout<<"Enter 1 for Rock, 2 for Paper, 3 for Scissors: "<<endl;
    cin>>user;
    cout<<"Enter 1 to end game or 0 to continue: "<<endl;
    cin>>c;
    }
   }while(c==0);

}