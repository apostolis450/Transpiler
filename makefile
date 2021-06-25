
objs = myanalyzer mylexer

all: mycompiler

mycompiler: $(objs)
	gcc -o mycompiler myanalyzer.tab.c lex.yy.c cgen.c -lfl

mylexer : mylexer.l
	flex mylexer.l

myanalyzer:
	bison -d -v -r all myanalyzer.y

myprog:
	./mycompiler < myprog.ms > finalOutput.c

msexample:
	./mycompiler< miniscript_example.ms > finalOutput.c

prime_test:
	./mycompiler < prime.ms > finalOutput.c

compile_final:
	gcc -std=c99 -Wall finalOutput.c

clean:
	rm -f *.o
	rm -f *.out
	rm -f *.output
