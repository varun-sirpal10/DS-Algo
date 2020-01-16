#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

bool compare(string a,string b){
    return a>b;

}
int main() {

    string s("hello world");
    cout<<s<<endl;

    string s2 = "Another Way !";
    cout<<s2<<endl;

    cout<<s2.length();

    string s3;
    getline(cin,s3);
    cout<<s3<<endl;

    string arr[] = {"Apple","Mango","Guava"};
    sort(arr,arr+3,compare);
    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }


}
