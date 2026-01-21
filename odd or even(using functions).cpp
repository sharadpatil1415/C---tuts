#include<iostream>
using namespace std;
int chk(int a){
    
    if (a%2==0)
    {
        cout<<"number is even";
    } 
    else
    {
        cout<<"number is odd";
    }
    

}

int main() {

      int n;

      cout<<"enter a number:";
      cin>>n;
      chk(n);
        

    return 0;
}

