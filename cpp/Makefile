CC:=g++
exe:=test
obj:=colors_test.o

all:$(obj)
	$(CC) -o $(exe) $(obj)
	
%.o:%.c
	$(CC) -c $^ -o $@

.PHONY:clean
clean:
	rm -rf $(obj) $(exe)
