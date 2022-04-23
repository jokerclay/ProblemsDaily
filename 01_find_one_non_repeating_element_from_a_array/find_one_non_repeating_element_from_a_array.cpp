/*
 *
 *  find_one_non_repeating_element_from_a_array
 *
 *  array = [1,2,1,2,4,5,4,5,6];
 *  
 *  they can only repeat in pairs
 *
 *
 */

/*
 *  1. using a nested loop 
 *
 *  To check the status of visited elements create a array of size n.
 *
 *  Run a loop from index 0 to n and check if (visited[i]==1) then skip that element.
 *
 *  Otherwise create a variable count = 1 to keep the count of frequency.
 *
 *  Run a loop from index i+1 to n
 *
 *  Check if(arr[i]==arr[j]), then increment the count by 1 and set visited[j]=1.
 *
 *  After complete iteration of inner for loop check if(count==1), then print that ith element.
 *
 */ 

#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main() {

    int arr[] = {10, 30, 10, 20, 40, 20, 50, 10, 10}; 

    int n = sizeof(arr)/sizeof(arr[0]); 

    int visited[n] =0;

    for(int i=0; i<n; i++){

        if(visited[i]!=1){
           int count = 1;
           for(int j=i+1; j<n; j++){
              if(arr[i]==arr[j]){
                 count++;
                 visited[j]=1;
              }
            }
            if(count==1)
             cout<<arr[i]<<" ";
         }
     }

    return 0;
}










