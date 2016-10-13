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
LDFLAGS=-L"C:/OpenModelica/trunk/build//lib/omc" -Wl,-rpath,'C:/OpenModelica/trunk/build//lib/omc' -lSimulationRuntimeC -lregex -lexpat -lgc -lpthread -fopenmp -loleaut32  -lSimulationRuntimeC -lgc -lexpat -lregex -static-libgcc -luuid -loleaut32 -lole32 -lws2_32 -llis -lumfpack -lamd -lsundials_kinsol -lsundials_nvecserial -lipopt -lcoinmumps -lpthread -lm -lgfortranbegin -lgfortran -lmingw32 -lgcc_eh -lmoldname -lmingwex -lmsvcrt -luser32 -lkernel32 -ladvapi32 -lshell32 -llapack-mingw -lcminpack -ltmglib-mingw -lblas-mingw -lf2c -lwsock32 -lstdc++ -L"c:/OpenModelicaExternal/tools/FMI/Test_FMUs/FMI_1.0/ModelExchange/win32/OpenModelica/1.9.2/CoupledClutches"
PERL=perl
MAINFILE=CoupledClutches_FMU.c
MAINOBJ=CoupledClutches_FMU.o
CFILES=CoupledClutches.c CoupledClutches_functions.c CoupledClutches_records.c \
CoupledClutches_01exo.c CoupledClutches_02nls.c CoupledClutches_03lsy.c CoupledClutches_04set.c CoupledClutches_05evt.c CoupledClutches_06inz.c CoupledClutches_07dly.c \
CoupledClutches_08bnd.c CoupledClutches_09alg.c CoupledClutches_10asr.c CoupledClutches_11mix.c CoupledClutches_12jac.c CoupledClutches_13opt.c CoupledClutches_14lnz.c
OFILES=$(CFILES:.c=.o)
GENERATEDFILES=$(MAINFILE) CoupledClutches_FMU.makefile CoupledClutches_literals.h CoupledClutches_model.h CoupledClutches_includes.h CoupledClutches_functions.h  CoupledClutches_11mix.h CoupledClutches_12jac.h CoupledClutches_13opt.h CoupledClutches_init.c CoupledClutches_info.c $(CFILES) CoupledClutches_FMU.libs

# This is to make sure that CoupledClutches_*.c are always compiled.
.PHONY: $(CFILES)

PHONY: CoupledClutches_FMU
CoupledClutches_FMU: $(MAINOBJ) CoupledClutches_functions.h CoupledClutches_literals.h $(OFILES)
	$(CXX) -shared -I. -o CoupledClutches$(DLLEXT) $(MAINOBJ) $(OFILES) $(CPPFLAGS) -L"c:/OpenModelicaExternal/tools/FMI/Test_FMUs/FMI_1.0/ModelExchange/win32/OpenModelica/1.9.2/CoupledClutches"   $(CFLAGS) $(LDFLAGS) -Wl,-Bstatic -lf2c -Wl,-Bdynamic -llis -Wl,--kill-at

	mkdir.exe -p CoupledClutches.fmutmp
	mkdir.exe -p CoupledClutches.fmutmp/binaries
	mkdir.exe -p CoupledClutches.fmutmp/binaries/win32
	mkdir.exe -p CoupledClutches.fmutmp/sources

	dlltool -d CoupledClutches.def --dllname CoupledClutches$(DLLEXT) --output-lib CoupledClutches.lib --kill-at
	cp CoupledClutches$(DLLEXT) CoupledClutches.fmutmp/binaries/win32/
	cp CoupledClutches.lib CoupledClutches.fmutmp/binaries/win32/
	cp $(GENERATEDFILES) CoupledClutches.fmutmp/sources/
	cp C:/OpenModelica/trunk/build//include/omc/c/fmi1/fmu1_model_interface.h C:/OpenModelica/trunk/build//include/omc/c/fmi1/fmu1_model_interface.c CoupledClutches.fmutmp/sources/
	cp modelDescription.xml CoupledClutches.fmutmp/modelDescription.xml
	cp C:/OpenModelica/trunk/build//bin/libexpat.dll CoupledClutches.fmutmp/binaries/win32/
	cp C:/OpenModelica/trunk/build//bin/pthreadGC2.dll CoupledClutches.fmutmp/binaries/win32/
	cp C:/OpenModelica/trunk/build//bin/libgfortran-3.dll CoupledClutches.fmutmp/binaries/win32/
	cd CoupledClutches.fmutmp&& rm -f ../CoupledClutches.fmu&& zip -r ../CoupledClutches.fmu *
	rm -rf CoupledClutches.fmutmp
	rm -f CoupledClutches.def CoupledClutches.o CoupledClutches.so CoupledClutches_*.o