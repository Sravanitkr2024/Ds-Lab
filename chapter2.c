#include <stdio.h>
#include <stdlib.h>
int main() {

    // d m a

//    int *ptri = NULL;
//
//    ptri = (int *) malloc(sizeof(int));//int a = 10; ptri = &a;
//
//    if(ptri == NULL){
//        printf("memory not allocated");
//        exit(0);
//
//    }
//    *ptri = 165;
//    printf("%d",*ptri);

    int *ptra = NULL;

    ptra = (int *) malloc(3 * sizeof(int));

    if(ptra == NULL){
        printf("memory not allocated");
        exit(0);

    }
    ptra[0] = 165;
    ptra[1] = 166;
    ptra[2] = 167;
    printf("%d\n",*ptra);
    printf("%d\n",ptra[1]);
    printf("%d\n",*(ptra + 2));

    int *ptrb = NULL;

    ptrb = (int *) calloc(3 , sizeof(int));

        if(ptrb == NULL){
            printf("memory not allocated");
            exit(0);

        }
        ptrb[0] = 165;
        ptrb[1] = 166;
        ptrb[2] = 167;
        printf("%d\n",*ptrb);
        printf("%d\n",ptrb[1]);
        printf("%d\n",*(ptrb + 2));
    free(ptrb);

//    int *ptra = NULL;
//
//    ptra = (int *) calloc(3 , sizeof(int));
//
//    if(ptra == NULL){
//        printf("memory not allocated");
//        exit(0);
//
//    }
//    ptra[0] = 165;
//    ptra[1] = 166;
//    ptra[2] = 167;
//    printf("%d\n",*ptra);
//    printf("%d\n",ptra[1]);
//    printf("%d\n",*(ptra + 2));
//
//
//    ptra = (int *) realloc(ptra , 5*sizeof(int));
//
//    ptra[3] = 168;
//    ptra[4] = 169;
//
//    printf("%d\n",*ptra);
//    printf("%d\n",ptra[1]);
//    printf("%d\n",*(ptra + 2));
//    printf("%d\n",*(ptra + 3));
//    printf("%d\n",ptra[4]);


    //deallocation
    free(ptrb);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main() {



    int *ptra = NULL;

    ptra = (int *) malloc(4 * sizeof(int));//int a = 10; ptri = &a;

    if(ptra == NULL){
        printf("memory not allocated");
        exit(0);

    }
  for(int i = 0;i<4;i++){
//    printf("%d\t",ptra[i]);

  }

  int a = 10;
  printf("adress of a is %p\t value at that address is %d",&a,(*(&a)));

}

#include <stdio.h>
#include <stdlib.h>
int main() {



    int *ptri = NULL;

    ptri = (int *) malloc(sizeof(int));
    if(ptri == NULL){
        printf("memory not allocated");
        exit(0);

    }

    *ptri = 10;//int a = 10; ptri = &a;
    printf("adress of a is %p\t value at that address is %p and stored value is %d ",&ptri,(*(&ptri)),*ptri);



}

#include <stdio.h>
#include <stdlib.h>
int main() {

	    int *ptra = NULL;
	    ptra = (int *) calloc(3 , sizeof(int));
	    if(ptra == NULL){
	        printf("memory not allocated");
	        exit(0);
	    }
	    *(ptra+0) = 165;
	    *(ptra+1) = 166;
	    *(ptra+2) = 167;
	    printf("%d\n",*(ptra + 0));
	    printf("%d\n",*(ptra + 1));
	    printf("%d\n",*(ptra + 2));

	    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main() {

//	//chapter 1
//
//	int a = 10;
//
//	printf("address of a in ram %p value at that address %d\n ",&a,(*(&a)));
//
//	int *p;
//
//	p=&a;
//
//
//	printf("%p  %p  %d",&p,*&p,*p);
//
//	*p = 15;
//
//	printf("address of a in ram %p value at that address %d\n ",&a,(*(&a)));
//
//	printf("%p  %p  %d",&p,*&p,*p);
//
//	int array[3] = {5,6,7};
//
//	printf(" %p %d\n ",&array[0],*(&(array[0])));
//	printf(" %p %d\n ",&array[1],*(&(array[1])));
//	printf(" %p %d\n ",&array[2],*(&(array[2])));
//
//	int *pa;
//
//	pa = &array[0];
//
//	printf(" %p %d\n ",&pa[0],*(&(pa[0])));
//	printf(" %p %d\n ",&pa[1],*(&(pa[1])));
//	printf(" %p %d\n ",&pa[2],*(&(pa[2])));
//
//
//	printf(" %p %d\n ",&pa[0],pa[0]);
//	printf(" %p %d\n ",&pa[1],pa[1]);
//	printf(" %p %d\n ",&pa[2],pa[2]);
//
//	printf(" %p %d\n ",&pa[0],*(pa + 0));
//	printf(" %p %d\n ",&pa[1],*(pa + 1));
//	printf(" %p %d\n ",&pa[2],*(pa + 2));


	//chapter 2

	//dma

	//malloc
//
//	int *ptri = NULL;
//
//	ptri = (int *) malloc(sizeof(int));
//
//	*ptri = 15;
//
//
//	printf("%p  %p  %d",&ptri,*&ptri,*ptri);

//	int *ptra = NULL;
//
//	ptra = (int *) malloc(3 * sizeof(int));
//
//	ptra[0] = 15;
//	ptra[1] = 14;
//	ptra[2] = 61;
//
//
//		printf(" %p %d\n ",&ptra[0],ptra[0]);
//		printf(" %p %d\n ",&ptra[1],ptra[1]);
//		printf(" %p %d\n ",&ptra[2],ptra[2]);
//

		int *ptra = NULL;

		ptra = (int *) calloc(3 , sizeof(int));

		ptra[0] = 15;
		ptra[1] = 14;
		ptra[2] = 61;


			printf(" %p %d\n ",&ptra[0],ptra[0]);
			printf(" %p %d\n ",&ptra[1],ptra[1]);
			printf(" %p %d\n ",&ptra[2],ptra[2]);



			ptra = (int *) realloc(ptra , 5*sizeof(int));
			ptra[3] = 91;
			ptra[4] = 66;
			printf(" %p %d\n ",&ptra[3],ptra[3]);
			printf(" %p %d\n ",&ptra[4],ptra[4]);


			ptra = (int *) realloc(ptra , 2*sizeof(int));
			ptra[0] = 99;
			ptra[1] = 66;
			printf(" %p %d\n ",&ptra[0],ptra[0]);
			printf(" %p %d\n ",&ptra[1],ptra[1]);

	return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main() {

//	//chapter 1
//
//	int a = 10;
//
//	printf("address of a in ram %p value at that address %d\n ",&a,(*(&a)));
//
//	int *p;
//
//	p=&a;
//
//
//	printf("%p  %p  %d",&p,*&p,*p);
//
//	*p = 15;
//
//	printf("address of a in ram %p value at that address %d\n ",&a,(*(&a)));
//
//	printf("%p  %p  %d",&p,*&p,*p);
//
//	int array[3] = {5,6,7};
//
//	printf(" %p %d\n ",&array[0],*(&(array[0])));
//	printf(" %p %d\n ",&array[1],*(&(array[1])));
//	printf(" %p %d\n ",&array[2],*(&(array[2])));
//
//	int *pa;
//
//	pa = &array[0];
//
//	printf(" %p %d\n ",&pa[0],*(&(pa[0])));
//	printf(" %p %d\n ",&pa[1],*(&(pa[1])));
//	printf(" %p %d\n ",&pa[2],*(&(pa[2])));
//
//
//	printf(" %p %d\n ",&pa[0],pa[0]);
//	printf(" %p %d\n ",&pa[1],pa[1]);
//	printf(" %p %d\n ",&pa[2],pa[2]);
//
//	printf(" %p %d\n ",&pa[0],*(pa + 0));
//	printf(" %p %d\n ",&pa[1],*(pa + 1));
//	printf(" %p %d\n ",&pa[2],*(pa + 2));


	//chapter 2

	//dma

	//malloc
//
//	int *ptri = NULL;
//
//	ptri = (int *) malloc(sizeof(int));
//
//	*ptri = 15;
//
//
//	printf("%p  %p  %d",&ptri,*&ptri,*ptri);

//	int *ptra = NULL;
//
//	ptra = (int *) malloc(3 * sizeof(int));
//
//	ptra[0] = 15;
//	ptra[1] = 14;
//	ptra[2] = 61;
//
//
//		printf(" %p %d\n ",&ptra[0],ptra[0]);
//		printf(" %p %d\n ",&ptra[1],ptra[1]);
//		printf(" %p %d\n ",&ptra[2],ptra[2]);
//

		int *ptra = NULL;

		ptra = (int *) calloc(3 , sizeof(int));

		ptra[0] = 15;
		ptra[1] = 14;
		ptra[2] = 61;


			printf(" %p %d\n ",&ptra[0],ptra[0]);
			printf(" %p %d\n ",&ptra[1],ptra[1]);
			printf(" %p %d\n ",&ptra[2],ptra[2]);



			ptra = (int *) realloc(ptra , 5*sizeof(int));
			ptra[3] = 91;
			ptra[4] = 66;
			printf(" %p %d\n ",&ptra[3],ptra[3]);
			printf(" %p %d\n ",&ptra[4],ptra[4]);


			ptra = (int *) realloc(ptra , 2*sizeof(int));
			ptra[0] = 99;
			ptra[1] = 66;
			printf(" %p %d\n ",&ptra[0],ptra[0]);
			printf(" %p %d\n ",&ptra[1],ptra[1]);

	return 0;
}
#include <stdio.h>
#include <stdlib.h>

void printfnames(int *ap){

	printf("%d",*ap);

}
int main() {

	int a = 15;
 	 printfnames(&a);
	return 0;
}



#include <stdio.h>
#include <stdlib.h>

int main() {

//	int array[10] = {89,5,9,7,54,9,6,5,5,98};
//	int key = 6;
//
//	for (int i = 0; i < 10; ++i) {
//		if(key==array[i]){
//			printf("found element at inde %d",i);
//			break;
//		}
//
//	}

//	int array[10] = { 89, 5, 9, 7, 54, 9, 6, 5, 5, 98 };
//	int key = 6;
//
//	for (int i = 0; i < 10; ++i) {
//		int count = 0;
//		for (int j = 0; j < 10; ++j) {
//
//			key = array[i];
//			if (key == array[j]) {
//				count += 1;
//			}
//		}
//
//		printf("no of occurences of %d id %d\n", key, count);
//
//	}

//	int array[10] = { 89, 5, 9, 7, 54, 9, 6, 5, 5, 98 };
//	int key = 6;
//
//	int arrayd[10];
//	for (int i = 0; i < 10; ++i) {
//		int count = 0;
//		for (int j = 0; j < 10; ++j) {
//
//			key = array[i];
//			if (key == array[j]) {
//				count+=1;
//			}
//			arrayd[i]=key;
//		}
//
//		for (int k = 0; k < 10; ++k) {
//			if(key == arrayd[k]){
//				continue;
//			}
//			else{
//				printf("no of occurences of %d id %d\n",key,count);
//
//			}
//		}
//
//
//	}

	int array[10] = { 89, 5, 9, 7, 54, 9, 6, 89, 5, 98 };
	int key = 6;

	int arrayoc[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	for (int i = 0; i < 10; ++i) {
		int count = 0;
		for (int j = 0; j < 10; ++j) {

			key = array[i];
			if (key == array[j]) {
				count += 1;
			}

		}
		arrayoc[i] = count;

	}
	for (int i = 0; i < 10; ++i) {

		if (arrayoc[i] > 0  ) {
			printf("no of occurences of %d id %d\n", array[i], arrayoc[i]);

			for (int j = 0; j < 10; ++j) {
				if (array[j] == array[i]) {
					arrayoc[j] = -1;
				}
			}
		}
	}
	

	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {

//	int array[10] = {89,5,9,7,54,9,6,5,5,98};
//	int key = 6;
//
//	for (int i = 0; i < 10; ++i) {
//		if(key==array[i]){
//			printf("found element at inde %d",i);
//			break;
//		}
//
//	}

//	int array[10] = { 89, 5, 9, 7, 54, 9, 6, 5, 5, 98 };
//	int key = 6;
//
//	for (int i = 0; i < 10; ++i) {
//		int count = 0;
//		for (int j = 0; j < 10; ++j) {
//
//			key = array[i];
//			if (key == array[j]) {
//				count += 1;
//			}
//		}
//
//		printf("no of occurences of %d id %d\n", key, count);
//
//	}

//	int array[10] = { 89, 5, 9, 7, 54, 9, 6, 5, 5, 98 };
//	int key = 6;
//
//	int arrayd[10];
//	for (int i = 0; i < 10; ++i) {
//		int count = 0;
//		for (int j = 0; j < 10; ++j) {
//
//			key = array[i];
//			if (key == array[j]) {
//				count+=1;
//			}
//			arrayd[i]=key;
//		}
//
//		for (int k = 0; k < 10; ++k) {
//			if(key == arrayd[k]){
//				continue;
//			}
//			else{
//				printf("no of occurences of %d id %d\n",key,count);
//
//			}
//		}
//
//
//	}
//
//	int array[10] = { 89, 5, 9, 7, 54, 9, 6, 89, 5, 98 };
//	int key = 6;
//
//	int arrayoc[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
//	for (int i = 0; i < 10; ++i) {
//		int count = 0;
//		for (int j = 0; j < 10; ++j) {
//
//			key = array[i];
//			if (key == array[j]) {
//				count += 1;
//			}
//
//		}
//		arrayoc[i] = count;
//
//	}
//	for (int i = 0; i < 10; ++i) {
//
//		if (arrayoc[i] > 0  ) {
//			printf("no of occurences of %d id %d\n", array[i], arrayoc[i]);
//
//			for (int j = 0; j < 10; ++j) {
//				if (array[j] == array[i]) {
//					arrayoc[j] = -1;
//				}
//			}
//		}
//	}

//	int sarray[10] = { 89, 5, 9, 7, 54, 9, 6, 89, 5, 98 };
//	int *array = (int*) malloc(10 * sizeof(int));
//	for (int i = 0; i < 10; ++i) {
//		array[i] = sarray[i];
//
//	}
//	int arrayoc[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
//	int key = 0;
//	for (int i = 0; i < 10; ++i) {
//		int count = 0;
//		for (int j = 0; j < 10; ++j) {
//
//			key = array[i];
//			if (key == array[j]) {
//				count += 1;
//			}
//
//		}
//		arrayoc[i] = count;
//	}
//	for (int i = 0; i < 10; ++i) {
//
//		if (arrayoc[i] > 0) {
//			printf("no of occurences of %d id %d\n", array[i], arrayoc[i]);
//
//			for (int j = 0; j < 10; ++j) {
//				if (array[j] == array[i]) {
//					arrayoc[j] = -1;
//				}
//			}
//		}
//	}
	return 0;
}

