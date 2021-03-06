#include "../include/TravellingSalesman.h"
#include <vector>

/**
 * Solves the travelling salesman problem
 * @return The travel cost
 */
int TravellingSalesman::solveTravellingSalesman() {
    int graph[][V] = {
            {0,  10, 15, 20},
            {10, 0,  35, 25},
            {15, 35, 0,  30},
            {20, 25, 30, 0}
    };
    for (int i = 0; i < V; i++) {
        if (i != source) {
            vertices.push_back(i);
        }
    }

    // Do while loop
    do {
        int current_cost{0};
        int temp_source = source;
        for (int i = 0; i < vertices.size(); i++) {
            current_cost += graph[temp_source][vertices[i]];
            temp_source = vertices[i];
        }
        current_cost += graph[temp_source][source];

        travel_cost = std::min(travel_cost, current_cost);
    } while (
            std::next_permutation(vertices.begin(), vertices.end())
            );
    std::cout << " Travel Cost : " << travel_cost << std::endl;
    return travel_cost;
}

/**
 * Getter function to get the travel cost
 * @return the travel cost for the salesman
 */
int TravellingSalesman::getTravelCost() {
    return travel_cost;
}

/**
 * Getter function to get the vertices of the graph
 * @return vertices of the graph
 */
std::vector<int> TravellingSalesman::getVertices() {
    return vertices;
}
