#include<iostream>
using namespace std;
int main()
{
    int i,x,a,x1,c,m,n;
    float s,d,f,g=17;

    cout<<"Value of a :"<<endl;
    cin>>a;
    cout<< "Value of x0:  "<<endl;
    cin>>x;
    cout<< "Value of c : "<<endl;
    cin>>c;
    cout<< "Value of m:   "<<endl;
    cin>>m;



    cout<< "Generating numbers:\n"<<endl;
    for(i=1; i<500 ; ++i)
    {
        x1=((a*x)+c)%m;
        if(i==1)
        {
            n=x1;
            x=x1;
            s=(float)x1;
        }
        else
        {
            x=x1;
            s=(float)x1;
            if(x1==n)
                break;
        }
        f=(float)m;
        d=s/f;

        cout<<"x"<<i<<" ="<<x1<<endl;
        cout<<"U"<<i<<" ="<<d<<endl<<endl;

    }
}
