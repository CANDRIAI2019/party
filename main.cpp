#include <bits/stdc++.h>
using namespace std;

#define MAXN 10000

int T, N, A[MAXN];

int main(){
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    assert(fin && fout);

    fin>>T;
    for(int i=0;i<T;i++){
        fin>>N;
        for(int j=0;j<N;j++)
            fin>>A[j];
        // Risolvere il problema
        int ret=0;
        for(int j=0;j<N;j++)
            if(A[j]>0) ret+=A[j];
        fout<<"Case #"<<i+1<<": "<<ret<<endl;
    }

    fin.close();
    fout.close();
    return 0;
}
