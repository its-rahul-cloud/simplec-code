#include<iostream>

using namespace std;
// for what is pisano __  https://en.wikipedia.org/wiki/Pisano_period
long pisano(long m)
{
    long prev = 0;
    long curr = 1;
    long res = 0;
 
    for(int i = 0; i < m * m; i++)
    {
        long temp = 0;
        temp = curr;
        curr = (prev + curr) % m;
        prev = temp;
 
        if (prev == 0 && curr == 1)
            res = i + 1;
    }
    return res;
}


int main()
{
    long m;
    cin>>m;
    cout<<pisano(m);

}