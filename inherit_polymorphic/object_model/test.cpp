#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int* b = &a;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    return 0;
}
