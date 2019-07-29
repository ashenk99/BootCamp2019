#include <stdio.h>
#include <mpi.h>


int main (int argc, char *argv[])
{
    int my_rank, size, input;
    int sum= 0;


    MPI_Init(&argc, &argv);

    MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);

    MPI_Comm_size(MPI_COMM_WORLD, &size);
    
    input = my_rank;
    /* Compute sum of all ranks. */
    MPI_Reduce(&input, &sum, 1, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);
    printf ("Rank %i:\tSum = %i\n", my_rank, sum);

    MPI_Finalize();
    return 0;
}
