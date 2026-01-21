#include<iostream>
using namespace std;
int main(){

    int a[5];
    for (int i = 1; i < 5; i++)
    {
        cout<< "enter a number" <<i<< ":" ; 
        cin>>a[i];    
        cout<<endl;
    }
    

    cout<<"you have entered:";
    for(int i =1; i<5; i++)
    {
        cout<<" "<<a[i];
    }
    
    
    
    
    




    return 0;
}