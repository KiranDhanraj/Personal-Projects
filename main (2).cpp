// Online C++ compiler to run C++ program online
#include <iostream>
#include <array>
using namespace std;

int main() {
    int gold=0;
    int m;
    int k;
    int n;
    char direct;
    int loc;
    int negRows=0;
    int negCols=0;
    cin>>m;
    cin>>n;
    cin>>k;
    int arrCols[n];
    int arrRows[m];
    for(int a=0; a<n; a++){
        arrCols[a]=1;
       
        
    }
    for(int b=0; b<m; b++){
        arrRows[b]=1;
    }
    
    for(int c=0; c<k; c++){
        cin>>direct>>loc;
        if(direct=='R'){
            arrRows[loc-1]*=-1;
        }
        if(direct=='C'){
            arrCols[loc-1]*=-1;
        }
        
        
    }
    for(int d=0; d<n; d++){
       if( arrCols[d]==-1){
           negCols++;
       }
    }
    for(int e=0; e<m; e++){
       if( arrRows[e]==-1){
           negRows++;
       }
    }
    
    gold=negCols*(m-negRows) + negRows*(n-negCols);
    cout<<gold;
    return 0;
}