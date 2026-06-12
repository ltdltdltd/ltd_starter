# My Learning Projects

A personal workspace for learning C++ and Python programming.

## Project Structure

```
LearningProjects/
├── include/          # C++ header files (public interface)
│   ├── Demo.h        # Demo class header (bank account example)
│   └── MyClass.h     # Simple inline class
├── src/              # C++ source files (implementation)
│   ├── main.cpp      # Entry point
│   └── Demo.cpp      # Demo class implementation
├── output/           # Build artifacts (git-ignored)
├── hello_world.py    # Python Hello World demo
├── .vscode/          # VS Code configuration
└── README.md
```

## Building & Running

### C++

Build all source files and run:

```bash
clang++ -std=c++17 -Iinclude -g src/*.cpp -o output/program
./output/program
```

Or use the **VS Code** build tasks (`Cmd+Shift+B`):
- `C/C++: clang++ 编译所有文件（推荐）` — compiles all `.cpp` files under `src/`
- `C/C++: 编译并运行` — compiles + runs in one step

### Python

```bash
python3 hello_world.py
```
