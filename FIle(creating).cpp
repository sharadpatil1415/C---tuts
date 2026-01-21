#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream ind ("hello.txt");
    ind <<"Hello Wolrd!"<<endl;
     ind <<"Hello Wolrd!"<<endl;
    ind.close();


    //To check file is close or not 


    if(ind.is_open()){
        cout<<"file is open";
    } else{
             cout<<"file is close";
    }

    return 0;
}