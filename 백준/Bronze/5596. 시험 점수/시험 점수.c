// // #include <stdio.h>

// // int main(void) {
// //   int year, month, day = 0;
// //   printf("생년-월-일 형식으로 입력해 주세요\n:");
// //   scanf("%d-%d-%d", &year, &month, &day);
// //   if(year >= 2005)
// //   {
// //     if(year == 2005 && month > 3)
// //     {
// //       printf("성인입니다");
// //     }
// //     if(year > 2005)
// //     {
// //       printf();
// //     }
// //   }
// //   if(year < 2005)
// //   {
// //     printf("성인입니다");
// //   }

// //   return 0;
// // }

// // #include <stdio.h>

// // int main(void)
// // {
// //   int num[10];
// //   int count = 0;
// //   int i;

// //   for (i = 0; i < 10; i++) {
// //     scanf("%d", &num[i]);
// //     for(int j=0; j<10; j++) {
// //        if (num[j] % 42 != num[j + 1] % 42) {
// //          count++;
// //        }
// //     }

// //   }

// //   printf("%d", count);

// //   return 0;
// // }

// /*#include <stdio.h>

// int main(void)
// {
//   int student;

//   scanf("%d", &student);

//   switch(student / 1000)
//     {
//       case 1 : // 1학년 전체
//         if(student / 100 <= 14.2)
//         {
//             printf("공통과정");
//             break;
//         }
//         else{
//           printf("입력이 잘못되었습니다.");
//         }
//         break;

//       case 2 : // 2학년
//           if(student / 100 <= 22.2)
//           {
//             printf("소프트웨어 개발과");
//           } // 2학년 1, 2반
//           else if(student / 100 <= 23.2)
//           {
//             printf("임베디드 소프트웨어과");
//           } // 2학년 3반
//           else if(student / 100 <= 24.2)
//           {
//             printf("인공지능 소프트웨어과");
//           } // 2학년 4반
//           else{
//             printf("입력이 잘못되었습니다.");
//           }
//           break;

//       case 3 : // 3학년
//           if(student / 100 <= 32.2)
//           {
//             printf("소프트웨어 개발과");
//           } // 3학년 1, 2반
//           else if (student / 100 <= 33.2)
//           {
//             printf("임베디드 소프트웨어과");
//           } // 3학년 3반
//           else if(student / 100 <= 34.2)
//           {
//             printf("정보 보안과");
//           } // 3학년 4반
//           else{
//             printf("입력이 잘못되었습니다.");
//           }
//           break;

//       default :
//             printf("입력이 잘못되었습니다.");
//             break;

//     }

//   return 0;
// }*/

// /* #include <stdio.h>

// int main(void)
// {
//   int max, min, sum;

//   printf("다른 두 정수를 입력하세요");
//   scanf("%d %d", &max, &min);

//   for(int i = min; i <= max; i++)
//     {
//       int temp = max;
//       max = min;
//       min = temp;

//       if(max < min)
//       {
//         max = min;

//       }
//       else if(min > max)
//       {
//         min = max;
//       }

//       printf("%d ", i);
//     }

//   return 0;
// } */

// /*#include <stdio.h>
// #include <windows.h>

// int main(void){

//   int flag;
//   scanf("%d", &flag);

//   if(flag == 1){

//     printf("open");
//   }
//   else
//   {
//     printf("close");
//     printf("5초 후 닫힙니다");
//   }

//   return 0;
// } */

// /*#include <stdio.h>
// #define N 9

// int main(void) {

//   for (int i = 0; i <= N; i++) {
//     (i % 2) ? continue : printf("%d", i);
//   }

//   return 0;
// }*/

// #include <stdio.h>

// int main()
// {
//   int i=14, j=50, k=-1, l=0;

//   printf("%d의  8진수는 %o\n", i, i);
//   printf("%d의  8진수는 %o\n", j, j);
//   printf("%d의  8진수는 %o\n", k, k);
//   printf("%d의  8진수는 %o\n", l, l);

//   printf("%d의 16진수는 %x\n", i, i);
//   printf("%d의 16진수는 %X\n", j, j);
//   printf("%d의 16진수는 %X\n", k, k);
//   printf("%d의 16진수는 %X\n", l, l);

//   printf("%d의 2의 보수는 %d\n", i, ~i);
//   printf("%d의 2의 보수는 %d\n", j, ~j);
//   printf("%d의 2의 보수는 %d\n", k, ~k);
//   printf("%d의 2의 보수는 %d\n", l, ~l);

//   printf("%d와 %d의 and: %d\n", i, j, i&j);
//   printf("%d와 %d의 or : %d\n", i, j, i|j);
//   printf("%d와 %d의 xor: %d\n", i, j, i^j);
//   printf("%d의 not : %d\n", k, ~k);
//   printf("%d의 not : %d\n", l, ~l);

//   return 0;
// }

#include <stdio.h>

int main() {

  int i, s = 0, t = 0, arr[4];
  for(i=0; i<4; i++) {
    scanf("%d", &arr[i]);
    s += arr[i];
  }
  for(i = 0; i < 4; i++) {
    scanf("%d", &arr[i]);
    t += arr[i];
  }
  printf("%d", s >= t ? s : t);
    
    return 0;
}