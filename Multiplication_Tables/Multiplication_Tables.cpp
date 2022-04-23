#include <iostream>

using namespace std;

int main() {

    // 输入两个数
    int n = 0;
    int m = 0;
    cin >> n >> m;

    int n_count = 1;

    while(n_count <= n) {
        int m_count = 1;
        while(m_count <= m) {
            cout << n_count << "*" << m_count << "=" << n_count*m_count <<"\n";
            m_count++;
        }
        n_count++;
        printf("\n");

    }

    return 0;
}



