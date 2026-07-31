# ASMRay
Wrapper of Raylib for assembly (x86)

# ABOUT
This is a wrapper of Raylib (version 6.0) for the assembly programming language. This uses the fasm version of assembly (intel x86).
NOTE: You will need to have the DLL and source files in the same folder/directory. 

# EXAMPLE
```asm
format PE GUI 4.0
entry start

include 'win32ax.inc'
include 'raylib.inc'


section '.data' data readable writeable

title db 'Raylib Test',0


section '.text' code readable executable

start:

    push title
    push 720 ;height
    push 1024 ;width
    call [InitWindow]
    push 60  ;FPS
    call [SetTargetFPS]
    add esp,4
    add esp,12


.loop:

    call [WindowShouldClose]
    test eax,eax
    jnz .quit


    call [BeginDrawing]


    mov eax,[BLANK]
    push eax
    call [ClearBackground]
    add esp,4


    call [EndDrawing]

    jmp .loop


.quit:

    call [CloseWindow]

    push 0
    call [ExitProcess]
```

# LICENSE
Copyright (c) <2026> Andy P.

This software is provided 'as-is', without any express or implied warranty. In no event will the authors be held liable for any damages arising from the use of this software.

Permission is granted to anyone to use this software for any purpose, including commercial applications, and to alter it and redistribute it freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.
2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.
3. This notice may not be removed or altered from any source distribution.
