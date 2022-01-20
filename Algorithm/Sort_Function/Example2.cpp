#include<iostream>
#include<algorithm>



using namespace std;


/*
How to sort in a particular order? 

We can also write our own comparator function and pass it as a third parameter. 
This “comparator” function returns a value; convertible to bool, which basically tells us whether 
the passed “first” argument should be placed before the passed “second” argument or not. 
For eg: In the code below, suppose intervals {6,8} and {1,9} are passed as arguments in the “compareInterval” function(comparator function). 
Now as i1.first (=6) > i2.first (=1), so our function returns “false”, which tells us that “first” argument 
should not be placed before “second” argument and so sorting will be done in order like {1,9} first and then {6,8} as next. 
*/


void main()
{




}
