#include<bits/stdc++.h>
using namespace std;
int main()
        {
        
            int h,m;
            cin>>h>>m;
            
             if(m<=30){
                if(m==0)cout<<h<<" ta";
                else if(m==15)cout<<"showa "<<h<<" ta";
                else if(m==30)cout<<"sharre "<<h<<" ta";
                else cout<<h<<" ta beje " <<m<<" minute";
            }
            else{
                if(m==45)cout<<"poune "<<h+1<<" ta";
                else cout<<h+1<<" ta bajte "<<60-m<<" miniute";
            }
        
        }