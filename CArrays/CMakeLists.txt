﻿# CMakeList.txt: проект CMake для CArrays; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (CArrays "CArrays.c" "CArrays.h" "NewArrays.c")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
