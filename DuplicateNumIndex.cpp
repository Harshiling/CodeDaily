#include<bits/stdc++.h>
using namespace std;

int main() {

    int temp = 0;
    count = 0;
    int arr[6] = {1,4,5,1,1};
    for(int i = 0 ; i <= 6 ; ++i) {
        temp = arr[i];
        if(temp == arr[i+1]) {
            ++count;
        }
        }
    }
    cout << temp <<'\n';
}