# Maze Generator
Maze generator class with many complementary methods - written in C++
## Notes
* This class uses Randomized Prim's algorithm (only one way from the start point to the end point)
* The start and end points of the maze are the two furthest points away from each other that can be connected by a *path*
* The maze is generated and handled as a 2D std::vector of int
  * *Walls* or obstucles are represented as zeroes
  * *Paths* are represented as ones
  * The starting and ending points are represented as two and three, respectively
* The class was designed and written for the iOS app **Get Out: One Way** with a few more Cocos2D-X methods, which are redacted in this publishing
* The longest path algorithm used to determine the start and end points is brute-force and has the largest complexity and so creating large mazes might take time (check the Task List below)

## Instructions
### Sample Maze Generation
```
std::vector<std::vector<int>> maze = MazeGenerator::getMaze(10);  // generates a random maze in the form of a 2D array of int
MazeGenerator::printMaze(maze); // Prints the content of the 2D std::vector
```
### Sample Output
```
00000000000
01011111110
01010001010
01111101010
01010000010
01011101020
01000001000
01111111110
01010101000
01010101130
00000000000
```

### Other Methods
* Get the generated start and end coordinates
```
std::pair<int, int> getStartCoordinates()
std::pair<int, int> getEndCoordinates();
```
* Get the distance (number of horizontal and vertical moves) from the start to the end
```
int getDistance();
```
* Get a distance-array; an array containing distances away from the end point (disregards walls!) 
```
std::vector<std::vector<int>> getDistArray(); // starting coordinates in this array would contain getDistance()
// one tile closer to the end along the path would contain getDistance() - 1
```
* Get the path's coordinates
```
std::vector<std::pair<int, int>> getPathCoordinates();  // from start to end
```
## Task List
- [ ] Upgrade the performance by finding a less expensive longest-path algorithm
- [ ] Add an option to manually select start and end points

**Feel free to make a pull request or request a feature!**

## Credits
The MazeGenerator class is solely designed and written by Mohamed Shahawy

## License
MIT
