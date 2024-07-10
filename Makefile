CC := gcc
CFLAGS := -g
eval:eval.c
	$(CC) $(CFLAGS) -o eval eval.c
