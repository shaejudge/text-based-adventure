CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -g
LDFLAGS = -lboost_date_time

OBJS= main.o

SRCS = main.cpp zClasses.cpp zStoryFunction.cpp zPassphraseFunction.cpp

HEADERS = zClasses.h zStoryHeader.h zPassphrase.h

main: ${OBJS} ${HEADERS}
	${CXX} ${LDFLAGS} ${OBJS} -o main

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)
