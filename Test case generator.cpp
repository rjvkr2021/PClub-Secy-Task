#include<iostream>
#include<random>

using namespace std;

int main()
{
    int t;
    while(1)
    {
        t=rand();
        if(t>=1 && t<=100000)
            break;
    }
    cout << t << endl;
    while(t--)
    {
        int n;
        while(1)
        {
            n=rand();
            if(n>=-1000&&n<=1000)
                break;
        }
        cout << n << endl;
    }
    return 0;
}