# Homework_12.7.1
**Реализация функции IsKPeriodic.**\
Функция принимает на вход два типа данных, строку и целочисленное значение.\
Выполняется проверка условий:
1) если строка пустая либо коэффициент кратности равен 0 выход из функции, возвращаемое значение false\
2) если K=1 то проверку выполнять не требуется, т.к строка будет в любом случае содержать подстроку равную самой строке. Возвращаемое значение в данном случае будет true
3) если количество символов в строке не кратно K, т.е. не делится без остатка то выходим из функции и возвращаем значение false\
4) Далее осуществляем проверку в цикле, шаг цикла - длина паттерна, начальное значение указывает на набор символов посл первого паттерна в строке
5) В цикле выполняем проверку равен ли текущий набор символов паттерну. В случае если не равен то выходим из функции и возвращаем false.
6) Если цикл не был прерван и успешно завершен возвращаем значение true.
7) Выводим результат в функции main().
