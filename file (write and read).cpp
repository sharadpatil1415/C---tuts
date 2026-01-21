#include <iostream>
#include <fstream>
using namespace std;
int main(){
     fstream file;
     file.open ("file.txt", ios::out); //To write
     file << "how are you?"<<endl;
     file.close();

     file.open("file.txt", ios::in); //To read
     string s;
     file>> s;
     cout << s;
     file.close();

     file.open("file.txt", ios::app); //To Append(adds new content from end of the file )
     file<<"I,fine"<<endl;
     file.close();

     file.open("file.txt" , ios:: out | ios::trunc); //clears the file 
    
    



    return 0;
}