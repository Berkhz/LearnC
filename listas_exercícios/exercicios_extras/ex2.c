#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int dest;
    struct Node* next;
} Node;

typedef struct Graph {
    int V;
    Node** adjLists;
} Graph;

Graph* criarGrafo(int V) {
    Graph* graph = (Graph*)malloc(sizeof(Graph));
    graph->V = V;
    graph->adjLists = (Node**)malloc(V * sizeof(Node*));
    for (int i = 0; i < V; i++)
        graph->adjLists[i] = NULL;
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

void removerAresta(Graph* graph, int src, int dest) {
    Node* temp = graph->adjLists[src];
    Node* prev = NULL;

    while (temp != NULL && temp->dest != dest) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return;

    if (prev == NULL)
        graph->adjLists[src] = temp->next;
    else
        prev->next = temp->next;

    free(temp);

    temp = graph->adjLists[dest];
    prev = NULL;

    while (temp != NULL && temp->dest != src) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return;

    if (prev == NULL)
        graph->adjLists[dest] = temp->next;
    else
        prev->next = temp->next;

    free(temp);
}

void imprimirGrafo(Graph* graph) {
    for (int v = 0; v < graph->V; v++) {
        Node* temp = graph->adjLists[v];
        printf("\n Lista de adjacência do vértice %d\n ", v);
        while (temp) {
            printf("%d -> ", temp->dest);
            temp = temp->next;
        }
        printf("\n");
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

    removerAresta(graph, 1, 2);
    imprimirGrafo(graph);

    return 0;
}
