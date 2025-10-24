#include<bits/stdc++.h>
using namespace std;
long long fibonacci(long long n)
{
    if(n==1) return 0;
    if(n==2) return 1;
     return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    long long n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}