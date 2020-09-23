CC = gcc

libcrashme.so : crashme.c ../../common/crash_impl.h
	$(CC) -g -fPIC -Wall -Wextra -shared $< -o $@
