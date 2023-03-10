/*
 *  prodcons header
 *  Function prototypes, data, and constants for producer/consumer module
 *
 *  University of Washington, Tacoma
 *  TCSS 422 - Operating Systems
 */

// PRODUCER-CONSUMER put() get() function prototypes
int put(Matrix * value);
Matrix * get();
void initialize_buffer();
// int get_next_put_index();
// int get_next_get_index();

// Data structure to track matrix production / consumption stats
// sumtotal - total of all elements produced or consumed
// multtotal - total number of matrices multipled
// matrixtotal - total number of matrces produced or consumed
typedef struct prodcons {
  int sumtotal;
  int multtotal;
  int matrixtotal;
  counter_t counter;
} ProdConsStats;

// PRODUCER-CONSUMER thread method function prototypes
void *prod_worker(void *arg);
void *cons_worker(void *arg);

// Routines to add and remove matrices from the bounded buffer
int put(Matrix *value);
Matrix * get();
