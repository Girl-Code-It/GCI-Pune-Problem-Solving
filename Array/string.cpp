#include<bits/stdc++.h>
using namespace std;

int main(){
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    string str = "kritika";
    cout<<str<<endl;
    string str2[10];
    string s2;
    getline(cin,s2);
    cout<<s2<<endl;
    cout<<str2<<endl;
    cout << " The capacity of string is : ";
    cout << str.capacity() << endl;
    
    // Decreasing the capacity of string
    // using shrink_to_fit()
    str.shrink_to_fit();
 
    // Displaying string
    cout << "The new capacity after shrinking is : ";
    cout << str.capacity() << endl;

    string s(10,'N');
    cout<<s<<endl;
    string abc(str);
    cout<<abc<<endl;

    string s1="fam",s3="ily";
    s1.append(s3);
    cout<<"\n"<<s1<<endl;   
    s1.push_back('<');
    s1.push_back('3');
    cout<<"\n"<<s1<<endl;   

    string b="nincompoop";
    b.assign("Kritika");//b="Kritika";
    cout<<b<<endl;

    cout<<b.at(3)<<endl;
    cout<<b[3]<<endl;
    b.clear();
    if(b.empty()){
        cout<<"The string is empty!"<<endl;
    }
    cout<<b<<endl;

    cout<<s1.compare(s3)<<endl;
    cout<<s1.compare(s2)<<endl;

    s1.swap(s3);
    cout<<s1<<endl;
    cout<<s3<<endl;
    string m="nincompoop";
    m.erase(3,3);
    cout<<m<<endl;
    cout<<m.find("poop")<<endl;
    m.insert(3,"com");
    cout<<m.length()<<endl;
    m.resize(6);
    cout<<m<<endl;
    cout<<m.size()<<endl;

    string ss="nincompoop";
    cout<<ss.substr(3,4)<<endl;
    
    int a=786;
    string h = "786";
    int x = stoi(h);
    cout<<x+2<<endl;
    cout<<h+"2"<<endl;
    cout<<to_string(x)+"2"<<endl;

    string r = "huioerhyuwea";
    sort(r.begin(),r.end());
    cout<<r<<endl;
    sort(r.rbegin(),r.rend());
    cout<<r<<endl;

    char str1[50];
    string ch="kritika";
    ch.copy(str1, 7, 0);
    return 0;
}