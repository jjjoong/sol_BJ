#include<iostream>

using namespace std;

long long fact(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return n * fact(n - 1);
}

int main(void)
{
    int n;
    cin >> n;
    
    cout << fact(n) << "\n";
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
