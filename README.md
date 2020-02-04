# Project 1 - Build My World

Simple Gazebo world that includes:
 - A one floor structure.
 - Two instances of a custom robot. 
 - One Kuka robot from the Gazebo online library.
 - A plugin that prints "Welcome to Ingrid's World".

Compile:
```
mkdir build && cd build
cmake .. 
make 
```
Export plugin path:
```
export GAZEBO_PLUGIN_PATH=${GAZEBO_PLUGIN_PATH}:/path/to/project/build/dir/
```

Inside the project's folder, run:
```
gazebo world/my_world
```