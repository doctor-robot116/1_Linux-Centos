//ДЗ 

//Часть №1 - Упражнение №1
//Алексеев Дмитрий
//@doctor_robot16

//1. Цель задачи -	написать текст программы, которая вызывает fork () в цикле 3 раза и спит (sleep(..) ) 5 секунд


//1 вариант в цикле - 3 раза
#include <stdio.h>
#include <unistd.h>

int main() {
	int i;
	for (i=0,i<3;i++)
		fork();
	sleep(5);
	return 0; 
}

//Процессов будет 8, при первом параметрическом цикле процесс родитель создает процесс потомок.
//Втором цикле, существующие процессы создают еще да процесса и все их становится 4.
//В третьем цикле 4 существующие процесса создают дочерние и все их становится 8.

//1 вариант - в цикле 5 раз
#include <stdio.h>
#include <unistd.h>

int main() {
	int i;
	for (i=0,i<5;i++)
		fork();
	sleep(5);
	return 0; 
}

//2 вариант - в цикле 3 раза
#include <stdio.h>
#include <unistd.h>

int main() {
int pid = fork ();
if(pid==0) {
printf("Child\n");
int i = 0;
while (i<3){
fork();
i++;
sleep(5);
}
}
else if (pid>0) {
sleep(1);
printf("Parent\n");
}
else if (pid<0) {
printf("Error in fork/n");
}
return 0;
}


//2 вариант - в цикле 5 раз
#include <stdio.h>
#include <unistd.h>

int main() {
int pid = fork ();
if(pid==0) {
printf("Child\n");
int i = 0;
while (i<5){
fork();
i++;
sleep(5);
}
}
else if (pid>0) {
sleep(1);
printf("Parent\n");
}
else if (pid<0) {
printf("Error in fork/n");
}
return 0;
}

//Процессов будет 8, при первом цикле процесс родитель создает процесс потомок.
//Втором цикле, существующие процессы создают еще да процесса и все их становится 4.
//В третьем цикле 4 существующие процесса создают дочерние и все их становится 8.