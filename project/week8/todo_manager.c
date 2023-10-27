#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

int main() {
	char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // 할 일 목록을 저장하기 위한 2차원 배열
	int taskCount = 0; // 할 일의 수를 저장하기 위한 변수

	printf("TODO 리스트 시작! \n");

	while (1) {
		int choice = -1; // 사용자 입력 메뉴를 저장하기 위한 변수

		// 사용자에게 메뉴를 출력하고, 메뉴를 입력받기
		printf("------------------\n");
		printf("메뉴를 입력해주세요.\n");;
		printf("1. 할 일 추가\n2. 할 일 삭제\n3. 목록 보기\n4. 종료\n5. 할 일 수정\n");
		printf("현재 할 일 수 = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice);

		int terminate = 0; // 종료를 위한 flag
		int delIndex = -1;  // 할 일 삭제를 위한 index 저장 변수
		int changeIndex = -1; // 할 일 수정을 위한 index 저장 변수
		char ch; // 할 일 수정시 버퍼를 받기 위한 문자 변수
		char todo_name[100]; //할 일 수정시 할 일의 내용을 받을 배열
		int todo_number; //할 일 수정시 할 일의 번호를 받을 배열
		char before_todo_name[100]; // 할 일 수정 할 때 이전에 했어야 하는 일의 내용을 받을 배열

		// 입력에 따른 기능 수행
		switch (choice) {
		case 1:
			printf("할 일을 입력하세요 (공백 없이 입력하세요): ");
			scanf_s("%s", tasks[taskCount], (int)sizeof(tasks[taskCount]));
			printf("할 일 ""%s""가 저장되었습니다\n\n", tasks[taskCount]);
			taskCount++;
			break;
		case 2:
			// 할 일 삭제하는 코드 블록 
			printf("삭제할 할 일의 번호를 입력해주세요. (1부터 시작):");
			scanf_s("%d", &delIndex);
			if (delIndex > taskCount || delIndex <= 0) {
				printf("삭제 범위가 벗어났습니다.\n");
			}
			else {
				printf("%d. %s : 할 일을 삭제합니다.\n", delIndex, tasks[delIndex - 1]);

				// 배열간 대입 (=배열에 문자 배열인 문자열의 대입) 이 불가능하기 때문에
				// 문자열 복사 함수로 삭제
				strcpy_s(tasks[delIndex - 1], sizeof(tasks[delIndex - 1]), "");

				// 특정 인덱스의 할 일 삭제 후 뒤에 있는 할 일 앞으로 옮기기
				for (int i = delIndex; i < taskCount + 1; i++) {
					strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]); //2번째 할일 삭제-> 3번째 할일을 2번째 할일로 옮김. 그리고 그 다음 할일들도 하나씩 앞으로 옮김.
				}
				taskCount -= 1; //해야 할 일 하나 삭제했으니까 할일 수 -1
			}
			break;
		case 3:
			printf("할 일 목록\n");
			for (int i = 0; i < taskCount; i++) {
				printf("%d. %s \n", i + 1, tasks[i]);
			}
			printf("\n");
			break;
		case 4:
			terminate = 1;
			break;
		case 5:
			printf("할 일의 번호를 입력하세요.");
			scanf_s("%d", &todo_number);
			ch = getchar();
			printf("할 일의 내용을 입력하세요.");
			scanf_s("%s", todo_name, sizeof(todo_name));
			strcpy_s(before_todo_name, sizeof(before_todo_name), tasks[todo_number - 1]);
			strcpy_s(tasks[todo_number-1], sizeof(tasks[todo_number-1]), todo_name);
			printf("%d. %s가 %d. %s로 할일이 변경되었습니다.\n", todo_number, before_todo_name, todo_number, todo_name);
			break;
		default:
			printf("잘못된 선택입니다. 다시 선택하세요.\n");
		}
		if (taskCount == 10) {
			printf("10개의 할 일이 다 찼습니다.\n");
			break;
		}

		if (terminate == 1) {
			printf("종료를 선택하셨습니다. 프로그램을 종료합니다.\n");
			break;
		}

		// TODO: 할 일이 다 찼는지 체크하는 코드 작성

	}
}