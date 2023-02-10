# C++ Project
C++ cash course project <br>

I made this Project to be scalable with maximum modularity by applying oop concepts <br>
[Project details](https://github.com/A-Hanie/Cpp_Project/blob/main/media/C%2B%2B%20Project.pdf)
## Requirements
 - Mingw
 - GNU gdb  
 - Cmake (VERSION 3.8)
 - Text editor

### Project Tree
```
├── CMakeLists.txt
├── build
│   ├── CMakeCache.txt
│   ├── CMakeFiles
│   ├── Makefile
│   ├── cmake_install.cmake
│   └── robot
├── include
│   ├── Location.h
│   ├── Manipulator.h
│   ├── MobileManipulator.h
│   ├── MobileRobot.h
│   ├── Robot.h
│   └── utilities.h
├── main.cpp
└── src
│   ├── Location.cpp
│   ├── Manipulator.cpp
│   ├── MobileManipulator.cpp
│   ├── MobileRobot.cpp
│   ├── Robot.cpp
│   └── utilities.cpp
```

To print debugging messages just set ```debug``` to ```true```
utilities.h


```cpp
/******************************************************************************
* Macros
*******************************************************************************/
#define DEBUG fasle

```
### Build the Project  
Navigate to build directory then open the terminal and type 
``` bash
$ cmake CmakeLists.txt ..

```
Finally generate the excutable file

``` bash
$ make

```
## Result

![alt text](https://github.com/A-Hanie/Cpp_Project/blob/main/media/result.png?raw=true)
