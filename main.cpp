#include <iostream>
#include <string>
using namespace std;
int main() {
    int var1,var2, sum, diff, prod;
    cout<<"Enter the value:";
    cin >>var1;
    cout<<"Enter yhe second value:";
    cin>>var2;


    sum =var1+var2;
    diff=var1-var2;
    prod=var1*var2;


    cout<<"Var1="<<var1<<endl;
    cout<<"Var2="<<var2<<endl;
    cout<<"Sum="<<sum<<endl;
    cout<<"Diff="<<diff<<endl;
    cout<<"Prod="<<prod<<endl;
    return 0;
}
