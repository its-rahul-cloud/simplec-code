#include<iostream>


using namespace std;
int fibo(int n)
{

    int a=0;
    int b=1;
    int c;
 if(n>3){
    for(int i=2;i<=n-1;i++)
    {
        c=a+b;
        a=b;
        b=c;

    }
    return c%10;
 }
 else{
     
     if(n==2 || n==3)
     return 1;
     
     else

     return 0;
     }
}

 int main()
 {
     int n;
     cin>>n;
     cout<<fibo(n);
     return 0;
 }