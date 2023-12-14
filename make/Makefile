
.PHONY: clean 
.SILENT: file-1.txt %.o clean all new
# SHELL=/bin/bash
src := $(wildcard *.c)
bin := $(src:%.c=%)
obj := $(src:%.c=%.o)
obj_dir := objs/ 
pattern := $(wildcard *.st.*.sr)
.DEFAULT_GOAL=new

all : $(obj)
	echo ${src}
	$(MAKE) -C src
	ls
	# gcc -o build $(addprefix objs/,$(obj))	


%.o : %.c
	mkdir -p objs
	gcc -c $(obj_dir,@) $<

clean: 
	rm -rvfd *.o 

new:
	echo ${pattern}
	echo $(SHELL)
# makefile
blah::
	echo hello
pwd=pwd
blah::
	echo hello 2
	echo $(pwd) 
