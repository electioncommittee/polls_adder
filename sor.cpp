#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    string s,a,b,c;
    bool first=true;
    vector<int> ans; 
    while(getline(cin,s)){
        stringstream ss(s);
        string temp;
        int temp2;
        string aa,bb,cc;
        if(first){
            first=false;
            getline(ss,a,',');
            getline(ss,b,',');
            getline(ss,c,',');
            while(getline(ss,temp,',')){
                stringstream sss(temp);
                sss>>temp2;
                ans.push_back(temp2);
            }
        }
        else{
            getline(ss,aa,',');
            getline(ss,bb,',');
            getline(ss,cc,',');
            if(c==cc){
                int count=0;
                while(getline(ss,temp,',')){
                    stringstream sss(temp);
                    sss>>temp2;
                    ans[count]+=temp2;
                    count++;
                }
            }
            else{
                cout<<a<<","<<b<<","<<c;
                for(int i:ans)cout<<","<<i;
                cout<<endl;
                ans.clear();
                a=aa;
                b=bb;
                c=cc;
                while(getline(ss,temp,',')){
                    stringstream sss(temp);
                    sss>>temp2;
                    ans.push_back(temp2);
                }
            }
        }
    }
    cout<<a<<","<<b<<","<<c;
    for(int i:ans)cout<<","<<i;
    return 0;
}