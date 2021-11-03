commentgen: commentgen.o
	gcc obj/commentgen.o -o bin/commentgen

commentgen.o:
	gcc -DPROGRAMMER_NAME='"$(name)"' -DCLASS='"$(class)"' -c comment_gen.c -o obj/commentgen.o

clean:
	rm bin/* -f
	rm obj/* -f
