#include <iostream>
#include <cstdio>
using namespace std;

int main() 
{
    // Complete the code.

    int a; long b; char c; float d; double e;

    /*int a; long b; char c; float d; double e;
    
    scanf("%i %li %c %f %lf",&a,&b,&c,&d,&e);
    printf("%i\n%li\n%c\n%.03f\n%.09lf\n",a,b,c,d,e);
    
    return 0;*/

    cin>>a>>b>>c>>d>>e;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout.precision(3);
    cout<<fixed<<d<<endl;
    cout.precision(9);
    cout<<fixed<<e<<endl;
    
    return 0;
}