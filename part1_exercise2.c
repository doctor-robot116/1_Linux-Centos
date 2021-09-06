//ДЗ 

//Упражнение №1
//Алексеев Дмитрий
//@doctor_robot16
//Цель задачи - написать свою собственную оболочку shell....

//создадим файл с названием - myshell.sh

//сделаем его исполняемым
chmod +x ./myshell.sh

//код shell-скрипта

echo "Directory:"
pwd
echo "Login:"
whoami

echo Full Name
read XXX
echo My Full Name $XXX
ls	
pstree
top