#include<iostream>
using namespace std;

class demo
{
    public:
    inline int add(int no1,int no2)
    {
        int ans=0;
        ans=no1+no2;
        return ans;
    }
};

int main()
{
    demo obj;
    cout<<sizeof(obj)<<"\n";      // 1      //because no characteristics in the program
    int ret=0;

    ret=obj.add(11,10);

    cout<<ret<<"\n";     //21

    return 0;
}
