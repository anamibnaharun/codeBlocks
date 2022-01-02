#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mark[3000]={0};
    vector<int> order;
    void traverse(int node, vector<vector<int,int>>& graph){
    }
    int checkCompletion(int node, vector<vector<int,int>>& graph){
        if(){

        }
        for(int i=0; i<graph[node].size();i++){
            if(mark[node])
           return checkCompletion(graph[node][i], graph);
        }
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        //build graph for prorequisites
        vector<vector<int,int>> graph,reverseGraph;
        for(int i=0;i<prerequisites.size();i++){
            int destination=prerequisites[i][0];
            int source=prerequisites[i][1];
            graph[source].push_back(destination);
            reverseGraph[destination].push_back(source);
        }
        int root= checkCompletion(1, reverseGraph);
        if(root!=-1)traverse(root, graph);
        else return order;
    }
};
int main(){
    /*
    test case 1:

    */
}

