alter := $(patsubst %.c, %.o, $(wildcard *.c))
ans.exe : $(alter)
	gcc -o $@ $^
clean :
	rm *.exe *.o
