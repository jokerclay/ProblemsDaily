#include <iostream>
#include <vector>   // vector
#include <cmath>    // max
#include <time.h>   // srand, rand

using namespace std;

void print_vector(vector<int> &v) {
    printf("[");
    for (int i = 0; i < v.size(); i++) {
        printf("%d ", v[i]);
    }
    printf("]\n");
}

int bin_gap (int N) {

    vector<int> v;

    // 将数字转换成二进制
    while (N>0) {
        v.push_back(N%2);
        N/=2;
    }

    // 打印出随机的 vector，方便调试
    print_vector(v);

    int gap = 0;
    int max_gap = 0;

    for (int i = v.size() - 1; i>=0; i-- ) {

       if (v[i] == 0) gap++;

        else if (v[i] == 1) {
            max_gap = max(max_gap, gap);
            gap = 0;
        }
    }

    return max_gap;
}


int main () {

    srand(time(0));

    // 获取 0 ~ 100 随机值 N
    int N = rand()%100;
    printf("random N is: %d \n",N);

    // 获取 result
    int res = bin_gap(N);
    printf("\n");
    printf("the max gap is  %d \n",res);

    return 0;
}

