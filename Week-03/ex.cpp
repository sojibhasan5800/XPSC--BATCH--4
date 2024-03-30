#include<bits/stdc++.h>
using namespace std;


int main(){

    string str = "Hello World";
    char k = 'D';
    k = tolower(k);
    cout<<k<<endl;

    // Convert the string to lowercase
   transform(str.begin(), str.end(), str.begin(),[](unsigned char c){ return tolower(c); });

    cout << "Lowercase string: " << str << endl;
    /* transform(str.begin(),str.end(),
    [](unsigned char c){ return tolower(c); }); */
    vector<pair<int,int>>mv={{-1,-1},{-1,1},{1,-1},{1,1}};
    cout<<mv[0].first<<endl;
    cout<<mv[1].second<<endl;



    return 0;
}
