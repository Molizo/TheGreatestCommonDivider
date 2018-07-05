#include <iostream>

using namespace std;

int main()
{int a,b;
    a=0;
    b=0;
    cout<<"Introduceti numarul a:";
    cin>>a;
    cout<<"Introduceti numarul b:";
    cin>>b;
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        if(b>a)
        {
            b=b-a;
        }
    }
    cout<<endl<<"CMMDC-ul este:"<<a<<endl;
    return 0;
}
