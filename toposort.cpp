#include <bits/stdc++.h>
using namespace std;
const int maxn=1e6;
 

 
 
int main(void){
        
        vector<int> g[maxn];
        vector<int> roots;
        priority_queue<int , vector<int>, greater<int> > min_heap;
        int n,m;
        int * supost=nullptr;
        int * vis=nullptr;
        int * recur=nullptr;
 
 
 
        cin >> n >> m;
 
        vis=new int [n]();
        recur=new int [n]();
        supost= new int [n]();
 
        for(int i=0;i<m;i++){
                int u,v;
 
                cin >> u >>v;
 
                u--;
                v--;
 
                supost[v]++;
                
                g[u].push_back(v);      
        }

        int ct=0;
        vector<int>to;

        /*
        for(int i=0;i<n;i++){
                cout << i+1<<":";
                for(int j :g[i]){
                        cout << j+1 <<" ";
                }
                cout << endl;
        }
        */
                
 
        for(int i=0;i<n;i++){
                if(supost[i]==0){
                        min_heap.push(i);
                }
        }
 


        while(!min_heap.empty()){

                int v=min_heap.top();
                min_heap.pop();
                to.push_back(v);

                for(int i:g[v]){
                        supost[i]--;

                        if(supost[i]==0){
                                min_heap.push(i);
                        }
                }


                ct++;

        }


        if(ct!=n){
                cout << "Sandro fails."<< endl;
        }else{
                for(int i=0;i<ct;i++){
                        if(i==ct-1){
                                cout << to[i]+1<< endl;
                        }else{
                                cout << to[i]+1<<" ";
                        }
                }
        }





        
 
        return 0;
}  
