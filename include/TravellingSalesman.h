#ifndef TRAVELLING_SALESMAN_PROBLEM_TRAVELLINGSALESMAN_H
#define TRAVELLING_SALESMAN_PROBLEM_TRAVELLINGSALESMAN_H

#include <bits/stdc++.h>
#include <vector>

#define V 4

class TravellingSalesman {
private:
    // Travel Cost

    int travel_cost = INT_MAX;

    // All vertices of the graph is stored in this vector

    std::vector<int> vertices;

    // Source node

    int source{0};
public:

    // Essential Functions
    int solveTravellingSalesman();

//    void getHamiltonianPath();

    // Getters
    int getTravelCost();

    std::vector<int> getVertices();

    //Setters

    void setVertices(std::vector<int> s);

    void setTravelCost(int min_cost);


};


#endif //TRAVELLING_SALESMAN_PROBLEM_TRAVELLINGSALESMAN_H
