#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

multimap<int,int>mp1,mp2;
mp1.insert({1,5});
mp1.insert({2,6});
mp1.insert({3,10});
mp1.insert({6,15});
mp1.insert({6,18});
mp1.insert({10,21});
mp1.insert({7,22});
mp1.insert({9,13});
mp1.insert({5,17});
mp1.insert({8,23});

multimap<int,int>::iterator i;
for(i=mp1.begin(); i!= mp1.end();i++)
    cout<<i->first<<"->"<<i->second<<endl;
mp2.insert(mp1.begin(),mp1.end());

cout<<"MAP2"<<endl;
for(i=mp1.begin(); i!= mp1.end();i++)
    cout<<i->first<<"-> "<<i->second<<endl;
    mp1. erase(mp1.find(6),mp1.end());
    cout<<"MAP1"<<endl;
    for(i=mp1.begin(); i!= mp1.end();i++)
    cout<<i->first<<"->"<<i->second<<endl;

auto i1 = mp1.lower_bound(3);
auto i2 = mp1.upper_bound(3);
cout<<"lower bound "<<i1->first<<"\t"<<i1->second<<endl;
cout<<"upper bound "<<i2->first<<"\t"<<i2->second<<endl;

}

