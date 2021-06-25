###  
Author : Zacharopoulos Apostolos  
Date   : 08/06/2020
# Transpiler
A source to source compiler made for the purposes of <b>Theory of Computation</b> course.
##
**Details**  
The transpiler takes as input a program written in a language called <i>miniscript</i> and generates the corresponding programm in C code.  
We were given the set of rules of Miniscript and had to implement the rules to translate the imput code to a C programm that can be compiled and run.<br>  
* <b>mylexer.l</b>  
  Implements the tokenization of keywords and basic patterns (i.e. integer pattern)
* <b>myanalyzer.y</b>  
  Implements the expressions and pattern matching so a given a miniscript programm, the transpiler matches the input code with the written patterns and translates it to C code using the expressions.  
  **Instructions**:   
   1: Run 'make all' to create the final compiler  
   2: Run 'make [program]' to test different cases, where <program> = [myprog, msexample, prime_test]  
   3: Run 'make compile final' to compile the finalOutput.c file which contains the transcribed code.  
   4: Run ' ./a.out ' to run & test the executable C code.  
   5: Run ' make clean' in case you want to clean up priject files. 
