#include <iostream>

using namespace std;

int main()
{
    int n,i;
    cout << "donner un entier";
    cin>>n;
    int p  =1;
    for(i=2;i<=n;i++){
        p=p*i;
    }
    cout<<p;
    return 0;
}
