#include<stdio.h>
int main(void){
  //���j���[�̕\��
  printf("1.�t�@�C���̓ǂݍ���\n");
  printf("2.�z��̓��e��W���o��\n");
  printf("3.�A�����X�g�ɕۑ�\n");
  printf("4.�A�����X�g�̓��e��W���o��\n");
  printf("5.�񕪖؂ɕۑ�\n");
  printf("6.�񕪖؂̓��e��W���o��\n");
  printf("7.�t�@�C���̏����o��\n");
  printf("8.�I���W�i���@�\\\n");
  printf("9.�I��\n");
  printf("> ? ");
  int menu_num;
  //�W������
  scanf("%d",&menu_num);
  printf("���j���[�I��> ");
  //���򏈗�
  switch(menu_num){
    case 1:
      printf("1.�t�@�C���̓ǂݍ���\n");
      break;
    case 2:
      printf("2.�z��̓��e��W���o��\n");
      break;
    case 3:
      printf("3.�A�����X�g�ɕۑ�\n");
      break;
    case 4:
      printf("4.�A�����X�g�̓��e��W���o��\n");
      break;
    case 5:
      printf("5.�񕪖؂ɕۑ�\n");
      break;
    case 6:
      printf("6.�񕪖؂̓��e��W���o��\n");
      break;
    case 7:
      printf("7.�t�@�C���̏����o��\n");
      break;
    case 8:
      printf("8.�I���W�i���@�\\\n");
      break;
    default:
      break;
  }
  exit(0);
}
