A translator that accepts simple C programs, and turns them into pseudocodes.

# Capabilities:

## 1) Recognize functions:<br /><br />
  Each function in input file will be translated into a Pseudocode like below. First
   reserved keyword “FUNCTION” is printed. Then, the name of the function
  in C is printed followed by the list of input parameters. After this, the body of function
  is printed in an appropriate way into the Pseudocode. Finally the function
  definition is completed by printing “END FUNCTION functionName” reserved keyword.  

    void functionName(inputList)
    {
      //body
    }
    --------------------------------
    FUNCTION functionName inputList  
      //body
    END FUNCTION functionName  
  
## 2) Call functions:<br /><br />
a. printf function: All the details about the format will be ignored. PRINT keyword is used.<br /> 

    printf (“%d\n”,Factorial);
    --------------------------
    PRINT Factorial
b. scanf function: All the details about the format will be ignored. READ keyword is used.<br /> 

    scanf (“%d”,&MAX);
    ------------------
    READ MAX
c. A user defined function will be called by calling its name and its parameters<br /> 

    multFunc(a,b); // A C function call
    multFunc a b // Its corresponding pseudocode output  

## 3) Return from functions:<br /><br />
A return statement with an argument is translated as follows:<br />

    return(a); // A C return statement
    functionName=a // Its corresponding pseudocode output
    // Here, the functionName will be the the name of the function hosting the return statement.

## 4) Loops: <br /><br />
Only C for loops will be recognized as input and structure of the input will be as follows:<br />

    for (assignment;comparison;increment)

● assignment can be anything like:<br />

    a=b;
    j=1;
● comparison can be anything like:<br />

    a==b
    a<b
    a<=b
    a>b
    a>=b
    a!=b
    a==5
    5==a
    etc.
● Increment can be<br />

    i++;
    i--;
    i=i+1;
Example:<br />

    for(assignment;comparison;increment)
    {
      //body
    }
    ------------
    assignment
    WHILE comparison
      //body
    increment
    END WHILE

## 5) If conditions:<br /><br />
if else if else if … else condition is accepted in the design.<br />
Input structure will be:<br />

    if (comparison){
      //body
    }
    else if (comparison){
      //body
    }
    else {
      //body
    }
    ---------------
    IF comparison THEN
      //body
    ELSEIF comparison THEN
      //body
    ELSE
      body
    ENDIF
    
Multiple “else if” is accepted.<br />
Note that: There will be only one comparison in an “if condition”. That means conditions like“a==b && c<d” are not supported.<br /><br />

## 6) Nested Loop and Nested If statements:<br /><br />
Each loop can include loops and if statements. For each nested loop or if statements you should use indentation. <br /><br />
Example:<br />

    for(i=0 ; i<10 ; i++)
    {
      a=a+i;
      k=1;
      for(j=1 ; j<10 ; j++)
      {
        k=k*2;
      }
      if(k==1)
        k=0;
    }
    -------------------
    i=0
    WHILE i<10
      a=a+i
      k=1
      j=1
      WHILE j<10
        k=k*2
        j=j+1
      END WHILE
      IF k==1
        k=0
      ENDIF
      i=i+1
    END WHILE
