
   
# Compiler variables
CXX = g++
CXXFLAGS = -Wall -Werror -std=c++11
        
# Rule to link object code files to create executable file
introduction: introduction.o
	$(CXX) $(CXXFLAGS) -o introduction $^

# Rules to compile source code file to object code
introduction.o: introduction.cc

   
# Pseudo-target to remove object code and executable files
clean:
	rm -f introduction *.o
