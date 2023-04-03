############ MAKEFILE ###############
# lembre um tab
# nome do arquivo: saida obj
all: ola.o 
	g++ -o ola ola.o 

# saida obj: arquivo.extensao
ola.o: ola.cpp 
	g++ -c -o ola.o ola.cpp

# executavel:  chame na linha de comando ./ola
ola.exe:
	g++ ola.cpp -o ola

# limpesa chame na linha de comando make clean
clean:
	rm -f ola *.o
