# blackwood
text-based horror game using a directed graph data structure and DFS node traversal

Expands on basic directed graph implementation from CU Boulder's 2270 Data Structures course. Includes Node.h, Edge.h, Graph.h, Node.cpp, Edge.cpp, and Graph.cpp along with two executables, test.cpp and Main.cpp.  Compiled using clang (clang++ -Wall -Wextra -g Node.cpp Edge.cpp Graph.cpp test.cpp)

test.cpp is an executable designed to showcase how the functions work on a smaller scale, without needing to traverse through the whole game.  The structure of the testGraph before adding test nodes is:

testGraph:

       a
      / \
     b   c
    / \   \ 
   d   e   f 
   
After testing the addNode function:

testGraph:

       a
      / \
     b   c
    / \   \ 
   d   e   f 
    \ /
     g
    / \
   h   i
   
The outcome options of h and i depends on whether the user selected node d or e previously.

Main.cpp is the text game itself, with 32 story and location nodes and 4 possible endings.  In order to uncover the full story behind the secret of Blackwood Farm, the user must play through all 4 endings.

To add:

-Streamline creation of nodes/story
-Smaller graphs that function more like finite state machines (can use this to introduce in-game object interactions)
-Save option in playthrough: warn user of ending decision ahead with option to save location.  If user decides to play through all 4 endings, they can go back to the save location and choose differently rather than needing to go through the whole beginning again (this isn't as urgent in such a short story as this one, but would be essential in anything longer)
-An api would probably be nice
