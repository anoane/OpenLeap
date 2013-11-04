CORES=$(shell grep -c ^processor /proc/cpuinfo)
THREADS=$(shell expr 2 \* $(CORES))
MAKEFLAGS=-j$(THREADS)

CL_RED="\033[31m"
CL_GRN="\033[32m"
CL_YLW="\033[33m"
CL_BLU="\033[34m"
CL_MAG="\033[35m"
CL_CYN="\033[36m"
CL_RST="\033[0m"

SHELL = /usr/bin/env bash
UNAME := $(shell uname)

SOURCESRAW=$(filter-out incomplete/%.cpp common/%.cpp classes/%.cpp,$(wildcard */*.cpp) $(wildcard *.cpp))
COMMONRAW=$(wildcard common/*.cpp)
CLASSESRAW=$(wildcard classes/*.cpp)

SOURCES=$(filter-out $(DIAF),$(SOURCESRAW))
COMMON=$(filter-out $(DIAF),$(COMMONRAW))
CLASSES=$(filter-out $(DIAF),$(CLASSESRAW))

define get-target-name
	@echo $(subst $(shell dirname $(1))/,,$(1))
endef

TARGETS = $(basename $(strip $(SOURCES)))

OBJS = $(subst .cpp,.o,$(COMMON)) \
       $(subst .cpp,.o,$(CLASSES)) \

DIRT = $(wildcard */*.o */*.so */*.d *.i *~ */*~ *.log)

CXXOPTS = -fmessage-length=0 -Wall -O3

CXXINCS = "-I$(CURDIR)/include" \
          $(shell pkg-config --cflags opencv) \
          $(shell pkg-config --cflags libusb-1.0)
#$(shell pkg-config --cflags sdl) \

LDLIBS = $(shell pkg-config --libs opencv) \
         $(shell pkg-config --libs libusb-1.0) \
         -lboost_thread-mt
#$(shell pkg-config --libs sdl) \

CXXFLAGS = $(CXXOPTS) $(CXXDEFS) $(CXXINCS)
LDFLAGS = $(LDOPTS) $(LDDIRS) $(LDLIBS)

.PHONY: Makefile

default all: $(TARGETS)

$(TARGETS): $(OBJS)

%: %.cpp
	@echo -e $(CL_GRN) BIN: $@$(CL_RST)
	$(CXX) $(CXXFLAGS) $^ $(LDFLAGS) -o $@

%.i: %.cpp
	@echo $@
	$(CXX) -E $(CXXFLAGS) $< | uniq > $@

_clean:
	@$(RM) $(DIRT)

_rmtargets:
	@$(RM) $(TARGETS)

clean: _clean
	@echo "Removed everything except compiled executables."

rmtargets: _rmtargets
	@echo "Removed executables."

clobber: _clean _rmtargets
	@echo "Removed objects and executables."

.PHONY: fresh
fresh:
	$(MAKE) clobber
	$(MAKE) all
