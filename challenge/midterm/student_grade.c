#include <stdio.h>
#define STUDENTS 5
#define SUBJECTS 3
#define CHARNUM 20
void student_average(double studentScores[STUDENTS][SUBJECTS],
                     char studentNames[STUDENTS][CHARNUM]) {
  double sum = 0;
  double average;
  for (int i = 0; i < STUDENTS; i++) {
    for (int j = 0; j < SUBJECTS; j++) {
      sum += studentScores[i][j];
      average = sum / SUBJECTS;
    }
    printf("	%s�� ��� ����: %.2lf\n", studentNames[i], average);
    sum = 0;
  }
}

void subject_average(double studentScores[STUDENTS][SUBJECTS],
    char subjectNames[STUDENTS][CHARNUM]) {
  double sum = 0;
  double average = 0;
  for (int i = 0; i < SUBJECTS; i++) {
    for (int j = 0; j < STUDENTS; j++) {
      sum += studentScores[j][i];
    }
    average = sum / STUDENTS;
    printf("	%s�� ��� ������ %.2lf �Դϴ�.\n", subjectNames[i], average);
    sum = 0;
  }
}

int main() {
  char subjectNames[SUBJECTS][CHARNUM] = {"����", "�߰����", "�⸻���"};
  char studentNames[STUDENTS][CHARNUM] = {""};  // �л� �̸��� ����� �迭
  double studentScores[STUDENTS][SUBJECTS] = {
      0.0};  // �л��� ���� �� ������ ������ ����� �迭
  printf("�л� %d���� �̸��� �Է��� �����մϴ�. \n", STUDENTS);
  for (int i = 0; i < STUDENTS; i++) {
    printf("	%d��° �л��� �̸��� �Է��ϼ���: ", i + 1);
    scanf_s("%s", studentNames[i], (int)sizeof(studentNames[i]));
  }
  // TODO 1.1: �л� �̸��� �Է¹޴� �ڵ� ��� �ۼ�

  // �Էµ� �л� �̸��� �� ����Ǿ����� Ȯ���ϴ� �ڵ� ���
  printf("�л� �̸��� ��� �ԷµǾ����ϴ�. \n");
  printf("�Էµ� �л� �̸��� ������ �����ϴ�. \n");
  for (int i = 0; i < STUDENTS; i++) {
    printf("%s", studentNames[i]);
    if (i != STUDENTS - 1) {
      printf(", ");
    }
  }
  printf("\n");
  printf("--------------------\n");
  printf(
      "�� �л��� %s, %s, %s ������ ���ʴ�� �Է����ּ���. (���� ����)\n ",
      subjectNames[0], subjectNames[1], subjectNames[2]);
  for (int i = 0; i < STUDENTS; i++) {
    printf("	%s�� ����: ", studentNames[i]);
    scanf_s("%lf %lf %lf", &studentScores[i][0], &studentScores[i][1],
            &studentScores[i][2]);
  }

  // TODO 1.2: �л����� ���� �� ������ �Է¹޴� �ڵ� ��� �ۼ�

  printf("�л����� ���� ������ ��� �Է� �Ǿ����ϴ�.\n");
  printf("--------------------\n");
  printf("�л� �� ������ ������ �����ϴ� \n");


  student_average(studentScores, studentNames);
  //�Ϸ�

  // TODO 1.3: �л� �� ��� ������ ����ϴ� �ڵ� ��� �ۼ� >> ���� �Լ�ȭ
  // HINT1: 2�� for��: (1) �л��� (2) ������� ���� �հ� ����� ���ϰ� ���
  // HINT2: ��¹� �ڵ� = printf("\t%s�� ��� ����: %.2lf\n", studentNames[i],
  // finalScore);

  printf("--------------------\n");
  printf("���� �� ��� ������ �Ʒ��� �����ϴ�. \n");

  subject_average(studentScores, subjectNames);
  // TODO 1.4: ���� �� ��� ������ ����ϴ� �ڵ� ��� �ۼ� >> ���� �Լ�ȭ
  // HINT1: 2�� for������ (1) ���� (2) �л����� ���� �հ� ����� ���ϰ� ���
  // HINT2: ��¹� �ڵ� = printf("\t%s�� ��� ������ %.2lf �Դϴ�.\n",
  // subjectNames[i], subjectScore);

  printf("���α׷��� �����մϴ�. ");
  return 0;
}