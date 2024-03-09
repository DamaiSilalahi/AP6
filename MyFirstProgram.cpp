#include <iostream>
#include<iomanip>
using namespace std;

int main ()
{
    string nama;
    int nim;
    char kom;
    float ip;
    
    system("CLS");
    
    cout<<"hello World"<<endl;
    
    cout<<"masukkan nama : ";
   //cin>> nama;
   getline(cin,nama);
   
    cout<<"masukkan nim : ";
    cin>> nim;
    
    cout<<"masukkan kom : ";
    cin>> kom;
    
    cout<<"masukkan ip : ";
    cin>> ip;
    
    cout<< " nama : "<< nama <<endl;
    cout<< " nim : "<< nim <<endl;
    cout<< " kom : "<< kom <<endl;
    cout<<fixed;
    cout<<setprecision(2);
    cout<< " ip : "<< ip <<endl;
    return 0;
}
