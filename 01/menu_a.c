#include<stdio.h>
int main(void){
  //メニューの表示
  printf("1.ファイルの読み込み\n");
  printf("2.配列の内容を標準出力\n");
  printf("3.連結リストに保存\n");
  printf("4.連結リストの内容を標準出力\n");
  printf("5.二分木に保存\n");
  printf("6.二分木の内容を標準出力\n");
  printf("7.ファイルの書き出し\n");
  printf("8.オリジナル機能\\n");
  printf("9.終了\n");
  printf("> ? ");
  int menu_num;
  //標準入力
  scanf("%d",&menu_num);
  printf("メニュー選択> ");
  //分岐処理
  switch(menu_num){
    case 1:
      printf("1.ファイルの読み込み\n");
      break;
    case 2:
      printf("2.配列の内容を標準出力\n");
      break;
    case 3:
      printf("3.連結リストに保存\n");
      break;
    case 4:
      printf("4.連結リストの内容を標準出力\n");
      break;
    case 5:
      printf("5.二分木に保存\n");
      break;
    case 6:
      printf("6.二分木の内容を標準出力\n");
      break;
    case 7:
      printf("7.ファイルの書き出し\n");
      break;
    case 8:
      printf("8.オリジナル機能\\n");
      break;
    default:
      break;
  }
  exit(0);
}
