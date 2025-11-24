nasm -f win64 MP2_ASM_Tiopes.asm
gcc -c MP2_C_Tiopes-main.c -o MP2_C_Tiopes-main.obj -m64
gcc MP2_C_Tiopes-main.obj MP2_ASM_Tiopes.obj -o MP2_C_Tiopes-main.exe -m64
MP2_C_Tiopes-main.exe < input.txt