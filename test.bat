@echo off

_winget install kitware.cmake_ && (
    echo Success!
) || (
    cls
    echo Windows, right? Or maybe already installed.
    cmake --version
    cmake -S ~\TestCmake\builder\build
    pause
    cmake --build ~\builder\build
    pause
    cls
    cd Debug
    CarFactory 1 3
    pause
    cls
)