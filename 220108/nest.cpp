#include <iostream>
#include <vector>

using namespace std;

// 打印出 vector 中的 每个元素
void print_vector(vector<int> &v){
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

void print_vector(vector<string> &v){
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}


int main() {
    
    vector<int> v1;
    print_vector(v1);
    cout << "The size of v1  vector is : " << v1.size() << endl;

    vector<int> v2(10);
    print_vector(v2);
    cout << "The size of v2  vector is : " << v2.size() << endl;

    vector<int> v3(10,2);
    print_vector(v3);
    cout << "The size of v3  vector is : " << v3.size() << endl;


    vector<string> v4;
    v4.push_back("abc");
    v4.push_back("cde");
    v4.push_back("fgh");
    print_vector(v4);

    cout << v4[2][2] << endl;

    cout << "The size of v4  vector is : " << v4.size() << endl;

    return 0;
}

