CXXFLAGS = -std=c++17 -O2

main: main.o invsqrt.o
	$(CXX) $(CXXFLAGS) -o $@ $^  

main.o: main.cpp invsqrt.h
	$(CXX) $(CXXFLAGS) -o $@ -c $<

invsqrt.o: invsqrt.cpp invsqrt.h
	$(CXX) $(CXXFLAGS) -o $@ -c $<

.PHONY: clean
clean:
	rm main.o invsqrt.o main