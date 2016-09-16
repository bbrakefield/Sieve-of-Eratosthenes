; Assembly Language Statements
; Program to find all prime numbers between 2 and 10,000 using the Sieve of Eratosthenes
; Author: Brannon R. Brakefield    Date: September 2016

.586
.MODEL FLAT
.STACK 4096                         ; reserve 4096-byte stack

.DATA                               ; reserve storage for data

array   BYTE   10000 DUP(0)
i       DWORD   ?
j       DWORD   ?
k       DWORD   -1

.CODE                               ; start of main program code
_main  PROC

driverloop:
    inc k                           ; increment most outerloop
    cmp k,  10000                   ; compare counter to 10000
    jge quit                        ; if value in counter is greater than or equal to 100 jump to quit process

    ; move starting values into counters
    mov     i, 2                    ; move 2 into 1st counter
    mov     j, 2                    ; move 2 into 2nd counter

loop1:
    ; outer loop
    cmp     i, 10000                ; comapre 1st counter to 10000
    jge     driverloop              ; if greater than or equal to 10,000 quit the program
      
loop2:
    ; calculate index product 
    mov     eax, i                  ; move counter 1 into register
    mul     j                       ; multiply by value in 2nd counter and store in eax
    cmp     eax, 10000              ; compare product to 10000
    jg      loop2Done               ; jump to label2Done if product is greater than 10,000
    cmp     [array + eax], 0        ; comapare the value at the current array index to zero
    jnz     increment_index         ; if it does not equal zero do nothing and jump to increment index
    mov     [array + eax], 1        ; otherwise place 1 in the index because the number is composite

increment_index:
    ; counter logic
    inc     j                       ; increment 2nd counter
    jmp     loop2                   ; loop back to beginning of loop

loop2Done:
    inc     i                       ; increment outer loop
    mov     j, 2                    ; reset 2nd counter to 2
    jmp     loop1                   ; jump to the begining of first loop


quit:
    mov     eax, 0                  ; exit with return code 0
    ret

_main  ENDP

END
