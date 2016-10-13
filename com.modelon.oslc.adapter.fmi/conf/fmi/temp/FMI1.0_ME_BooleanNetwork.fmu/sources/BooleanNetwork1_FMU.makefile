# Makefile generated by OpenModelica

# Simulation of the fmu with dymola does not work
# with inline-small-functions
SIM_OR_DYNLOAD_OPT_LEVEL=-O #-O2  -fno-inline-small-functions
CC=gcc
CXX=g++
LINK=g++ -shared -Xlinker --export-all-symbols
EXEEXT=.exe
DLLEXT=.dll
CFLAGS_BASED_ON_INIT_FILE=
PLATFORM = win32
PLAT34 = win32
CFLAGS=$(CFLAGS_BASED_ON_INIT_FILE) ${SIM_OR_DYNLOAD_OPT_LEVEL} -falign-functions -msse2 -mfpmath=sse ${MODELICAUSERCFLAGS}  
CPPFLAGS=-I"C:/OpenModelica/trunk/build//include/omc/c" -I"C:/OpenModelica/trunk/build//include/omc/c/fmi1" -I. 
LDFLAGS=-L"C:/OpenModelica/trunk/build//lib/omc" -Wl,-rpath,'C:/OpenModelica/trunk/build//lib/omc' -lSimulationRuntimeC -lregex -lexpat -lgc -lpthread -fopenmp -loleaut32  -lSimulationRuntimeC -lgc -lexpat -lregex -static-libgcc -luuid -loleaut32 -lole32 -lws2_32 -llis -lumfpack -lamd -lsundials_kinsol -lsundials_nvecserial -lipopt -lcoinmumps -lpthread -lm -lgfortranbegin -lgfortran -lmingw32 -lgcc_eh -lmoldname -lmingwex -lmsvcrt -luser32 -lkernel32 -ladvapi32 -lshell32 -llapack-mingw -lcminpack -ltmglib-mingw -lblas-mingw -lf2c -lwsock32 -lstdc++ -L"c:/OpenModelicaExternal/tools/FMI/Test_FMUs/FMI_1.0/ModelExchange/win32/OpenModelica/1.9.2/BooleanNetwork1"
PERL=perl
MAINFILE=BooleanNetwork1_FMU.c
MAINOBJ=BooleanNetwork1_FMU.o
CFILES=BooleanNetwork1.c BooleanNetwork1_functions.c BooleanNetwork1_records.c \
BooleanNetwork1_01exo.c BooleanNetwork1_02nls.c BooleanNetwork1_03lsy.c BooleanNetwork1_04set.c BooleanNetwork1_05evt.c BooleanNetwork1_06inz.c BooleanNetwork1_07dly.c \
BooleanNetwork1_08bnd.c BooleanNetwork1_09alg.c BooleanNetwork1_10asr.c BooleanNetwork1_11mix.c BooleanNetwork1_12jac.c BooleanNetwork1_13opt.c BooleanNetwork1_14lnz.c
OFILES=$(CFILES:.c=.o)
GENERATEDFILES=$(MAINFILE) BooleanNetwork1_FMU.makefile BooleanNetwork1_literals.h BooleanNetwork1_model.h BooleanNetwork1_includes.h BooleanNetwork1_functions.h  BooleanNetwork1_11mix.h BooleanNetwork1_12jac.h BooleanNetwork1_13opt.h BooleanNetwork1_init.c BooleanNetwork1_info.c $(CFILES) BooleanNetwork1_FMU.libs

# This is to make sure that BooleanNetwork1_*.c are always compiled.
.PHONY: $(CFILES)

PHONY: BooleanNetwork1_FMU
BooleanNetwork1_FMU: $(MAINOBJ) BooleanNetwork1_functions.h BooleanNetwork1_literals.h $(OFILES)
	$(CXX) -shared -I. -o BooleanNetwork1$(DLLEXT) $(MAINOBJ) $(OFILES) $(CPPFLAGS) -L"c:/OpenModelicaExternal/tools/FMI/Test_FMUs/FMI_1.0/ModelExchange/win32/OpenModelica/1.9.2/BooleanNetwork1"   $(CFLAGS) $(LDFLAGS) -Wl,-Bstatic -lf2c -Wl,-Bdynamic -llis -Wl,--kill-at

	mkdir.exe -p BooleanNetwork1.fmutmp
	mkdir.exe -p BooleanNetwork1.fmutmp/binaries
	mkdir.exe -p BooleanNetwork1.fmutmp/binaries/win32
	mkdir.exe -p BooleanNetwork1.fmutmp/sources

	dlltool -d BooleanNetwork1.def --dllname BooleanNetwork1$(DLLEXT) --output-lib BooleanNetwork1.lib --kill-at
	cp BooleanNetwork1$(DLLEXT) BooleanNetwork1.fmutmp/binaries/win32/
	cp BooleanNetwork1.lib BooleanNetwork1.fmutmp/binaries/win32/
	cp $(GENERATEDFILES) BooleanNetwork1.fmutmp/sources/
	cp C:/OpenModelica/trunk/build//include/omc/c/fmi1/fmu1_model_interface.h C:/OpenModelica/trunk/build//include/omc/c/fmi1/fmu1_model_interface.c BooleanNetwork1.fmutmp/sources/
	cp modelDescription.xml BooleanNetwork1.fmutmp/modelDescription.xml
	cp C:/OpenModelica/trunk/build//bin/libexpat.dll BooleanNetwork1.fmutmp/binaries/win32/
	cp C:/OpenModelica/trunk/build//bin/pthreadGC2.dll BooleanNetwork1.fmutmp/binaries/win32/
	cp C:/OpenModelica/trunk/build//bin/libgfortran-3.dll BooleanNetwork1.fmutmp/binaries/win32/
	cd BooleanNetwork1.fmutmp&& rm -f ../BooleanNetwork1.fmu&& zip -r ../BooleanNetwork1.fmu *
	rm -rf BooleanNetwork1.fmutmp
	rm -f BooleanNetwork1.def BooleanNetwork1.o BooleanNetwork1.so BooleanNetwork1_*.o