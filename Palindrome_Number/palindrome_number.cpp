#include <iostream>

using namespace std;

bool isPalindrome(int x) {

        // 负值，10 的倍数 一定不是  Palindrome
        if(x<0|| (x!=0 && x % 10 ==0)) return false;

        int sum=0;

        while(x>sum)

        {
            sum = sum * 10 + x % 10;

            x = x / 10;

        }

        return (x==sum) || (x == sum / 10);
    }


int main() {
    int n;

    cin >> n;

    if(isPalindrome(n)) cout << "true" << endl;

    else cout << "false" << endl;

    return 0;
}


