#include <iostream>
#include <cstdio>
using namespace std;

int main() 
{
    // Complete the code.
    int i,b,c;
    
    string a[11]={"even","odd","one","two","three","four","five","six","seven","eight","nine"};
   
    cin>>b>>c;
    
    for(i=b;i<=c;i++)
    {
        if((i>9) && (i%2==0))  
            cout<<a[0]<<endl;
        
        else if((i>9) && (i%2!=0)) 
            cout<<a[1]<<endl;
        
        else    
            cout<<a[i+1]<<endl;
    }

    return 0;
}


