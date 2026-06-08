#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SONGS 100

typedef enum {
    GAYO,
    POP,
    CLASSIC,
    MOVIE
} Genre;

typedef struct {
    char title[100];
    char artist[100];
    char location[100];
    Genre genre;
} Song;

Song songs[MAX_SONGS];
int numSongs = 0;

void addSong() {
    if (numSongs >= MAX_SONGS) {
        printf("더 이상 곡을 추가할 수 없습니다.\n");
        return;
    }

    printf("제목: ");
    scanf(" %[^\n]s", songs[numSongs].title);
    printf("가수: ");
    scanf(" %[^\n]s", songs[numSongs].artist);
    printf("위치: ");
    scanf(" %[^\n]s", songs[numSongs].location);

    printf("장르 (0: 가요, 1: 팝, 2: 클래식, 3: 영화음악): ");
    scanf("%d", &(songs[numSongs].genre));

    numSongs++;
}

void printSongs() {
    if (numSongs == 0) {
        printf("등록된 곡이 없습니다.\n");
        return;
    }

    printf("등록된 곡 목록:\n");
    for (int i = 0; i < numSongs; i++) {
        printf("제목: %s\n", songs[i].title);
        printf("가수: %s\n", songs[i].artist);
        printf("위치: %s\n", songs[i].location);
        printf("장르: ");
        switch (songs[i].genre) {
        case GAYO:
            printf("가요\n");
            break;
        case POP:
            printf("팝\n");
            break;
        case CLASSIC:
            printf("클래식\n");
            break;
        case MOVIE:
            printf("영화음악\n");
            break;
        default:
            printf("알 수 없음\n");
            break;
        }
        printf("\n");
    }
}

void searchSong() {
    if (numSongs == 0) {
        printf("등록된 곡이 없습니다.\n");
        return;
    }

    char searchTitle[100];
    printf("검색할 곡의 제목을 입력하세요: ");
    scanf(" %[^\n]s", searchTitle);

    int search = 0;
    for (int i = 0; i < numSongs; i++) {
        if (strcmp(songs[i].title, searchTitle) == 0) {
            printf("검색 결과:\n");
            printf("제목: %s\n", songs[i].title);
            printf("가수: %s\n", songs[i].artist);
            printf("위치: %s\n", songs[i].location);
            printf("장르: ");
            switch (songs[i].genre) {
            case GAYO:
                printf("가요\n");
                break;
            case POP:
                printf("팝\n");
                break;
            case CLASSIC:
                printf("클래식\n");
                break;
            case MOVIE:
                printf("영화음악\n");
                break;
            default:
                printf("알 수 없음\n");
                break;
            }
            printf("\n");
            search = 1;
            break;
        }
    }

    if (!search) {
        printf("검색 결과가 없습니다.\n");
    }
}

int main() {
    int choice;

    while (1) {
        printf("===============\n");
        printf("1. 추가\n");
        printf("2. 출력\n");
        printf("3. 검색\n");
        printf("4. 종료\n");
        printf("===============\n");
        printf("정수값을 입력하시오: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            addSong();
            break;
        case 2:
            printSongs();
            break;
        case 3:
            searchSong();
            break;
        case 4:
            printf("프로그램을 종료합니다.\n");
            return 0;
        default:
            printf("잘못된 선택입니다. 다시 입력하세요.\n");
            break;
        }
    }
    return 0;
}