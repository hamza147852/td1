#include <iostream>

using namespace std;

int main()
{
    int i,maxi;
    int t[10];
    for(i=0;i<10;i++){
        cin>>t[i];
    }
    maxi=t[0];
    for(i=1;i<10;i++){
        if(t[i]>maxi){
            maxi=t[i];
        }
    }
    cout<<maxi;


    return 0;
}
