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