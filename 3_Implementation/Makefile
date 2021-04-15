PROJECT_NAME = perceptron

source = project_main.c src/initilize.c src/display.c src/activation.c src/forward.c src/prediction.c

ifdef OS
   RM = del 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif
.PHONY: run clean test doc all

all: $(source)
	gcc $(source) -o $(call FixPath,$(PROJECT_NAME).$(EXEC))

run: 	
	$(call FixPath,$(PROJECT_NAME).$(EXEC))

clear:
	del *.exe *.o 	
