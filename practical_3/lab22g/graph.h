#ifndef GRAPH_H_
#define GRAPH_H_

#include <stdio.h>

struct graphrec;
typedef struct graphrec *graph;

extern graph    graph_new(int num_vertices);
extern graph    graph_free(graph g);
extern void     graph_add_2edges(graph g, int u, int v);
extern void     graph_add_edge(graph g, int u, int v);
extern void     graph_print_list(graph g);
extern void     graph_print_state(graph g);

#endif