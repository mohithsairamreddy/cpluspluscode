#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string str="mohith sai ram reddy";

    sort(str.begin(),str.end());
    cout<<str<<endl;
    return 0;
}