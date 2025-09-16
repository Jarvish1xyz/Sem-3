#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node* link;
};

struct Graph {
    int numVer;
    struct node** adjList;
    int* visited;
};

struct node* createNode(int vertex) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->info = vertex;
    newNode->link =NULL;
    return newNode;
}

struct Graph* crateGraph(int v) {
    struct Graph* g = (struct Graph*)malloc(sizeof(struct Graph));

    g->adjList = (struct node**)malloc(v * sizeof(struct node*));
    g->visited = (int*)malloc(v * sizeof(int));

    for(int i=0; i<v; i++) {
        g->adjList[i]=NULL;
        g->visited[i]=0;
    }

    return g;
}

void addList(struct Graph* g, int start, int end) {
    struct node* newNode = createNode(end);
    newNode->link=g->adjList[start];
    g->adjList[start]=newNode;

    newNode = createNode(start);
    newNode->link=g->adjList[end];
    g->adjList[end]=newNode;
}

void DFS(struct Graph* g, int ver) {
    struct node* adjList = g->adjList[ver];
    struct node* temp = adjList;

    g->visited[ver]=1;
    printf("%d, ", ver);
    while(temp!=NULL) {
        int connected = temp->info;
        if(g->visited[connected]==0) {
            DFS(g, connected);
        }
        temp=temp->link;
    }
}

int main() {
    int n;
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    struct Graph* graph=crateGraph(n);

    addList(graph, 0, 1);

}