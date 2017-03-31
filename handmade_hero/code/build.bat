@echo off

mkdir ..\..\build
pushd ..\..\build
cl -Zi ..\handmade_hero\code\win32_handmade.cpp user32.lib
popd
