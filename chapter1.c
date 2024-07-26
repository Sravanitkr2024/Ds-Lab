//
//#include<stdio.h>
//
//int foo(int a[1]){
//	int sum = 0;
//	for(int i = 0;i<5;i++){
//		sum = sum + a[i];
//	}
//	return sum;
//}
//
//
//int main(void) {
//
//	int a = 10;
//	printf("%d\n",a);
//	printf("%p\n",&a);
//	printf("%d\n",*(&a));
//
//	int *p; //declaration
//	p = &a;//initiisation of pointer of type int
//	printf("%d\n",*p);
////
//
//	int array[5] = {5,4,3,2,1};
//	int *ap;
//	ap = &array;
//
//	printf("%p\n",&array[0]);
//	printf("%p\n",&array[1]);
//	printf("%p\n",&array[2]);
//	printf("%p\n",&array[3]);
//	printf("%p\n",&array[4]);
//	printf("%p\n",ap);
//
//
//
//	printf("%d\n",*ap);
//	printf("%d\n",*ap+1);
//	printf("%d\n",*ap+2);
//	printf("%d\n",*ap+3);
//	printf("%d\n",*ap+4);//wrong
////
//	printf("%d\n",*ap);
//	printf("%d\n",*(ap+1));
//	printf("%d\n",*(ap+2));
//	printf("%d\n",*(ap+3));
//	printf("%d\n",*(ap+4));
//
//	char letters[3] = {'r','a','m'};
//
//	printf("%p\n",&letters[0]);
//	printf("%p\n",&letters[1]);
//	printf("%p\n",&letters[2]);
//
//	char *cp;
//	cp=&letters[0];
//	printf("%c\n",*cp);
//	printf("%c\n",*(cp+1));
//	printf("%c\n",*(cp+2));
//
////	int array[5] = {5,4,3,2,1};
////	int sum = foo(array);
////	printf("%d",sum);
////	return 0;
//
//}
//

///*
//		auto		break		case		char
//		const		continue	default		do
//		double		else		enum		extern
//		float		for			goto		if
//		int			long		register	return
//		short		signed		sizeof		static
//		struct		switch		typedef		union
//		unsigned	void		volatile	while
//*/



//#include<stdio.h>
//
//void foo(int a){
//	a = 15;
//	return ;
//}
//
//
//int main(void) {
//
//
//	int a = 10;
//	foo(a);
//	printf("%d",a);
//	return 0;
//
//}


#include<stdio.h>

void foo(int *z){
	*z = 15;
	return ;
}


int main(void) {


	int a = 10;
	foo(&a);
	printf("%d",a);
	return 0;

}

//#include <stdio.h>
//
//int main() {
//    int arr[5] = {1, 2, 3, 4, 5};
//    int *p = arr;  // p points to arr[0]
//
//    printf("Initial pointer address: %p\n", (void*)p);
//    p++;  // Point to the next element
//    printf("Pointer address after increment: %p\n", (void*)p);
//    printf("Value at new pointer address: %d\n", *p);
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int arr[5] = {81, 42, 34, 47, 55};
//    int *p[5] ;
//
//    for (int i = 0; i < 5; ++i) {
//		p[i]=&arr[i];
//	}
//
//    for (int i = 0; i < 5; ++i) {
//    	printf("%d\n",*p[i]);
//	}
//
//    char *name[3];
//    name[0] = "cse a";
//    name[1] = "cse b";
//    name[2] = "cse c";
//    for (int i = 0; i < 3; ++i) {
//      	printf("%s\n",name[i]);
//  	}
//    return 0;
//}
//
//#include <stdio.h>
//
//struct student{
//	char *name;
//	int age;
//	float gpa;
//};
//
//typedef struct student Student;
//
//int main() {
////	struct student s1;
//	Student s1;
//	s1.name = "ram";
//	s1.age = 20;
//	s1.gpa = 9.5;
//
//	printf("%s\n",s1.name);
//	printf("%d\n",s1.age);
//	printf("%f\n",s1.gpa);
//
//
//	Student *ps;
//
//	ps = &s1;
//
//	printf("%s\n",ps->name);
//	printf("%d\n",ps->age);
//	printf("%f\n",ps->gpa);
//
//
//    return 0;
//}







//
//#include <stdio.h>
//
//struct student{
//	char *name;
//	int age;
//	float gpa;
//	struct student *nextstudentadress;
//};
//
//typedef struct student Student;
//
//int main() {
////	struct student s1;
//	Student s1;
//	s1.name = "ram";
//	s1.age = 20;
//	s1.gpa = 9.5;
//	s1.nextstudentadress = NULL;
//	printf("%s\n",s1.name);
//	printf("%d\n",s1.age);
//	printf("%f\n",s1.gpa);
//	printf("%p\n",&s1.nextstudentadress);
//
//	Student s2;
//	s2.name = "sita";
//	s2.age = 21;
//	s2.gpa = 10;
//	s2.nextstudentadress = NULL;
//
//	printf("%s\n",s2.name);
//	printf("%d\n",s2.age);
//	printf("%f\n",s2.gpa);
//	printf("%p\n",&s2.nextstudentadress);
//
//
//	Student s3;
//	s3.name = "laxman";
//	s3.age = 20;
//	s3.gpa = 10;
//	s3.nextstudentadress = NULL;
//
//	printf("%s\n",s3.name);
//	printf("%d\n",s3.age);
//	printf("%f\n",s3.gpa);
//	printf("%p\n",&s3.nextstudentadress);
//
//	s1.nextstudentadress = &s2;
//	s2.nextstudentadress = &s3;
//
//
//	printf("%s\n",s1.nextstudentadress->name);
//
//	Student is=s1;
//
//	while(is.nextstudentadress !=NULL){
//		printf("%s\n",is.name);
//		printf("%d\n",is.age);
//		printf("%f\n",is.gpa);
//		printf("%p\n",is.nextstudentadress);
//		is.nextstudentadress = is.nextstudentadress->nextstudentadress;
//	}
//
//
//
////	Student *ps;
////
////	ps = &s1;
////
////	printf("%s\n",ps->name);
////	printf("%d\n",ps->age);
////	printf("%f\n",ps->gpa);
////
//
//    return 0;
//}
//
//
//
//



#include <stdio.h>

struct student{
	char *name;
	int age;
	float gpa;
	struct student *prevstudentadress;
	struct student *nextstudentadress;
};

typedef struct student Student;

int main() {
//	struct student s1;
	Student s1;
	s1.name = "ram";
	s1.age = 20;
	s1.gpa = 9.5;
	s1.prevstudentadress = NULL;
	s1.nextstudentadress = NULL;

	Student s2;
	s2.name = "sita";
	s2.age = 21;
	s2.gpa = 10;
	s2.prevstudentadress = NULL;
	s2.nextstudentadress = NULL;

	Student s3;
	s3.name = "laxman";
	s3.age = 20;
	s3.gpa = 10;
	s3.prevstudentadress = NULL;
	s3.nextstudentadress = NULL;

	s1.prevstudentadress = &s3;
	s1.nextstudentadress = &s2;
	s2.prevstudentadress = &s1;
	s2.nextstudentadress = &s3;
	s3.prevstudentadress = &s2;
	s3.nextstudentadress = &s1;

//	Student is=s1;
//
//
//		while(is.nextstudentadress !=NULL){
//			printf("%s\n",is.name);
//			printf("%d\n",is.age);
//			printf("%f\n",is.gpa);
//			printf("%p\n",is.nextstudentadress);
//			is.nextstudentadress = is.nextstudentadress->nextstudentadress;
//		}
//	Student *is=&s1;
//
//
//		while(is->nextstudentadress !=NULL){
//			printf("%s\n",is->name);
//			printf("%d\n",is->age);
//			printf("%f\n",is->gpa);
//			printf("%p\n",is->nextstudentadress);
//			is = is->nextstudentadress;
//		}


	Student *is=&s1;

		int count = 6;
//		while(is->nextstudentadress !=NULL){
//			if(count==0){
//				break;
//			}
//			printf("%s\n",is->name);
//			printf("%d\n",is->age);
//			printf("%f\n",is->gpa);
//			printf("%p\n",is->nextstudentadress);
//
//			is = is->nextstudentadress;
//			count--;
//		}
		count = 6;

		while(is->prevstudentadress !=NULL){
			if(count==0){
				break;
			}
			printf("%s\n",is->name);
			printf("%d\n",is->age);
			printf("%f\n",is->gpa);
			printf("%p\n",is->prevstudentadress);

			is = is->prevstudentadress;
			count--;
		}
    return 0;
}

























//refactored
#include <stdio.h>

// Function to sum elements of an array
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to change the value of an integer using a pointer
void changeValue(int *z) {
    *z = 15;
    return;
}

// Struct to represent a student
struct student {
    char *name;
    int age;
    float gpa;
    struct student *prevStudentAddress;
    struct student *nextStudentAddress;
};

typedef struct student Student;

int main(void) {
    // Part 1: Basic Pointer Operations
    int a = 10;
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", (void*)&a);
    printf("Dereferenced value of a: %d\n", *(&a));

    int *p = &a;
    printf("Dereferenced value using pointer p: %d\n", *p);

    // Part 2: Array and Pointer Operations
    int array[5] = {5, 4, 3, 2, 1};
    int *arrayPointer = array;

    for (int i = 0; i < 5; i++) {
        printf("Address of array[%d]: %p\n", i, (void*)&array[i]);
    }
    printf("Array pointer: %p\n", (void*)arrayPointer);

    printf("Dereferenced array pointer values using offset:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(arrayPointer + i));
    }

    // Part 3: Character Array and Pointer Operations
    char letters[3] = {'r', 'a', 'm'};
    char *charPointer = letters;

    printf("Character array addresses:\n");
    for (int i = 0; i < 3; i++) {
        printf("Address of letters[%d]: %p\n", i, (void*)&letters[i]);
    }

    printf("Dereferenced character array values:\n");
    for (int i = 0; i < 3; i++) {
        printf("%c\n", *(charPointer + i));
    }

    // Part 4: Modify Value Using Pointer
    a = 10;
    changeValue(&a);
    printf("Modified value of a: %d\n", a);

    // Part 5: Pointer Arithmetic
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    printf("Initial pointer address: %p\n", (void*)ptr);
    ptr++;
    printf("Pointer address after increment: %p\n", (void*)ptr);
    printf("Value at new pointer address: %d\n", *ptr);

    // Part 6: Array of Pointers
    int arr2[5] = {81, 42, 34, 47, 55};
    int *ptrArray[5];

    for (int i = 0; i < 5; i++) {
        ptrArray[i] = &arr2[i];
    }

    printf("Values pointed to by pointer array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *ptrArray[i]);
    }

    char *names[3] = {"cse a", "cse b", "cse c"};
    printf("Names array:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", names[i]);
    }

    // Part 7: Struct Operations
    Student s1 = {"ram", 20, 9.5, NULL, NULL};
    Student s2 = {"sita", 21, 10.0, NULL, NULL};
    Student s3 = {"laxman", 20, 10.0, NULL, NULL};

    s1.nextStudentAddress = &s2;
    s2.prevStudentAddress = &s1;
    s2.nextStudentAddress = &s3;
    s3.prevStudentAddress = &s2;
    s3.nextStudentAddress = &s1;
    s1.prevStudentAddress = &s3;

    Student *iter = &s1;
    int count = 6;

    // Traverse and print details forward
    printf("Traversing forward:\n");
    while (iter != NULL && count-- > 0) {
        printf("Name: %s\n", iter->name);
        printf("Age: %d\n", iter->age);
        printf("GPA: %.2f\n", iter->gpa);
        printf("Next Student Address: %p\n", (void*)iter->nextStudentAddress);
        iter = iter->nextStudentAddress;
    }

    iter = &s1;
    count = 6;

    // Traverse and print details backward
    printf("Traversing backward:\n");
    while (iter != NULL && count-- > 0) {
        printf("Name: %s\n", iter->name);
        printf("Age: %d\n", iter->age);
        printf("GPA: %.2f\n", iter->gpa);
        printf("Previous Student Address: %p\n", (void*)iter->prevStudentAddress);
        iter = iter->prevStudentAddress;
    }

    return 0;
}





#include <stdio.h>
#include <stdlib.h>

//int main() {
//
//	//bubble sort
//	//Asending
////	int array[10] = {5,9,7,19,6,15,51,98,22,36};
////
////	for (int i = 0; i < 10; ++i) {
////		for (int j = 0,temp = 0; j < 10; ++j) {
////
////			if (array[i] < array[j]) {
////
////				temp = array[i];
////				array[i] = array[j];
////				array[j] = temp;
////			}
////		}
////
////	}
////	for (int i = 0; i < 10; ++i) {
////			printf("%d ",array[i]);
////
////	}
////	//decending
////	int array[10] = {5,9,7,19,6,15,51,98,22,36};
////
////	for (int i = 0; i < 10; ++i) {
////		for (int j = 0,temp = 0; j < 10; ++j) {
////
////			if (array[i] > array[j]) {
////
////				temp = array[i];
////				array[i] = array[j];
////				array[j] = temp;
////			}
////		}
////
////	}
////	for (int i = 0; i < 10; ++i) {
////			printf("%d ",array[i]);
////
////	}
//
//	/* selection sort
//	 repeat (numOfElements - 1) times
//
//	 set the first unsorted element as the minimum
//
//	 for each of the unsorted elements
//
//	 if element < currentMinimum
//
//	 set element as new minimum
//
//	 swap minimum with first unsorted position
//
//	 */
////	int array[10] = { 4, 9, 7, 19, 6, 15, 51, 98, 22, 36 };
////
////	for (int i = 0; i < 10; ++i) {
////		int minindex = i;//assumes i in min value
////		for (int j = i + 1; j < 10; ++j) { //finds actual min value by comparision
////			if (array[j] < array[minindex]) {
////				minindex = j;//if finds min notes index
////			}
////		}
////		if (minindex != i) {//swaps index values if they are not same
////			int temp = array[i];
////			array[i] = array[minindex];
////			array[minindex] = temp;
////		}
////	}
////	for (int i = 0; i < 10; ++i) {
////		printf("%d\n", array[i]);
////	}
//
//	// insertion
//	/*
//	 	mark first element as sorted
//
//		for each unsorted element X
//
//		  'extract' the element X
//
//		  for j = lastSortedIndex down to 0
//
//			if current element j > X
//
//			  move sorted element to the right by 1
//
//			break loop and insert X here
//	 */
//
//	return 0;
//}
//int main(void) {
//
//	int a = 10;
//	printf("%d\n",a);
//	printf("%p\n",&a);
//	printf("%d\n",*(&a));
//
//	int *p; //declaration
//	p = &a;//initiisation of pointer of type int
//	printf("%d\n",*p);
////
//
//	int array[5] = {5,4,3,2,1};
//	int *ap;
//	ap = &array;
//
//	printf("%p\n",&array[0]);
//	printf("%p\n",&array[1]);
//	printf("%p\n",&array[2]);
//	printf("%p\n",&array[3]);
//	printf("%p\n",&array[4]);
//	printf("%p\n",ap);
//
//
//
//	printf("%d\n",*ap);
//	printf("%d\n",*ap+1);
//	printf("%d\n",*ap+2);
//	printf("%d\n",*ap+3);
//	printf("%d\n",*ap+4);//wrong
////
//	printf("%d\n",*ap);
//	printf("%d\n",*(ap+1));
//	printf("%d\n",*(ap+2));
//	printf("%d\n",*(ap+3));
//	printf("%d\n",*(ap+4));
//
//	char letters[3] = {'r','a','m'};
//
//	printf("%p\n",&letters[0]);
//	printf("%p\n",&letters[1]);
//	printf("%p\n",&letters[2]);
//
//	char *cp;
//	cp=&letters[0];
//	printf("%c\n",*cp);
//	printf("%c\n",*(cp+1));
//	printf("%c\n",*(cp+2));
//
////	int array[5] = {5,4,3,2,1};
////	int sum = foo(array);
////	printf("%d",sum);
////	return 0;
//
//}
//int main(void) {
//
//	int a = 10;
//	printf("%d\n",a);
//	printf("%p\n",&a);
//	printf("%d\n",*(&a));
//
//	int *p; //declaration
//	p = &a;//initiisation of pointer of type int
//	printf("%d\n",*p);
////
//
//	int array[5] = {5,4,3,2,1};
//	int *ap;
//	ap = &array;
//
//	printf("%p\n",&array[0]);
//	printf("%p\n",&array[1]);
//	printf("%p\n",&array[2]);
//	printf("%p\n",&array[3]);
//	printf("%p\n",&array[4]);
//	printf("%p\n",ap);
//
//
//
//	printf("%d\n",*ap);
//	printf("%d\n",*ap+1);
//	printf("%d\n",*ap+2);
//	printf("%d\n",*ap+3);
//	printf("%d\n",*ap+4);//wrong
////
//	printf("%d\n",*ap);
//	printf("%d\n",*(ap+1));
//	printf("%d\n",*(ap+2));
//	printf("%d\n",*(ap+3));
//	printf("%d\n",*(ap+4));
//
//	char letters[3] = {'r','a','m'};
//
//	printf("%p\n",&letters[0]);
//	printf("%p\n",&letters[1]);
//	printf("%p\n",&letters[2]);
//
//	char *cp;
//	cp=&letters[0];
//	printf("%c\n",*cp);
//	printf("%c\n",*(cp+1));
//	printf("%c\n",*(cp+2));
//
////	int array[5] = {5,4,3,2,1};
////	int sum = foo(array);
////	printf("%d",sum);
////	return 0;
//
//}

//int main(void) {

//	int a = 10;
//	printf("%d\n",a);//traditional
//	printf("%p\n",&a);//address of a
//	printf("%d\n",*(&a));//value at that address
//
//	char c = 's';
//	printf("%c\n",c);//traditional
//	printf("%p\n",&c);//address of a
//	printf("%c\n",*(&c));//value at that address
//
//	int *p; //declaration
//	p = &a;//initiisation of pointer of type int
//	printf("%p\n",p);
//	printf("%d\n",*p);
//////
////
//	int array[5] = {5,4,3,2,1};
//	int *ap;
//	ap = &array;
////
//	printf("%p\n",&array[0]);
//	printf("%p\n",&array[1]);
//	printf("%p\n",&array[2]);
//	printf("%p\n",&array[3]);
//	printf("%p\n",&array[4]);
//	printf("%p\n",ap);
////
////
////
//	printf("%d\n",*ap);
//	printf("%d\n",*ap+1);
//	printf("%d\n",*ap+2);
//	printf("%d\n",*ap+3);
//	printf("%d\n",*ap+4);//wrong
//
//	printf("%d\n",*ap);
//	printf("%d\n",*(ap+1));
//	printf("%d\n",*(ap+2));
//	printf("%d\n",*(ap+3));
//	printf("%d\n",*(ap+4));
//
//	printf("%d\n",*ap);
//	printf("%d\n",*ap++);
//	printf("%d\n",*ap++);
//	printf("%d\n",*ap++);
//	printf("%d\n",*ap++);
//	printf("%d\n",*ap++);

	//
//	char letters[3] = {'r','a','m'};
//
//	printf("%p\n",&letters[0]);
//	printf("%p\n",&letters[1]);
//	printf("%p\n",&letters[2]);
//
//	char *cp;
//	cp=&letters[0];
//	printf("%c\n",*cp);
//	printf("%c\n",*(cp+1));
//	printf("%c\n",*(cp+2));

//	int array[5] = {5,4,3,2,1};
//	int sum = foo(array);
//	printf("%d",sum);
//	return 0;

//}

//
//#include<stdio.h>
//
//void foo(int a){
//	a = 15;
//	return ;
//}
//
//
//int main(void) {
//
//	int a = 10;
//	foo(a);
//	printf("%d",a);
//	return 0;
//
//}

//
//#include<stdio.h>
//
//void foo(int *z){
//	*z = 15;
//	return ;
//}
//
//
//int main(void) {
//
//
//	int a = 10;
//	foo(&a);
//	printf("%d",a);
//	return 0;
//
//}
//#include <stdio.h>
//
//int main() {
//    int arr[5] = {81, 42, 34, 47, 55};
//    int *p[5] ;
//
//    for (int i = 0; i < 5; ++i) {
//		p[i]=&arr[i];
//	}
//
//    for (int i = 0; i < 5; ++i) {
//    	printf("%p\n",&arr[i]);
//	}
//    for (int i = 0; i < 5; ++i) {
//    	printf("%p\n",p[i]);
//	}
//    for (int i = 0; i < 5; ++i) {
//    	printf("%d\n",*p[i]);
//	}
//
//    char *name[3];
//    name[0] = "cse a";
//    name[1] = "cse b";
//    name[2] = "cse c";
//    for (int i = 0; i < 3; ++i) {
//      	printf("%p\n",&name[i]);
//  	}
//    for (int i = 0; i < 3; ++i) {
//      	printf("%s\n",name[i]);
//  	}
//    return 0;
//}
//#include <stdio.h>
//
//struct student{
//	char *name;
//	int age;
//	float gpa;
//};
//
//typedef struct student Student;
//
//int main() {
////	struct student s1;
//	Student s1;
//	s1.name = "ram";
//	s1.age = 20;
//	s1.gpa = 9.5;
//
//	printf("%s\n",s1.name);
//	printf("%d\n",s1.age);
//	printf("%f\n",s1.gpa);
//
//
//	Student *ps;
//
//	ps = &s1;
//
//	printf("%s\n",ps->name);
//	printf("%d\n",ps->age);
//	printf("%f\n",ps->gpa);
//
//	ps->name = "sita";
//
//	printf("%s\n",ps->name);
//	printf("%d\n",ps->age);
//	printf("%f\n",ps->gpa);
//
//    return 0;
//}
#include <stdio.h>

struct student{
	char *name;
	int age;
	float gpa;
	struct student *nextstudentadress;
};

typedef struct student Student;

int main() {
//	struct student s1;
	Student s1;
	s1.name = "ram";
	s1.age = 20;
	s1.gpa = 9.5;
	s1.nextstudentadress = NULL;
//	printf("%s\n",s1.name);
//	printf("%d\n",s1.age);
//	printf("%f\n",s1.gpa);
//	printf("%p\n",&s1.nextstudentadress);

	Student s2;
	s2.name = "sita";
	s2.age = 21;
	s2.gpa = 10;
	s2.nextstudentadress = NULL;

//	printf("%s\n",s2.name);
//	printf("%d\n",s2.age);
//	printf("%f\n",s2.gpa);
//	printf("%p\n",&s2.nextstudentadress);


	Student s3;
	s3.name = "laxman";
	s3.age = 20;
	s3.gpa = 10;
	s3.nextstudentadress = NULL;

//	printf("%s\n",s3.name);
//	printf("%d\n",s3.age);
//	printf("%f\n",s3.gpa);
//	printf("%p\n",&s3.nextstudentadress);

	s1.nextstudentadress = &s2;
	s2.nextstudentadress = &s3;


//	printf("%s\n",s1.nextstudentadress->name);

	Student is=s1;

//	while(is.nextstudentadress !=NULL){
//		printf("%s\n",is.name);
//		printf("%d\n",is.age);
//		printf("%f\n",is.gpa);
//		printf("%p\n",is.nextstudentadress);
//		is.nextstudentadress = is.nextstudentadress->nextstudentadress;
//	}



	Student *ps;

	ps = &s1;

	printf("%s\n",ps->name);
	printf("%d\n",ps->age);
	printf("%f\n",ps->gpa);

	ps = &s2;

	printf("%s\n",ps->name);
	printf("%d\n",ps->age);
	printf("%f\n",ps->gpa);

	ps = &s3;

	printf("%s\n",ps->name);
	printf("%d\n",ps->age);
	printf("%f\n",ps->gpa);



    while(ps->nextstudentadress !=NULL){
        printf("%s\n",ps->name);
        printf("%d\n",ps->age);
        printf("%f\n",ps->gpa);
        ps = ps->nextstudentadress;
    }

    return 0;
}

#include <stdio.h>
#include<stdlib.h>
struct student{
	char *name;
	int age;
	float gpa;
	struct student *prevstudentadress;
	struct student *nextstudentadress;
};

typedef struct student Student;

int main() {

	Student *sp;
	sp = (Student *) malloc(sizeof(Student));
    sp[0].name = (char *) malloc(25 * sizeof(char)); // assuming the name will be at most 99 characters
	scanf("%s",sp[0].name);
	scanf("%d",&sp[0].age);
	scanf("%f",&sp[0].gpa);
	printf("%s\t%d\t%f\n",sp[0].name,sp[0].age,sp[0].gpa);
    return 0;
}


