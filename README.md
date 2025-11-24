# LBYARCH-S19B-MP2-Tiopes
Member/s:
Matthew Gavin A. Tiopes

## i. Performance Analysis

![Performance Table](/performance_time_table.png)

Performance time table can also be accessed here: https://docs.google.com/spreadsheets/d/1t4RqeG0V_ywO7esF8tEFSGoLWKuUwMNQ92bxLfj4Gbc/edit?usp=sharing

For this performance analysis, I used image sizes 10x10, 100x100, and 500x500 that have randomized values. I had to change the original 1000x1000 size to 500x500 so that my machine could run it properly. These image sizes were tested on both the x86-64/ASM function and C function, and the execution times of 30 iterations were recorded and then averaged. 

In the 10x10 tests,  ASM had an average time of 0.0285 seconds while C had an average time of 0.02916666667 seconds. This means that the ASM function had a slightly faster average time, about 0.0006666666667 seconds faster. 

In the 100x100 tests, ASM had an average time of 1.338866667 seconds while C had an average time of 1.336833333 seconds. This test had C with the one with a faster average time, but with only a miniscule 0.002033333333 second difference with the ASM function’s average time. 

Finally, in the 500x500 tests, ASM had an average time of 29.06753333 seconds while C had an average time of 30.60573333 seconds. The winner here is ASM with a quite large 1.5382 second difference with the C function’s average time.

Overall, I think the ASM function had better performance than the C function. It only lost to the C function once, but even then it was just very slightly slower. The big difference was the 500x500 tests, where ASM is way faster than C. I think that the trend that can be seen here is that the bigger the input grows in size, the better ASM will perform compared to C, even if ASM is around equal or slightly worse performing at smaller input sizes. 

## ii. Correctness Check Output

![Correctness Check](/correctness_check.png)

This uses the sample input found in input.txt

(There might be a discrepency with the sample given in the specs, I could not find a way to round the answers to the same numbers as in the specs so there may be an error in the specs)

## iii. Video Demonstration


