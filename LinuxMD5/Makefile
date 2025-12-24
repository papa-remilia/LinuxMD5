CXX = g++
CXXFLAGS = -Wall -g
LDFLAGS = -lssl -lcrypto
TARGET = md5_app
OBJS = main.o md5.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) -o $@ $^ $(LDFLAGS)

main.o: main.cpp md5.h
	$(CXX) $(CXXFLAGS) -c main.cpp

md5.o: md5.cpp md5.h
	$(CXX) $(CXXFLAGS) -c md5.cpp

clean:
	rm -f $(TARGET) $(OBJS)