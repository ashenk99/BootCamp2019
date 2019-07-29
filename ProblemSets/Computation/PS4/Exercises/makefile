####################################

all: dot.exec \
     pi.exec \
     norm.exec
####################################


## Compile dot_prod
dot.exec: dot_prod.cpp
	g++ dot_prod.cpp -fopenmp -o dot_prod.exec

## compile serial_pi
pi.exec: parallel_pi.cpp
	g++ parallel_pi.cpp -fopenmp -o parallel_pi.exec

## compile serial_pi
norm.exec: normalize_vec.cpp
	g++ normalize_vec.cpp -fopenmp -o normalize_vec.exec

clean:
	rm -rf *.exec
