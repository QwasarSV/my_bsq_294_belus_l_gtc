/*
Get map with size transform it into a matrix : map matrix
create a dynamic programming matrix : dp matrix

if coord on map matrix !+ obstacle -> check on dp matrix if index/jndex and > 0 :
return value of
top[index-1][jndex]
left[index][jndex -1]
top_left[index -1][jndex-1]

update value dp matrix on coord -> dp[index][jndex] = 1 + min(top,left,topleft)
if dp[index][jndex] > max size
update max size and save right coord

exemple:

grid to check :
 ┌──┬──┬──┬──┬──┐
 │ .│ .│ x│ x│ x│
 ├──┼──┼──┼──┼──┤
 │ x│ .│ .│ .│ .│
 ├──┼──┼──┼──┼──┤
 │ x│ .│ x│ .│ .│
 ├──┼──┼──┼──┼──┤
 │ x│ .│ x│ x│ x│
 └──┴──┴──┴──┴──┘

check process on the two first iteration
 ┌──┬──┬──┬──┬──┐
 │ L│ L│ L│ L│ L│
 ├──┼──┼──┼──┼──┤
 │  │  │  │  │  │
 ├──┼──┼──┼──┼──┤
 │  │  │  │  │  │
 ├──┼──┼──┼──┼──┤
 │  │  │  │  │  │
 └──┴──┴──┴──┴──┘
    │  │
    │  │
    │  │
    ▼  ▼
 ┌──┬──┬──┬──┬──┐
 │TL│ T│  │  │  │
 ├──┼──┼──┼──┼──┤
 │ L│ R│  │  │  │
 ├──┼──┼──┼──┼──┤
 │  │  │  │  │  │
 ├──┼──┼──┼──┼──┤
 │  │  │  │  │  │
 └──┴──┴──┴──┴──┘
R is updated value

DP matrix on completion :

 ┌──┬──┬──┬──┬──┐
 │ 1│ 1│ 0│ 0│ 0│
 ├──┼──┼──┼──┼──┤
 │ 0│ 1│ 1│ 1│ 1│
 ├──┼──┼──┼──┼──┤
 │ 0│ 1│ 0│ 1│ 2│
 ├──┼──┼──┼──┼──┤
 │ 0│ 1│ 0│ 0│ 0│
 └──┴──┴──┴──┴──┘

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{


    return 0;
}