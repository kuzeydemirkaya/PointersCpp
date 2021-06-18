
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    
    int i=12;
    int *pi;
    
    pi=&i;
    *pi=56;
        
    cout<<*pi;
    cout<<i;
        
    int x;
    srand(time(NULL));
    x=rand()%10+1;
    cout<<x<<endl;
    
    cout<<rand()%10+1<<endl;

    int dizi[]={3,4,5};
    int *p1;
    p1=&dizi[0];
    cout<<"1. veri: "<<*p1<<endl;
 
}

