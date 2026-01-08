### Cub3D | Ray-Casting Engine in C
**Cub3D** s a technical deep-dive into the world of 1990s pseudo-3D graphics. Inspired by the legendary Wolfenstein 3D, this project involves building a first-person perspective engine from scratch using the Ray-casting algorithm.
The core of this project is not about using a game engine, but about mastering the trigonometry and mathematics required to project a 2D map into a 3D visual space.

## The Math Behind the Magic: Ray-casting
  The engine works by "casting" a ray from the player's position for every vertical line on the screen. By calculating the distance to the nearest wall, the engine determines how tall that wall should be drawn.
  Using **DDA Algorithm** (Digital Differential Analyzer is used to efficiently find where rays hit walls on the grid.) , **Trigonometry** (Solving for wall height while correcting the "fish-eye effect" (when you are too close to the wall appears curved or bent due to lens distortion.))
  **Perspective**(Transforming 2D coordinates into a 1D vertical strip height)

## Project Architecture
The project is strictly divided into two primary phases: 
1 - **The Parsing** Before rendering, the program must validate and store data from a configuration file. Ensures the map is closed (surrounded by walls), Extracts paths for textures (North, South, East, West) and RGB colors for the floor and ceiling.
2 - **The Rendering** main game loop: Handling player translation and rotation,  Calculating the distance to the wall for each pixel column,Determining which part of a texture to display based on where the ray hit the wall.

## Tech Stack 
C (Standard C99) + MiniLibX (A simple X-Window/Cocoa API for C)

### Clone and Compile

```
git clone https://github.com/Assimi-Houssam/cub3d
cd cub3d/manda
make

```
### Launch a map:

```
./cub3D maps/test_map.cub

```





