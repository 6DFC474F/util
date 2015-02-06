CC = gcc
CFLAGS = -O4 -Wall -Werror -Wextra -pedantic -std=c89
PROGS = chr ord
BIN_DIR = bin
PREFIX = ~/bin
BINS = $(patsubst %, bin/%, $(PROGS))
INSTALLED_BINS = $(patsubst %, $(PREFIX)/%, $(PROGS))

all: $(BINS)

bin/%: src/%.c
	$(CC) $(CFLAGS) -o $@ $<

install:
	cp bin/* $(PREFIX)

uninstall:
	rm -f $(INSTALLED_BINS)

clean:
	rm -f bin/*
