//
//  main.cpp
//  Maze Generator
//
//  Created by Mohamed Shahawy on 4/21/16.
//  Copyright © 2016 Mohamed Shahawy. All rights reserved.
//

#include <stdio.h>
#include "Maze Generator.hpp"

using namespace std;

int main()
{
    MazeGenerator::printMaze(MazeGenerator::getMaze(10));
    
    return 0;
}