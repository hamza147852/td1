#include <iostream>

using namespace std;
float convert_k_m(float n){
    return n/1.609;
}
float convert_m_k(float n){
    return n*1.609;
}
int main()
{
    int i,a,h,n;
    float t[10];
    cout<<"donner n"<<endl;
    cin>>n;
    cout << "remplir le tableau:" << endl;
    for(i=0;i<n;i++){
        cout<<"t["<<i<<"] = ";
        cin>>t[i];
    }
    cout<<"est_ce_que ces enties en kilo ou on mille si on kilo tappe 1 si non tappe 2"<<endl;
    cin>>a;
    if (a==1){
        for(i=0;i<n;i++){
        t[i]=convert_k_m(t[i]);
    }
    }else{
        for(i=0;i<n;i++){
        t[i]=convert_m_k(t[i]);
    }

    }
    for(i=0;i<n;i++){
        cout<<"t["<<i<<"] ="<<t[i];
    }


    return 0;
}
