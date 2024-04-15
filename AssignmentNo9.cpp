#include <iostream>
using namespace std;
class Employee
{
    int id; 
    static int count;  
    public:

    void setData(void){
        cout<<"Enter Your ID  "<<'\n';
        cin>>id;
        count++;
        }
        void getData(void){
            cout<<"Your ID is = "<<id<<"This Is Employee No = "<<count<<'\n'; 
        }
};  

int Employee :: count = 0;

int main() 
{

    Employee Samreen,Kiran;
    Samreen.setData();
    Samreen.getData();

    Kiran.setData();
    Kiran.getData();

    Samreen.setData();
    Samreen.getData();
    return 0;
}
