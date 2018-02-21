#-------------------------------------------
# Makefile for any C program with ROOT lib
# Zhihong Ye, 01/09/2009
#-------------------------------------------

PROGRAM = GetRate
#PROGRAM = CheckRate
#PROGRAM = CheckRate_Pi
#PROGRAM = RateCal

CFLAGS = $(shell $(ROOTSYS)/bin/root-config --cflags)
LIBS   = $(shell $(ROOTSYS)/bin/root-config --libs)
GLIBS  = $(shell $(ROOTSYS)/bin/root-config --glibs)

CFLAGS += -Wall
INCLUDE := -I${ROOTSYS}/include
RTLIBS := -L${ROOTSYS}/lib -lCore
all: $(PROGRAM)

RTLIBS := -lgfortran # /usr/lib/libg2c.so.0 #use /usr/lib64/ for ifarm
GFORTRAN := gfortran
FFLAGS = -C -g -m64 -fbounds-check -finit-local-zero -fno-automatic


GFORTRAN_OBJ =  F1F209.o CJpdf.o wiser_all_sig.o quadmo.o

$(PROGRAM): $(PROGRAM).o $(GFORTRAN_OBJ)
	g++ -o $(PROGRAM) $(PROGRAM).o $(CFLAGS) $(GFORTRAN_OBJ) $(RTLIBS) $(LIBS) $(GLIBS)


$(PROGRAM).o: $(PROGRAM).C
	g++ $(CFLAGS) -c -o $(PROGRAM).o $(PROGRAM).C  ${INCLUDE}

F1F209.o: F1F209.f 
	rm -f $@
	$(GFORTRAN) $(FFLAGS) -c F1F209.f;

CJpdf.o: CJpdf.f 
	rm -f $@
	$(GFORTRAN) $(FFLAGS) -c CJpdf.f;

wiser_all_sig.o: wiser_all_sig.f quadmo.o
	rm -f $@
	$(GFORTRAN) $(FFLAGS) -c wiser_all_sig.f;

quadmo.o: quadmo.f 
	rm -f $@
	$(GFORTRAN) $(FFLAGS) -c quadmo.f;

clean:
#	rm -f *.o ${GFORTRAN_OBJ}
	rm -f *.o
