/*
//�Է� : I am a man
//��� : man a am I

#include <stdio.h>
#include <string.h>

int main(){
    char s[50];
    
    scanf("%[^\n]", s);
    int len = strlen(s);

    int cnt = 0;
    
    for(int i = len - 1; i >= 0; i--){
        cnt++;        
        if(i == 0){ //������ �ܾ��� ��
            for(int j = i + 1; j < cnt; j++){
                printf("%c", s[j]); //�ܾ� ���� ���
            }
            cnt = 0;
        }
        else{
            if(s[i] == ' '){    //���鹮�� �߰�, �ܾ� ���
                for(int j = i + 1; j < cnt; j++){
                    printf("%c", s[j]); //�ܾ� ���� ���
                }
            
                printf(" "); //������ �ܾ��� ���
            
                cnt = 0;
            }   
        }

    }
    // 9, 8, 7(nam) -> 7, 8, 9(man)
        // 5(a)
        // 3,2(ma) -> 2, 3(am)
        // 0(I)
    return 0;
}

*/

#include <stdio.h>
#include <string.h>

int main(){
    char s[50];
    
    // ��ü ������ �Է¹޽��ϴ�.
    scanf("%[^\n]", s);
    int len = strlen(s);

    int cnt = 0;

    for(int i = len - 1; i >= 0; i--){
        if(s[i] == ' ' || i == 0) {  // ������ ã�ų� ���ڿ��� ó���� �������� ��
            int start = (i == 0) ? i : i + 1;  // ù �ܾ��� ��� ���� ��ġ ����
            for(int j = start; j < len - cnt; j++){
                printf("%c", s[j]);  // �ܾ� ���
            }
            if(i > 0) {
                printf(" ");  // �ܾ� ���̿� ���� �߰�
            }
            cnt = len - i;  // ó���� �ܾ��� ���� ���
        }
    }

    return 0;
}