#include<stdio.h>
#include<stdlib.h>
#define N 10000
int size[N];
int parent[N];
//int rank[N];

void make(int v)
{
	parent[v] = v;
	size[v] = 1;
	//rank[v] = 0; 
}

int find(int v)
{
	if(v == parent[v]){
		return v;
	}
	else { //Path Compression
		return parent[v] = find(parent[v]);
	}
}

void Union(int a, int b)
{
	a = find(a);
	b = find(b);
	if(a != b){
		// union by size
		if(size[a] < size[b]){
				int tmp = a;
			a = b;
			b = tmp;
		}
		parent[b] = a;		
		size[a] += size[b];	
	}

/* // Union by Rank
	if(a != b){
                if(rank[a] < rank[b]){
                        int tmp = a;
                        a = b;
                        b = tmp;
                }
                parent[b] = a;
                if(rank[a] == rank[b]){
			rank[a]++;
		}
        }
*/
/* UNION by element_value
  	if(a != b){
        	if(a < b){
                        int tmp = a;
                        a = b;
                	b = tmp;
        	}
                parent[b] = a;
        }
  */
}

int main()
{
	int n,k;
	scanf("%d",&n);
	scanf("%d",&k);
	for(int i = 0; i <= n; i++){
		make(i);
	}
	printf("\nbn gaye sb or ab kis kis ko union krwana hai\n");
	while(k--){
		int u,v;
		scanf("%d", &u);
		scanf("%d", &v);
		Union(u,v);
	}
	printf("\nUnion ho gaya\n");
	int ccount = 0;
	for(int i = 0; i <= n; ++i){
		if(find(i) == i) ccount++;
	
	}
	printf("Count : %d",ccount);
	printf("\nKiska Find want bolo  :");
	int bolo;
	scanf("%d",&bolo);
	int x = find(bolo);	
	printf("\nfind %d ka is %d\n",bolo, x);

	return 0;
}
