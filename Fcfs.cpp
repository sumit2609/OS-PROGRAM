#include<bits/stdc++.h>

using namespace std;

void CompletionTime(int comTime[], int arrTime[], int burTime[], int n)
{

    int i = 1;
    int end = arrTime[0]+burTime[i];
    comTime[0] = end;

    while(i<n){
        if(arrTime[i]<end){
            end += burTime[i];
        }else{
            end = arrTime[i]+burTime[i];
        }
        comTime[i] = end;
        i++;
    }


}

void turnAroundTime(int compTime[], int arrTime[], int tat[], int n)
{
    for(int i = 0; i<n; i++){
        tat[i] = compTime[i]-arrTime[i];
    }
}

void waitingTime(int tat[], int burTime[], int wait[], int n)
{
    for(int i = 0; i<n; i++)
        wait[i] = tat[i]-burTime[i];
}

int main(){
    int n = 0;

    cout<<"Enter no. of process"<<endl;
    cin>>n;

    int arrivalTime[n];
    int burstTime[n];
    int completion[n];
    int tat[n];
    int wait[n];

    cout<<"Enter Arrival Time"<<endl;

    for(int i = 0; i<n; i++)
        cin>>arrivalTime[i];

    cout<<"Enter Burst Time"<<endl;

    for(int i = 0; i<n; i++)
        cin>>burstTime[i];

    CompletionTime(completion, arrivalTime, burstTime, n);
    turnAroundTime(completion,arrivalTime,tat, n);
    waitingTime(tat,burstTime,wait,n);
    
    cout<<"Completion Time"<<endl;
    for(int i = 0; i<n; i++)
        cout<<completion[i]<<" ";

    cout<<endl;

    cout<<"Turn Around Time"<<endl;
    for(int i = 0; i<n; i++)
        cout<<tat[i]<<" ";

    cout<<endl;

    cout<<"waiting Time"<<endl;
    for(int i = 0; i<n; i++)
        cout<<wait[i]<<" ";

    cout<<endl;

    return 0;
}