#include <iostream>
using namespace std;

int main ()
{
    
    int a,b;
    cout<<"Enter the range"<<endl;
    cin >>a>>b;
    cout<<"the prime numbers are"<<endl;
    for (int num=a;num<=b;num++)
    {
        int i;
        for(i=2;i<num;i++)
        {
            if (num%i==0)
            {
                break;
            }
            
        }
        if (i==num)
        {
            cout<<num<<endl;
        }
        
    }
    
    
    return 0;
}
