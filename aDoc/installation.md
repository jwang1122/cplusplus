1. Install extension C/C++ ms-vscode.cpptools
2. Download [Visual Studio IDE](https://visualstudio.microsoft.com/downloads/#other)

    File name: vs_community__785343363.1618149566.exe

    [C/C++ for VS Code](https://code.visualstudio.com/docs/languages/cpp)
3. Install compiler 
   [MinGW-w64-for 32 and 64 bit Windows](https://sourceforge.net/projects/mingw-w64/postdownload)
   
    File name: mingw-w64-install.exe

    Default Location: 
    C:\Program Files\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin

```
g++ --version
```

4. Compile the source code

```
C:\Users\12818\workspace\cplusplus>g++ -c helloWorld.cpp
g++ helloWorld.cpp -o helloWorld.exe
```
5. Running the source code

```
C:\Users\12818\workspace\cplusplus>helloWorld
```

```launch.json
,
        
        {
            "name": "cl.exe - Build and debug active file",
            "type": "cppvsdbg",
            "request": "launch",
            "program": "${fileDirname}\\${fileBasenameNoExtension}.exe",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "console": "externalTerminal",
            "preLaunchTask": "C/C++: cl.exe build active file"
        }
```

