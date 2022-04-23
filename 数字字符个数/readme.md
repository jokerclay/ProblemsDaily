# 统计并输出一行文字中数字字符的个数。

输入格式
输入保证由可打印的 ASCII 字符组成，有且仅有一行（保证没有 \n, \r），以换行（\n）结束。

对于前  的数据，输入文件不超过 1KB。

对于  的数据，输入文件不超过 10MB。

样例
input
EOJ2017!
output
4

# CODE
```C++
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str.at(i)>=48&&str.at(i)<=57){
            count++;
        }
    }

    cout<<count;

    return 0;
}
```

```txt
 ./solution
hafsaiowefhiao41894196
8
```
