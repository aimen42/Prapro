#include<iostream>
using namespace std;
void binary(int n){
    int sum=0;
    int power =1;
    while(n>0){
       int rem=n%2;
       rem=rem*power;
       power*=10;
       sum+=rem;
      n=n/2;
       
    }
    cout<<sum<<" ";
}
int main (){
    int n;
    cout<<"Enter a NUMBER :";
    cin>>n;
    for(int i=1;i<=n;i++){
        binary(i);
        cout<<endl;

    }
    
    return 0;

}
