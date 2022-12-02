# fibonacci-benchmark

This folder contains all the files for fibonacci-recursive-iterative code implementation and benchmark interms of time and space complexity.
How to run this code: Along the files in this folder is Makefile which will make the process of running the code much easier.

a).To test the main_test.c: to show both approaches are equivalent 
                in your terminal type: make test 
                then exacute the code by typing: ./main_test.out
                
b). To check the time complexity for both recursive and iterative fibonacci series 
                for iterative, in your terminal type: make iterativeb-t execute command: ./main_b_time_iterative.out 
                for recursive, in your terminal type: make recursiveb-t execute command: ./main_b_time_recursive.out
                
c). To check the memory usage/space complexity for both recursive and iterative fibonacci series 
                in windows, type top in the terminal and you will see it in the memory section. 
                in linux, open your ubuntu(VM or WSL) type: ps aux in the page that appears after typing ps aux, copy the PID of the the command you want to check. For example, if you want to check iterative fibonacci memory usage, after typing ps aux, you will see a page that contains this command: ./main_b_space_iterative.out, and then copy it's PID number: 
                type pmap and paste your PID number then enter and the memory usage will appear at the bottom.
                ##Screenshots of the resuts are included in this folder. 
                ##the same process applies to both recursive and iterative.. 
                #make sure the file is running, preferably in infinite loop 
                Note: The recursive fibonacc-series is too slow compared to iterative. When testing, it is recommended to use numbers below 45 to compare.
                Else you gonna have to wait alot for the recursive to be executed... in my testing I used number 45 refer to the screenshots in this folder to see the testing-results

