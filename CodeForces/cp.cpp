#include <iostream>
using namespace std;

// A. Sum of 2050

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n%2050!=0){
            cout<<-1<<endl;
        }
        else{
            n/=2050;
            int sum = 0;
            while(n>0){
                sum+=n%10;
                n/=10;
            }
            cout<<sum<<endl;
        }
    }
}
