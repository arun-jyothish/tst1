
.PHONY: clean 
.SILENT: file-1.txt %.o clean all
src := $(wildcard *.c)
bin := $(src:%.c=%)
obj := $(src:%.c=%.o)
obj_dir := objs/ 

clean: 
	rm -rvfd *.o 

all : $(obj)
	echo "I am inside" 
	# gcc -o build $(addprefix objs/,$(obj))	

%.o : %.c
	mkdir -p objs
	gcc -c $(obj_dir,@) $<


