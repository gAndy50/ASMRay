format PE GUI 4.0
entry start

include 'win32ax.inc'
include 'raylib.inc'


section '.data' data readable writeable


title db 'raylib [shapes] example - bouncing ball',0

txtPause      db 'PRESS SPACE to PAUSE BALL MOVEMENT',0
txtGravityOn  db 'GRAVITY: ON (Press G to disable)',0
txtGravityOff db 'GRAVITY: OFF (Press G to enable)',0
txtPaused     db 'PAUSED',0


; Window size

screenWidth  dd 800
screenHeight dd 450


; Ball data

ballPosition Vector2 400.0,225.0
ballSpeed    Vector2 5.0,4.0

ballRadius  dd 20
radiusFloat dd 20.0


gravity dd 0.2

negOne    dd -1.0
negBounce dd -0.95

sleepThreshold dd 1.0
zeroFloat dd 0.0

useGravity   dd 1
pauseGame    dd 0
framesCounter dd 0


section '.text' code readable executable


start:


    ; SetConfigFlags(FLAG_MSAA_4X_HINT)

    push FLAG_MSAA_4X_HINT
    call [SetConfigFlags]
    add esp,4



    ; InitWindow(width,height,title)

    push title
    push dword [screenHeight]
    push dword [screenWidth]

    call [InitWindow]
    add esp,12



    ; SetTargetFPS(60)

    push 60
    call [SetTargetFPS]
    add esp,4



;==================================================
; MAIN LOOP
;==================================================

.mainloop:


    call [WindowShouldClose]
    test eax,eax
    jnz .quit



;--------------------------------------------------
; INPUT
;--------------------------------------------------

    push KEY_G
    call [IsKeyPressed]
    add esp,4

    test eax,eax
    jz .space_check

    xor dword [useGravity],1



.space_check:


    push KEY_SPACE
    call [IsKeyPressed]
    add esp,4

    test eax,eax
    jz .update

    xor dword [pauseGame],1

    cmp dword [pauseGame],0
    jne .update

    mov dword [framesCounter],0

;--------------------------------------------------
; UPDATE
;--------------------------------------------------

.update:


    cmp dword [pauseGame],0
    jne .paused



    ; x += speed.x

    fld dword [ballPosition.x]
    fadd dword [ballSpeed.x]
    fstp dword [ballPosition.x]



    ; y += speed.y

    fld dword [ballPosition.y]
    fadd dword [ballSpeed.y]
    fstp dword [ballPosition.y]



    ; gravity

    cmp dword [useGravity],0
    je .check_x


    fld dword [ballSpeed.y]
    fadd dword [gravity]
    fstp dword [ballSpeed.y]



;==================================================
; COLLISION
;==================================================


.check_x:


    ; Right wall

    call [GetScreenWidth]
    sub eax,[ballRadius]

    mov [screenWidth],eax


    fld dword [ballPosition.x]
    fild dword [screenWidth]

    fxch st1
    fcomip st0,st1
    fstp st0
    jb .left_x



     ; Clamp to the wall
    fild dword [screenWidth]
    fstp dword [ballPosition.x]

    ; Reverse X velocity
    fld dword [ballSpeed.x]
    fmul dword [negOne]
    fstp dword [ballSpeed.x]



.left_x:


    ; Left wall

    fld dword [ballPosition.x]
    fild dword [ballRadius]

    fxch st1
    fcomip st0,st1
    fstp st0
    ja .check_y



    ; Clamp to the wall
    fild dword [ballRadius]
    fstp dword [ballPosition.x]

    ; Reverse X velocity
    fld dword [ballSpeed.x]
    fmul dword [negOne]
    fstp dword [ballSpeed.x]



.check_y:


    ; Bottom wall

    call [GetScreenHeight]
    sub eax,[ballRadius]

    mov [screenHeight],eax


    fld dword [ballPosition.y]
    fild dword [screenHeight]

    fxch st1
    fcomip st0,st1
    fstp st0
    jb .top_y



      ; Clamp to the floor
    fild dword [screenHeight]
    fstp dword [ballPosition.y]

    ; Bounce
    fld dword [ballSpeed.y]
    fmul dword [negBounce]
    fstp dword [ballSpeed.y]

    ;------------------------------------------------
    ; If the rebound speed is very small,
    ; stop the ball instead of bouncing forever.
    ;------------------------------------------------

    fld dword [ballSpeed.y]
    fabs
    fcom dword [sleepThreshold]
    fstsw ax
    sahf
    fstp st0

    ja .draw              ; |speed| > threshold

    mov dword [ballSpeed.y],0



.top_y:


    ; Top wall

    fld dword [ballPosition.y]
    fild dword [ballRadius]

    fxch st1
    fcomip st0,st1
    fstp st0
    ja .draw


      ; Clamp to the ceiling
    fild dword [ballRadius]
    fstp dword [ballPosition.y]

    ; Bounce
    fld dword [ballSpeed.y]
    fmul dword [negBounce]
    fstp dword [ballSpeed.y]


    jmp .draw



.paused:

    inc dword [framesCounter]

;==================================================
; DRAW
;==================================================

.draw:


    call [BeginDrawing]


    ; ClearBackground(RAYWHITE)

    push dword [RAYWHITE]
    call [ClearBackground]
    add esp,4



    ; DrawCircleV(ballPosition, radius, MAROON)
    ;
    ; C prototype:
    ; DrawCircleV(Vector2 center, float radius, Color color)
    ;
    ; Vector2 and float are passed by value on the stack.

    push dword [MAROON]
    push dword [radiusFloat]
    push dword [ballPosition.y]
    push dword [ballPosition.x]

    call [DrawCircleV]
    add esp,16



    ; DrawText pause message

    call [GetScreenHeight]
    sub eax,25

    push dword [LIGHTGRAY]
    push 20
    push eax
    push 10
    push txtPause

    call [DrawText]
    add esp,20



    ; Gravity status text

    cmp dword [useGravity],0
    je .gravity_off



.gravity_on:


    call [GetScreenHeight]
    sub eax,50

    push dword [DARKGREEN]
    push 20
    push eax
    push 10
    push txtGravityOn

    call [DrawText]
    add esp,20

    jmp .pause_message



.gravity_off:


    call [GetScreenHeight]
    sub eax,50

    push dword [RED]
    push 20
    push eax
    push 10
    push txtGravityOff

    call [DrawText]
    add esp,20



;--------------------------------------------------
; PAUSED BLINKING MESSAGE
;--------------------------------------------------

.pause_message:


    cmp dword [pauseGame],0
    je .fps


    mov eax,[framesCounter]

    xor edx,edx
    mov ecx,30
    div ecx

    test eax,1
    jz .fps



    push dword [GRAY]
    push 30
    push 200
    push 350
    push txtPaused

    call [DrawText]
    add esp,20



;--------------------------------------------------
; FPS
;--------------------------------------------------

.fps:


    push 10
    push 10

    call [DrawFPS]
    add esp,8



    call [EndDrawing]


    jmp .mainloop



;==================================================
; EXIT
;==================================================

.quit:


    call [CloseWindow]


    push 0
    call [ExitProcess]