#include<iostream>
using namespace std;
int main(){
   
    int arr[5]={1,2,3,40,5};
  
    
    for(int i=0; i<5; i++){

       cout << arr[i] << " ";
    }
      cout<<endl;

      int lar = arr[0];
    
    for(int i =0; i<5; i++){

           if(arr[i]>lar) lar=arr[i];

        
       }
       cout<< "largest number :"<<lar<<endl;

       return 0;

    }






  