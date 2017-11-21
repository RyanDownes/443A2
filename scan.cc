
#include <sys/timeb.h>

#include "library.cc"

#include <algorithm>

#include <stdlib.h>

#include <iostream>

#include <fstream>

#include <string>

#include <sys/timeb.h>

#include <string.h>
#include <iomanip>

#include <string.h>
using namespace std;
int main(int argc, char** argv) {
    if (argc != 3){
        printf("Argument is not correct");
        exit(1);
    }
	 std::endl (std::cout);   
    char * buffer = (char*) malloc (2);
    std::ifstream csv_file;
    csv_file.open(argv[1], std::ifstream::in);
    FILE *page_file_ptr = fopen(argv[1], "r");
    Heapfile *heapfile = (Heapfile*) malloc(sizeof(Heapfile));
    int page_size = atoi(argv[2]);
	init_heapfile(heapfile, page_size, page_file_ptr);
    int record_size = ATTRIBUTE_SIZE * NUM_ATTRIBUTE;
	RecordIterator i = RecordIterator(heapfile);
	while (i.hasNext()){
		Record r = i.next();
		for( int i = 0; i < r.size(); i++){
  			  cout << r[i] ;
		}
		cout <<"\n";
            }

}
	


