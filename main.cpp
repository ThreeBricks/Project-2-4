#include <iostream>
#include <unordered_set>
#include <vector>
#include <random>
#include <stack>
#include <queue>
#include <time.h>
#include "graph3.h"
#include "DirectedGraph.h"
#include "TopSort.h"

using namespace std;
DirectedGraph createRandomDAGIter(const int& n){
    DirectedGraph dg;
    for(int i=0;i<n;i++){
        dg.addNode(i);
    }
    for(int i=0;i<n;i++){
        if(rand()% n>3){
            dg.addDirectedEdge(dg.getNode(rand()%n),dg.getNode(rand()%n));
        }
    }
    return dg;
}


using namespace std;

int main()
{
    DirectedGraph dg=createRandomDAGIter(1000);
    //dg.addNode(5);
    //dg.addNode(6);
    //dg.addDirectedEdge(dg.getNode(6),dg.getNode(5));
    //dg.displayNodes();
    Kahns(dg);
    mDFS(dg);
    return 0;
}
