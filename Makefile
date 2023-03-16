CC := g++ # This is the main compiler
# CC := clang --analyze # and comment out the linker last line for sanity
SRCDIR := src
BUILDDIR := build
TARGET := bin/runner.exe
 
SRCEXT := cpp
# SOURCES := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
SOURCES := $(wildcard $(SRCDIR)/*.cpp)
OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))
CFLAGS := -g -Wall -Wextra
LIB := -L lib -lSFML-window -lSFML-system -mwindows
INC := -I include
$(TARGET): $(OBJECTS)
	@echo " Linking...";
	$(CC) $^ -o $(TARGET) $(LIB)
$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@mkdir $(BUILDDIR)
	$(CC) $(CFLAGS) $(INC) -c -o $@ $<
clean:
	@echo " Cleaning..."; 
	rmdir /s /q $(BUILDDIR);
# Tests
tester:
	$(CC) $(CFLAGS) test/tester.cpp $(INC) $(LIB) -o bin/tester
# Spikes
ticket:
	$(CC) $(CFLAGS) spikes/ticket.cpp $(INC) $(LIB) -o bin/ticket
.PHONY: clean
