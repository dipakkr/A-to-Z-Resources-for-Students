#include<bits/stdc++.h>
using namespace std;


void bfs(int num,int vis[],vector<int>g[],int & index){
	queue<int> fl;
	int count=0;
	vis[num]=1;


	fl.push(num);

	index=1;


	while(!fl.empty()){
		int fist;

		fist=fl.front();

		fl.pop();


		for(int v:g[fist]){
			count++;

			if(vis[v]==0){
				fl.push(v);
				vis[v]=1;
			}
		}

		if(count!=2){
			index=0;
		}

		count=0;


	}
}

int  bfs_main(vector<int>g[],int tam){
	int * vis=nullptr;
	int index=1;
	int count=0;

	vis=new (nothrow) int [tam]();

	if(vis==nullptr){
		puts("error to alloc visisted positions");
		exit(1);
	}


	//memset(vis,0,sizeof(vis));



	for(int i=0;i<tam;i++){

		if(vis[i]==0){
			bfs(i,vis,g,index);
			if(index){
				count++;
			}
		}





	}


	return count;

}




int main(void){
	vector<int> * g =nullptr;
	int tam;
	int edges;
	int count=0;

	cin >> tam >> edges;



	g= new (nothrow) vector<int> [tam]();
	if(g==nullptr){
		puts("error to alloc graph");
		exit(1);
	}


	for(int i=0;i < edges ;i++){
		int u,v;

		cin >> u >> v;

		u--;
		v--;

		g[u].push_back(v);
		g[v].push_back(u);

	}




	count=bfs_main(g,tam);


	cout << count << endl;

	return 0;

}
