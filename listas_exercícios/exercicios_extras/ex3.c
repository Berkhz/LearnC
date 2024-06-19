#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int dest;
    struct Node* next;
} Node;

typedef struct Graph {
    int V;
    Node** adjLists;
    int* visited;
} Graph;

Graph* criarGrafo(int V) {
    Graph* graph = (Graph*)malloc(sizeof(Graph));
    graph->V = V;
    graph->adjLists = (Node**)malloc(V * sizeof(Node*));
    graph->visited = (int*)malloc(V * sizeof(int));
    for (int i = 0; i < V; i++) {
        graph->adjLists[i] = NULL;
        graph->visited[i] = 0;
    }
    return graph;
}

Node* criarNode(int dest) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->dest = dest;
    newNode->next = NULL;
    return newNode;
}

void adicionarAresta(Graph* graph, int src, int dest) {
    Node* newNode = criarNode(dest);
    newNode->next = graph->adjLists[src];
    graph->adjLists[src] = newNode;

    newNode = criarNode(src);
    newNode->next = graph->adjLists[dest];
    graph->adjLists[dest] = newNode;
}

void DFS(Graph* graph, int vertex) {
    Node* adjList = graph->adjLists[vertex];
    Node* temp = adjList;

    graph->visited[vertex] = 1;
    printf("%d ", vertex);

    while (temp != NULL) {
        int connectedVertex = temp->dest;

        if (graph->visited[connectedVertex] == 0) {
            DFS(graph, connectedVertex);
        }
        temp = temp->next;
    }
}

int main() {
    Graph* graph = criarGrafo(9);

    adicionarAresta(graph, 0, 1);
    adicionarAresta(graph, 0, 7);
    adicionarAresta(graph, 1, 2);
    adicionarAresta(graph, 1, 7);
    adicionarAresta(graph, 2, 3);
    adicionarAresta(graph, 2, 8);
    adicionarAresta(graph, 2, 5);
    adicionarAresta(graph, 3, 4);
    adicionarAresta(graph, 3, 5);
    adicionarAresta(graph, 4, 5);
    adicionarAresta(graph, 5, 6);
    adicionarAresta(graph, 6, 7);
    adicionarAresta(graph, 6, 8);
    adicionarAresta(graph, 7, 8);

    printf("DFS a partir do vértice 0:\n");
    DFS(graph, 0);

    return 0;
}
