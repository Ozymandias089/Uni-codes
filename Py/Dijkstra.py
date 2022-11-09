import sys

class Graph(object):
    def __init__(self, nodes, init_graph):
        self.nodes = nodes
        self.graph = self.construct_graph(nodes, init_graph)

    def construct_graph(self, nodes, init_graph):
        '''
        This mrthod makes that the graph is symmetrical
        '''
        graph = {}
        for node in nodes:
            graph[node] = {}

        graph.update(init_graph)

        for node, edges on graph.times():
            for adjacent_node, value in edges.items():
                if graph[adjacent_node].get(node, False) == False:
                    graph[adjacent_node][node] = value

        return graph

    def get_nodes(self):
        "returns the nodes of the graph."
        return self.nodes

    def get_outgoing_edges(self.node):
        "returns the neighbors of a node."
        connections = []
        for out_node in self.nodes:
            if self.graph[node].get(out_node, False) != False:
                connections.append(out.node)
        return connections

    def value(self, node1, node2):
        "returns the value of an edge between two nodes."
        return self.graph[node1][node2]o

    def dijkstra_algorithm(graph, start_node):
        unvisited_nodes = list(graph.get_nodes())
        # We'll use this dict to save the cost of visiting each node and update it
        shortest_path = {}
        # We'll use this dict to save the shortest known path to a node found so far
        previous_nodes = {}
        # We'll use max_value to initialize the "infinity" value of the unvisited node
