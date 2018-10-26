#include <iostream>

using namespace std;

void camb(int *xp, int *yp){
int tem=*xp;
*xp=*yp;
*yp=tem;
}

bool ascendente (int i, int j){
return i>j;
}
bool descendente (int i, int j){
return j<i;
}

void burbuja(int arr[], int n, bool (*fp)(int, int)){
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1;j++){
        if((*fp)(arr[j],arr[j+1])){
            camb(&arr[j],&arr[j+1]);
  }  }
}



}


int main()
{
    int arr[5]={1,6,4,2,6};
    burbuja(arr,5,ascendente);
    for(int i=0;i<5;i++){
    cout <<arr[i]<< endl;}
    return 0;
}
