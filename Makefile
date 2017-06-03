compiler=g++
binary=add
obj_files=add.o printutil.o main.o


build: $(obj_files)
	@echo "Linking OBJECT files"
	$(compiler) -o $(binary) $(obj_files)
	@echo "Build completed"

main.o : main.cc add.h printutil.h
	$(compiler) -c main.cc

add.o : add.cc add.h
	$(compiler) -c add.cc

printutil.o : printutil.cc printutil.h
	$(compiler) -c printutil.cc

	
	
