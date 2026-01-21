#include<iostream>
using namespace std;
int fac(int a){
    
    if ( a ==0){
     
        return 1;
    }
    
    else {

        return a * fac(a-1);
    }

    }
int main()
    
   {

   cout<< fac(5);
              return 0;
}