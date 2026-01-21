#include <iostream>
#include <fstream>
using namespace std;
int main()
{
     ifstream ind ("hello.txt");
     string nd;
      getline(ind,nd); //read file line by line 
      ind >> nd; // read only first word 
     while (getline(ind,nd)){
         
        cout << nd <<endl;

     }                       //to read whole file 
      cout << nd;

     ind.close();



    

    return 0;
}