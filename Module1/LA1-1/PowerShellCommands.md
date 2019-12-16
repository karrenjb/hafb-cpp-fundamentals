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
$ rm <name>	# remove or delete file or director
System
. (one dot)	//present working directory
.. (two dots)	//parent directory
```

## C++ Basics
- File Extension: " .cpp"
```bash
## g++ Compiler

# To Compile
# -o for output file
$ g++ main.cpp -o main
# To run
$ ./main.exe
```

### C++ File Template
```cpp
#include  <iostream>
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
// Add 

// Add the plugin to VSCode: Doxygen Documentation Generator
// Run /** and <Enter>
```