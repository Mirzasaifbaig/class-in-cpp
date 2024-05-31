#include<iostream>
using namespace std;
class labour{  
    int id;
 int salary;
    public:
    void setid(void){
        salary=23;
        cout<<"the id of labour is"<<endl;
        cin>>id;
    }
    void getid(void){
        cout<< "the id of labour id "<<id<<endl;


    }


};
int main(){
    labour darbar[4];
    for (int i = 0; i < 4; i++)
    {
        darbar[i].setid();
        darbar[i].getid();
    }
    
    return 0;
}