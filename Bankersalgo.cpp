#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i=0,j=0,s;
    cout<<"enter number of process :";
    cin>>n;
    cout<<"enter number of resources :";
    cin>>s;

    vector<bool> f(s,false);
    vector<int> available;
    vector<int> seq;

    int allocated[n][s];

    cout<<"enter allocated details ";

    for(i=0;i<n;i++){
       cout<<"\nenter allocation details for process "<<i+1<<"=";
        for(j=0;j<s;j++){
            cin>>allocated[i][j];
        }
    }

    int need[n][s];
        cout<<"enter need arrays details :";

    for( i=0;i<n;i++){
        cout<<"\nenter needs details for process "<<i+1<<"=";
        for( j=0;j<s;j++){
            cin>>need[i][j];
        }
    }

    int remaining[n][s];
    //  calculating remaining array //

    for(i=0;i<n;i++){
        for( j=0;j<s;j++){
            remaining[i][j]=need[i][j]-allocated[i][j];
        }
    }

    //printing remaining array//
    cout<<"\nremaining array"<<endl;

    for(i=0;i<n;i++){
        for( j=0;j<s;j++){
            cout<<remaining[i][j]<<" ";
    }

    cout<<endl;
}

    cout<<"\nenter available resources :";
    int x;
    for(j=0;j<s;j++){
        cin>>x;
        available.push_back(x);
    }

    cout<<"\ninitial available resources ";

    for(j=0;j<available.size();j++)
        cout<<available[j]<<" ";

    vector<int> w=available;

    int count=0;

    while(count!=n){
    for(i=0;i<n;i++){
        int c=0;
    if(f[i]==false){
        for(j=0;j<s;j++){
            if(remaining[i][j]<=w[j] )
                c++;
            } 

        if(c==s)
        {
            for(j=0;j<s;j++){
                w[j]=w[j]+allocated[i][j];
                allocated[i][j]=0;
                need[i][j]=0;
            }
            cout<<"\navailable resources after termination of process"<<i+1<<" :";

            for(j=0;j<w.size();j++)
                cout<<w[j]<<" ";

            f[i]=true;
            seq.push_back(i+1);
            count++;
        }
        }
    }
    }
    if(count==n){
        cout<<"\nsafe sequence :";
        for(i=0;i<seq.size();i++){
            cout<<seq[i]<<" ";
        }
    }else
        cout<<"sequence is not safe";

    return 0;
}