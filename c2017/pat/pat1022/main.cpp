#include <iostream>

using namespace std;

int main()
{
    int A, B, D;
    cin >> A >> B >> D;
    int sum = A + B;
    int a[32] = {0};
    int i;
    int cnt = 0;
    for(i = 0; i < 32; i++){
        if(sum >= D) cnt++;
        a[i] = sum % D;
        sum = sum / D;
    }
    for(i = cnt; i >= 0; i--){
      cout << a[i];
    }
    return 0;
}
