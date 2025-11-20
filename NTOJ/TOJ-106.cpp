#include <iostream>
#include <string>
using namespace std;

int main(){
    int n = 2;
    bool right = false;

    while(n % 71 != 0){
        n = n * 2 + 1;

        if(n % 3 == 0)
            right = true;
        else
            right = false;
    }

    if(right) cout << "right";
    else      cout << "left";

    return 0;
}
