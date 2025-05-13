#include<iostream>
#include<random>
#include<ctime>
using namespace std;

int main(){
mt19937 gen(static_cast<unsigned int>(time(0)));
uniform_int_distribution<> dist(1,100);

int guess = dist(gen);
int num;

cout<<"Guess a  number between 1 and 100: ";
cin>>num;
do{
if(num<guess){
    cout<<"Guess is lower than number "<<endl;
}
else{
    cout<<"Guess is higher than number "<<endl;
}
    cout << "Guess a number between 1 and 100: ";
    cin >> num;
    if(num == guess){
        cout<<"You guessed it right!"<<endl;
    }
} while (num != guess);
return 0;

}