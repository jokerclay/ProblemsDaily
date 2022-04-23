#include <iostream>

using namespace std;

int main() {
    // 用户输入
    int n = 0;
    cin >> n;


    int row = 1;

    while(row <= n) {
        int space_count = 0;
        while(space_count < n - row) {
            cout << " ";
            space_count++;
        }
        int star_count = 0;
        while (star_count < ((2 * row) - 1)) {
            cout << "*";
            star_count++;
        }
        cout<< "\n";
        row++;
    }

    while(row--) {
        int space_count = 0;
        while(space_count < n - row) {
            cout << " ";
            space_count++;
        }
        int star_count = 0;
        while (star_count < ((2 * row) - 1)) {
            cout << "*";
            star_count++;
        }
        cout<< "\n";

    }
}
