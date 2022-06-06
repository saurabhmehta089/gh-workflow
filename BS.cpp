#include "iostream"
#include "algorithms.h"
using namespace std ;

int main(){
  int arr[] = {123,35,56,43,22} ;
  int n = sizeof(arr)/sizeof(arr[0]) ;
  for(int i =0 ; i < n - 1 - i ;i++){
    for(int j = 0 ; j < n - 1; j++){
      if(arr[j] > arr[j+1] ){
        swap(arr[j], arr[j+1]) ;
      }
    }
  }
 
return 0;
}
