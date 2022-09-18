#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
#define MAX_OP 20
#define RANGE 8


using namespace std;


void print_out(vector<int> &V){
    for (long int unsigned i = 0; i < V.size(); ++i) {
        printf("%d ", V[i]);
    }
    printf("\n");
}

int remove_dipluicates_from_sorted_array(vector<int> &V) {

    // WRITE YOUR CODE HERE ...

    int conut = 0;
    int length = V.size();

    for (int i = 1; i< length; ++i) {
        if (V[i] == V[i - 1]) conut++;
        else(V[i - conut] = V[i]);
    }
    return length - conut;
 }




int main(void){
    srand(time(0));
    vector<int>  V;
    for (int i= 0; i < MAX_OP; i++) {
        V.push_back(rand() % RANGE);
    }
    // sort it 
    sort(V.begin(), V.end());
    print_out(V);

    int res = remove_dipluicates_from_sorted_array(V);
    printf("%d\n", res);

    for (int i = 0; i < res; ++i) {
        printf("%d ", V[i]);
    }
    printf("\n");


    return 0;
}






