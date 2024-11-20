<p align="center">
  <img src="https://user-images.githubusercontent.com/81205527/149212588-45d60d10-2e78-46c5-bf0c-0dc247464ad5.png" alt="Get Next Line Logo">
  <p align="center" ># Get Next Line</p>
</p>


💡 **About the project**

The goal of this project is to implement a function that reads and returns a single line from a file descriptor. Through this project, you will learn how files are opened, read, and closed at the operating system level, and how these actions are handled in C programming. This is a crucial skill for understanding file manipulation and data persistence.

---

🛠️ **Usage**

### Requirements
This project is written in C and requires the `gcc` compiler along with standard C libraries.

### Instructions

1. **Including in Your Code**  
   To use the function, include its header in your code:  
   ```c
   #include "get_next_line.h"
   ```
   When compiling, add the source files and specify a buffer size:
   ```bash
   gcc get_next_line.c get_next_line_utils.c -D BUFFER_SIZE=<size>
   ```

2. **Testing**  
   Uncomment the provided main function in `get_next_line.c` to test the function. Modify `test.txt` with your desired input, then compile and run:  
   ```bash
   gcc -Wall -Werror -Wextra -D BUFFER_SIZE=xx get_next_line.c get_next_line_utils.c && ./a.out
   ```

   Alternatively, use a third-party tester like [Tripouille/gnlTester](https://github.com/Tripouille/gnlTester) for comprehensive tests.

---

📋 **Testing Features**

- The function handles different buffer sizes (`BUFFER_SIZE` can be set at compile time).  
- It correctly manages file descriptors and memory allocations.  
- Supports bonus functionality for handling multiple file descriptors simultaneously.

---

🎉 **Enjoy coding and happy learning!**