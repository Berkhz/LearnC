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

typedef struct Queue {
    int items[100];
    int front;
    int rear;
} Queue;

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

Queue* criarFila() {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->front = -1;
    q->rear = -1;
    return q;
}

int estaVazia(Queue* q) {
    if (q->rear == -1)
        return 1;
    else
        return 0;
}

void enfileirar(Queue* q, int value) {
    if (q->rear == 100 - 1)
        printf("\nFila cheia!");
    else {
        if (q->front == -1)
            q->front = 0;
        q->rear++;
        q->items[q->rear] = value;
    }
}

int desenfileirar(Queue* q) {
    int item;
    if (estaVazia(q)) {
        printf("Fila vazia");
        item = -1;
    } else {
        item = q->items[q->front];
        q->front++;
        if (q->front > q->rear) {
            q->front = q->rear = -1;
        }
    }
    return item;
}

void BFS(Graph* graph, int startVertex) {
    Queue* q = criarFila();

    graph->visited[startVertex] = 1;
    enfileirar(q, startVertex);

    while (!estaVazia(q)) {
        int currentVertex = desenfileirar(q);
        printf("%d ", currentVertex);

        Node* temp = graph->adjLists[currentVertex];

        while (temp) {
            int adjVertex = temp->dest;

            if (graph->visited[adjVertex] == 0) {
                graph->visited[adjVertex] = 1;
                enfileirar(q, adjVertex);
            }
            temp = temp->next;
        }
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

    printf("BFS a partir do vértice 0:\n");
    BFS(graph, 0);

    return 0;
}
