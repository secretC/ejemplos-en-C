# Debugging
$(warning un ALTO NIVEL de advertencia)

VAR1 := $(warning al lado DERECHO de una simple variable) variable
VAR2 = $(warning al lado DERECHO de una variable recursive) var_recursive

$(warning Un objetivo) target : $(warning En una lista de prerequisitos) makefile $(VAR2)
	$(warning En una secuencia de comandos)
	ls 

$(VAR2):

REQUIRED_DIRS = carpetaNueva
_MKDIRS:= $(shell for d in $(REQUIRED_DIRS);\
	do                                        \
    [ -d $$d ] || mkdir -p $$d;           \
	done)

$(objects) : $(sources)

# # Varible: files
# files = example1.c
# # Por defecto ejecutara la regla "run".
# DEFAULT: run


# compile: 
# 	cc $(files) -o example1

# run: compile
# 	./example1

# .PHONY: clean 

# clean: 
# 	rm -f example1



