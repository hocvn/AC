#include <iostream>
using namespace std;

int main(){

    int n;
    long long gt = 1;
    cin >> n;
    for (int i = 2; i <= n; i++)
        gt *= i;
    cout << gt;
    return 0;
}
