// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;


int main() {
    int C;
    int adj=0;
    int black=0;
    int inp;
    vector<int> tiles(2*C);
    cin>>C;
    for(int x=0; x<(2*C); x++){
        cin>>inp;
        tiles.push_back(inp);
    }
    tiles.push_back(0);
    for(int a=0; a<(2*C); a++){
        if(tiles[a]==1){
            black++;
            if(tiles[a+1]==1 && a!=C-1){
                adj++;
            }
            if(a>=C && tiles[a-C]==1 && (a-C)%2==0){
                adj++;
            }
        }
        
    }

    cout<<(black*3)-(adj*2);
    return 0;
}