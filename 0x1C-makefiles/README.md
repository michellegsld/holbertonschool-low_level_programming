## README for 0x1C-makefiles ##
#### A directory within the holbertonschool-low_level_programming repo. ####

|  File Name  | Description |
| ----------- | --------- |
| 0-Makefile | Create the first Makefile by naming the executable `holberton` and following the `all` rule, which builds the executable. |
| 1-Makefile | Edit the Makefile by adding the variables `CC` and `SRC`. `CC` is for the compiler to be used while `SRC` is the `.c` files. |
| 2-Makefile | Edit the Makefile by adding two variables: `OBJ` and `NAME`. `OBJ` is for the `.o` files while `NAME` is the name of the executable. Nor the `all` rule should recompile only updated source files. |
| 3-Makefile | Edit the Makefile to add more rules like `clean`, `oclean`, `fclean`, and `re`. All of which should never fail. `Clean` deletes all Emacs/Vim temporary files and the executable. `oclean` deletes the object files while `fclean` deletes the Emacs temporary files, the executable, and the object files. `re` just forces all source files to recompile. Additionally, another variable called `RM` which is for the program to delete files. |
| 4-Makefile | Edit the Makefile by adding the variable `CFLAGS`, which contains the compiler flags `-Wall`, `-Werror`, `-Wextra`, and `-pedantic`. |
| 5-island_perimeter.py | A function that returns the perimeter of an island that is described by `grid`, which is a list of integers. 0 means water while 1 means land. Each cell is a square, side lengths being 1, and are connected horizontally/vertically but not diagonally. The entire grid is rectangular, neither side exceeding 100. As an additional rule, the island (if there is one) is completely surrounded by water and there are no water cells inside the island that isn't connected to the surrounding water. |
