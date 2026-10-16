#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

DZ_2lab();

int main()
{
	setlocale(LC_CTYPE, "ru_RU.UTF-8");
	pr3();
	double half_pi = M_PI_2;
	printf("%f\n", half_pi);
	DZ_2lab();
	return 0;
}

int pr1()
{
	printf("123\n"); // подзадание 1
	printf("1\n2\n3\n"); // подзадание 2
	printf("1\n	2\n		3\n"); // подзадание 3
	printf("%d\n,%d\n ,%d\n  ,%d\n", 1, 2, 3, 4); // подзадание 4
	printf("%10.3f\n", 12.234657);  // подзадание 5
	printf("%10.5f\n", 12.234657);  // подзадание 6
	printf("Остаток от деления %d на %d равен %d\n", 5, 2, 5 % 2);
	printf("Остаток от деления %d на %d равен %d\n", 7, 5, 7 % 5);
	printf("Умножение %d на %d равен %d\n", 2000, 4, 2000 * 4);
	printf("%g разделить %e равно %f\n", 5., 2000000., 5. / 2000000);
	printf("%d разделить %d равно %d\n", 5., 2000000., 5. / 2000000);
	printf("%f разделить %f равно %f\n", 5., 2000000., 5. / 2000000);
	printf("%g разделить %g равно %g\n", 5., 2000000., 5. / 2000000);
	printf("%e разделить %e равно %e\n", 5., 2000000., 5. / 2000000);
	return 0;
}
int pr2()
{
	int N = 15, K = 30;
	int min_day = N*60+K;
	int h_left = 23 - N;
	int min_left = 60 - K;
	int min_8 = (N-8)*3600 + K * 60;
	printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
	printf("Идёт %d минута суток\n", min_day);
	printf("До полуночи осталось %d часов и %d минут\n", h_left, min_left);
	printf("С 8:00 прошло %d секунд\n",min_8);
	printf("Текущий час  = %f суток  и текущая минута = %f часа", N / 24.0, K / 60.0);
	return 0;
}


int pr3()
{
	int n = 4, L = 433, k = 5, m = 1;
	printf("Дано:\n	 %d\n	 %d\n	_________\nОтвет:\n	+%0*.*f", n, L, k, m, 4 / 433.);
	return 0;
}

int DZ_2lab()
{
	double h, A, k;
	printf("Введите высоту горки h (метров): ");
	if (scanf("%lf", &h) != 1 || h <= 0) {
		printf("Ошибка ввода высоты.\n");
		return 1;
	}

	printf("Введите угол наклона A (в радианах): ");
	if (scanf("%lf", &A) != 1 || A <= 0 || A >= M_PI_2) {
		printf("Ошибка ввода угла (угол должен быть от 0 до PI/2).\n");
		return 1;
	}

	printf("Введите коэффициент трения k: ");
	if (scanf("%lf", &k) != 1 || k < 0) {
		printf("Ошибка ввода коэффициента трения.\n");
		return 1;
	}

	if (tan(A) <= k) {
		printf("Санки не сдвинутся с места (сила трения слишком велика).\n");
	}
	else {
		double distance = h / sin(A);
		printf("\nПуть, который пройдут санки по горке: %.2f метров\n", distance);
	}

	return 0;
}
