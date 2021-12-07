#include <iostream>
#include "lib.h"
using namespace std;
int main(){
int dim=0;
cin>> dim;
float array[dim];
inizia(array,dim);
cout<<maggiore(array,dim);
return 0;
}
