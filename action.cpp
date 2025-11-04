#include<iostream>
using namespace std;
void interaction(int arr1[],int arr2[],int size1,int size2){
    for(int i=0;i<size1;i++){
    bool istrue=false;

        for(int j=0;j<size2;j++){
            if(arr1[i]!=arr2[j]){
                istrue=true;
            }
        }
        if(istrue){
        cout<<i<<" ";
    }
    }
}
int main (){
    int arr1[]={1,2,3,4,5};
    int size1=5;
    int arr2[]={6,7,3,1};
    int size2=4;
    interaction(arr1,arr2,size1,size2);
    cout<<endl;
    return 0;
}
