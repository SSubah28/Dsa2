#include<bits/stdc++.h>
using namespace std;



int main()
{
    string x,y;
    getline(cin,x);
    getline(cin,y);
    if(x=="0"|| y=="0")
        cout<<"0"<<endl;
    else
    {
        if(x.length()>y.length())
            y = apndz(y,x.length()-y.length);
        else x = apndz(x,y.length()-x.length);
        cout<<rmvz(ksu(x,y))<<endl;
    }

    return 0;
}
string apndz(string s, int n)
{
    while (n>0)
    {
        s = "0"+s;
        n--;
    }
}
string rmvz(string s)
{
    reverse(s.begin(),s.end());
    for(int i = )
    {
        if(s[i]=='0')
        {
            s.pop_back();
        }
        else break;
    }

}
string mulxy(string x, string y)
{
    int pro = ((int)x[0]-'0')*((int y[0]-'0'))
              return to_string p;

}




