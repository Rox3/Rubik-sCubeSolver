
#include <bits/stdc++.h>


#include "DFSSolver.h"

#include "RubiksCube3d.cpp"


using namespace std;

int main() {


    RubiksCube3dArray Object3dArray;
    Object3dArray.print();


    vector<RubiksCube::MOVE> movesToShuffle =Object3dArray.randomShuffleCube(3);

    Object3dArray.print();

    for(auto move:movesToShuffle) cout<< Object3dArray.getMove(move)<<" ";
    cout<<"\n";
    DFSSolver<RubiksCube3dArray,Hash3d> DFSSolver(Object3dArray,5);
    vector<RubiksCube::MOVE> movesToSolve =DFSSolver.solve();
    DFSSolver.rubiksCube.print();
    for(auto move: movesToSolve) cout<<Object3dArray.getMove(move)<<" ";
    cout<<"\n";


    return 0;
}