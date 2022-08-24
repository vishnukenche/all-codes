#include<iostream>
using namespace std;

int main()
{
    int input=0;
    //         0   1   2   3   4   5   6
    enum days{sun,mon,tue,wed,thu,fri,sat};

    enum days obj;

    obj=tue;

    cout<<obj<<"\n";
    cout<<sizeof(obj)<<"\n";

    enum gender{female=1,male=2};

    cout<<"enter your gender\n";
    cout<<"1:female\n";
    cout<<"2:male\n";
    cin>>input;

    
    switch(input)
    {
        case female:
            cout<<"tax free limit is 3,00,000";
            break;

        case male:
            cout<<"tax free limit is 2,50,0000";
            break;
        
        default:
            cout<<"invalid gender\n";
            break;   
    }

    return 0;
}