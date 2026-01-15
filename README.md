# Push Swap



_This project has been created as part of the 42 curriculum by g-alves-._



## Description



Push Swap is a sorting algorithm project that challenges students to sort a stack of integers using a limited set of operations with the minimum number of moves possible. The program receives a list of integers and outputs a sequence of instructions to sort them using two stacks (A and B) and a specific set of operations.



The goal is to implement an efficient sorting algorithm that minimizes the number of operations needed to sort the stack. This project explores algorithm optimization, data structures, and computational complexity.



The algorithm implemented uses the **Radix Sort** approach adapted for stack operations, which efficiently sorts integers by processing them bit by bit.



## Instructions



### Compilation



To compile the project, run:



```bash

make

```



This will generate the `push_swap` executable.



### Execution



Run the program with a list of integers as arguments:



```bash

./push_swap 3 2 5 1 4

```



Or with a single string containing multiple numbers:



```bash

./push_swap "3 2 5 1 4"

```



The program will output a series of operations to sort the stack.



### Available Operations



- **sa**: swap the first two elements of stack A

- **sb**: swap the first two elements of stack B

- **ss**: sa and sb at the same time

- **pa**: push the first element of B to the top of A

- **pb**: push the first element of A to the top of B

- **ra**: rotate stack A (shift all elements up by 1)

- **rb**: rotate stack B (shift all elements up by 1)

- **rr**: ra and rb at the same time

- **rra**: reverse rotate stack A (shift all elements down by 1)

- **rrb**: reverse rotate stack B (shift all elements down by 1)

- **rrr**: rra and rrb at the same time



### Cleaning



To remove object files:



```bash

make clean

```



To remove object files and the executable:



```bash

make fclean

```



To recompile from scratch:



```bash

make re

```



## Project Structure



The project is organized into the following files:



- **main.c**: Entry point and main program logic

- **push_swap.h**: Header file with function prototypes and structure definitions

- **parser.c**: Input validation and parsing functions

- **stack_utils.c**: Stack initialization and utility functions

- **normalization.c**: Number normalization for radix sort

- **radix.c**: Radix sort algorithm implementation

- **ops_swap.c**: Swap operations (sa, sb, ss)

- **ops_push.c**: Push operations (pa, pb)

- **ops_rotate.c**: Rotate operations (ra, rb, rr)

- **ops_reverse_rotate.c**: Reverse rotate operations (rra, rrb, rrr)

- **utils.c**: General utility functions



## Algorithm



The project uses a **Radix Sort** algorithm adapted for stack operations:



1. **Normalization**: Input numbers are normalized to a range from 0 to n-1 while preserving their relative order

2. **Bit-by-bit sorting**: The algorithm processes each bit position of the normalized numbers

3. **Stack operations**: Numbers are moved between stacks A and B based on the value of each bit

4. **Implementation Details: Memory & Data Structure**:

Unlike many implementations that use linked lists, this project was developed using static arrays. This choice was made to explore low-level memory management and simulate how the hardware's Call Stack operates:



- Manual Stack Pointer: I implemented an "artificial size" variable that acts as a Stack Pointer. It delimits the "active" memory from the "garbage" memory, controlling which elements are visible to the algorithm.



- Data Hiding: By manipulating the stack size manually, I ensured that "popped" elements remain in the array but are logically hidden, preventing unauthorized access—a concept similar to encapsulation.



- Memory Contiguity: Using arrays ensures that all data is stored contiguously in memory, which is a more hardware-friendly approach (better cache locality), even though it requires manual "shifting" of elements for push operations.





## Resources



### Classic References



- [Radix Sort Algorithm](https://en.wikipedia.org/wiki/Radix_sort) - Wikipedia article explaining the radix sort algorithm

- [Stack Data Structure](https://en.wikipedia.org/wiki/Stack_(abstract_data_type)) - Understanding stack operations and behavior

- [Push Swap Algorithm Visualization](https://push-swap42-visualizer.vercel.app/) - Interactive visualizer for understanding the operations



### AI Usage



AI assistance was used in the following parts of this project:



- **Documentation**: Creation and formatting of this README.md file according to 42 requirements

- **Code review**: Verification of norm compliance and best practices

- **Algorithm understanding**: Clarification of radix sort implementation details and optimization strategies

- **Debugging support**: Assistance in identifying and resolving memory leaks and edge cases



No AI-generated code was directly inserted into the core implementation. The sorting algorithm and all operations were developed manually following the project requirements and 42 School coding standards (Norminette).



## Author



**g-alves-** - 42 Student



---



*Project completed as part of the 42 School Common Core curriculum.*