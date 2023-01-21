#Simple makefile

CC=gcc
BIN_DIR=target/bin
OBJ_DIR=target/obj
SRC_DIR=src
COMP_CONF_GTK=`pkg-config --cflags gtk+-3.0`
COMP_LIBS_GTK=`pkg-config --libs gtk+-3.0`
MV=mv

src_files:=${wildcard ${SRC_DIR}/*.c}

all: clean compilegtk moveto

clean:
	-${RM} ${BIN_DIR}/gui

compilegtk:
	${CC} ${COMP_CONF_GTK} ${src_files} -o gui ${COMP_LIBS_GTK}

moveto:
	${MV} gui ${BIN_DIR}