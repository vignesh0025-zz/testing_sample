##README
To compile the main app, run the following command
	
	cd testing_sample
	make
	
To execute the application
	
	./main
	
####TESTING

To compile the test app, do the following

	cd testing_sample/test
	make
	
To run the test application,
	
	./test
	
####Clean the produced files

Not so important here but works in both test and testing_sample

	make clean
	
	
####Test Input

To execute all the test cases

	give 0 input

To execute specific test case, give test case no

####Files

	test.c 

It contains the test cases. Add your test cases in it. Test case main function is present here. 

	test.h
	
Add the prototype of functions in test.c in here

	app.c
	
Main application source containing functionalities. **test.c** tests the functions in the file **app.c**

	app.h
	
	**IMPORTANT**
	Add prototype for functions in app.c here compulsary. Otherwise, test framework can't find the function.

Contains prototype for functions in app.c	
	
	main.c
	
Cotains the application main file. Nothing much here

	
