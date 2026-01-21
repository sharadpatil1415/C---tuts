#include<iostream>
using namespace std;
int main(){

    struct book
    {  
        string name;
        float price;
        string category;
        
    };

    book b1;
    b1.name = "do epic shit";
    b1.category= "self help";
    b1.price= 300.34f;

    cout<< b1.name<<endl<<b1.category<<endl<<b1.price<<endl;
    

    return 0;
}