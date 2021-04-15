PROJECT_NAME = perceptron
test_name = test_$(PROJECT_NAME)
source =  src/initilize.c src/display.c src/activation.c src/forward.c src/prediction.c
test_source = unity/unity.c test/test.c 
INC_H = inc
INC_T = unity

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

all: 
	gcc -I $(INC_H) $(source) project_main.c -o $(call FixPath,$(PROJECT_NAME).$(EXEC))

test:
	gcc -I $(INC_H) -I $(INC_T) $(test_source) $(source) -o $(call FixPath,$(test_name).$(EXEC))
	./$(call FixPath,$(test_name).$(EXEC))

run: 	
	./$(call FixPath,$(PROJECT_NAME).$(EXEC))

clear:
	$(RM) *.$(EXEC)	
