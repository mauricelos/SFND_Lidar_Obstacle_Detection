/* \author Aaron Brown */
// Quiz on implementing kd tree

#ifndef KDTREE_H
#define KDTREE_H

#include "render/render.h"

// Structure to represent node of kd tree
struct Node
{
    Node(std::vector<float> arr, int setId) : point(arr), id(setId), left(NULL), right(NULL) {}

    std::vector<float> point;
    int id;
    Node* left;
    Node* right;
};

struct KdTree
{
    KdTree() : root(NULL) {}

    void insert(std::vector<float> point, int id)
    {
        // TODO: Fill in this function to insert a new point into the tree
        // the function should create a new node and place correctly with in the root
    }

    // return a list of point ids in the tree that are within distance of target
    std::vector<int> search(std::vector<float> target, float distanceTol)
    {
        std::vector<int> ids;
        return ids;
    }

    Node* root;
};

#endif  // KDTREE_H
