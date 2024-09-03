/*
//입력 : I am a man
//출력 : man a am I

#include <stdio.h>
#include <string.h>

int main(){
    char s[50];
    
    scanf("%[^\n]", s);
    int len = strlen(s);

    int cnt = 0;
    
    for(int i = len - 1; i >= 0; i--){
        cnt++;        
        if(i == 0){ //마지막 단어일 때
            for(int j = i + 1; j < cnt; j++){
                printf("%c", s[j]); //단어 역순 출력
            }
            cnt = 0;
        }
        else{
            if(s[i] == ' '){    //공백문자 발견, 단어 출력
                for(int j = i + 1; j < cnt; j++){
                    printf("%c", s[j]); //단어 역순 출력
                }
            
                printf(" "); //마지막 단어일 경우
            
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
    
    // 전체 문장을 입력받습니다.
    scanf("%[^\n]", s);
    int len = strlen(s);

    int cnt = 0;

    for(int i = len - 1; i >= 0; i--){
        if(s[i] == ' ' || i == 0) {  // 공백을 찾거나 문자열의 처음에 도달했을 때
            int start = (i == 0) ? i : i + 1;  // 첫 단어일 경우 시작 위치 설정
            for(int j = start; j < len - cnt; j++){
                printf("%c", s[j]);  // 단어 출력
            }
            if(i > 0) {
                printf(" ");  // 단어 사이에 공백 추가
            }
            cnt = len - i;  // 처리한 단어의 길이 계산
        }
    }

    return 0;
}