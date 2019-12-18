## C++ Environment in Windows
- VSCode    // https://code.visualstudio.com/  code editor
- git   //  https://git-scm.com/  for source control
- cmake //https://cmake.org/  to work with project
- g++ (mingw)   // http://www.mingw.org/  Compiler for Windows.  You need to add binaries to PATH env. variable
- github.com // https://github.com/ for cloud service


## Terminal Commands ($ means terminal prompt)
```bash
$ ls	#list folder
$ cd <dest>	# change directory
$ cd..		# parent directory
$ pwd		# show present working directory
$ rm <name>	# remove or delete file or directory
$ mkdir <name> #make and directory or folder
System
. (one dot)	//present working directory
.. (two dots)	//parent directory
```

## C++ Basics
- File Extension: ".cpp"
- Header files: ".h"

## g++ Compiler for 1 file
```bash
# To Compile
# -o for output file
$ g++ main.cpp -o main
# To run
$ ./main.exe
```

## g++ Compiler for 2 files
For Example, if you have a library under the 'functions.cpp' and 'function.h' files, and you have a driver under 'run_functions.cpp' you need to compile as follows:
```bash
# To compile, list ALL source (cpp) files
# -o for output file name
$ g++ functions.cpp run_functions.cpp -o run_functions
# To run
```
### C++ File Template
```cpp
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    return 0;
}
```

## Doxygen documentation
```cpp
// Add C/C++ Intellisense
// Add Code Spell Extension
// Add Doxygen Documentation Generator
// Add Markdown All In One
// Add CMake
// Add CMake Tools

// Add Documentation comments via Doxygen Documentation Generator
// Run /** and <Enter>
```

### CMake
```bash
To build a project we need all the rules to be set under 'CMakeLists.txt' file.
- Create a build folder: '$ mkdir build'
- Go to the build dir: $ '$ cd build'
- Run cmake '$ cmake .. -G "MinGW Makefiles"'
  ## The '..' is because your CMakeList.txt is one folder up.
- Build or compile your code: '$ cmake --build .'  ## The '.' means to build is in the pwd.
- Then '$ .\bin\ca.exe' to run compiled code
```
