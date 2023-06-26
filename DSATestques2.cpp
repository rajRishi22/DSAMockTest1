#include<iostream>
#include<ostream>
using namespace std;

int UniqueChar(string s){
    for(int i=0;i<s.size();i++){
        int count=0;
        for (int j = i+1; j < s.size(); j++)
        {
            if(s[i]==s[j]){
                count++;
            }
        }
        if(count==0){
            return i;
        }
    }
    return -1;
}

int main()
{
    string s = "aabb";
    cout<<"Unique Element is at Index "<<UniqueChar(s);


    
    return 0;
}