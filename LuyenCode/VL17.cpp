#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    if (n < 0) n = -n;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0) cnt++;
    cout << cnt;
    return 0;
}
