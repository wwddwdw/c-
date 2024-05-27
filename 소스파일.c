//이 소스코드는 미완성입니다.!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> //콘솔 파일 입출력함수
#include <time.h>

void clear_screen() {
    system("cls");
}

// 플레이어, 보스
void Hero(int player_hp) {
    printf("\033[15;17f ( *-*)");
    printf("\033[16;17f (  9 )9");
    printf("\033[17;17f  /  |");
    printf("\033[20;17f Player HP: %d", player_hp);
}

void Monster(int boss_hp) {
    printf("\033[15;34f     А А");
    printf("\033[16;34f 　(ﾟーﾟ*)");
    printf("\033[17;34f    (_＿_)~");
    printf("\033[20;34f Boss HP: %d", boss_hp);
}

void space_bar_cls() {
    printf("\n계속 하시려면 스페이스바를 누르세요.\n");
    while (getchar() != ' '); // 사용자의 스페이스바 입력을 기다림
    clear_screen();
}

// 함수 선언
void 탑의_1층();
void 탑의_2층();
void 탑의_3층();
void 탑의_4층();
void main_menu();
void tutorial();

int main() {
    srand((unsigned int)time(0)); // 랜덤 시드 초기화
    main_menu();
    return 0;
}

void main_menu() {
    int choice;
    clear_screen();
    // 게임 시작
    printf("\033[2;1f     ╔═══━━━─────────────────── • ───────────────────━━━═══╗     ");
    printf("\033[4;17f 당신은 등교중 버스에 치였습니다.");
    printf("\033[6;19f 눈을 떠 보니 이 곳은 이세계,");
    printf("\033[8;8f 왜인지 모르지만 사람들은 당신을 용사라고 부릅니다.");
    printf("\033[10;17f 당신은 탑의 마왕을 물리쳐야합니다.");
    printf("\033[12;25f 탑을 올라볼까요?");

    printf("\033[15;32f ()");
    printf("\033[16;32f )(");
    printf("\033[17;29f o======o");
    printf("\033[18;32f ||");
    printf("\033[19;32f ||");
    printf("\033[20;32f ||");
    printf("\033[21;32f ||");
    printf("\033[22;32f ||");
    printf("\033[23;32f ||");
    printf("\033[24;32f ||");
    printf("\033[25;32f |/");

    // 선 전체 - 21
    printf("\033[28;22f ╭───────────────────╮");

    printf("\033[30;27f 1. 시작하기");
    printf("\033[32;28f 2. 나가기");

    printf("\033[34;22f ╰───────────────────╯");

    printf("\033[36;22f 선택지를 입력하세요: ");
    scanf("%d", &choice);

    // 사용자의 선택에 따라 다른 메시지 출력
    if (choice == 1) {
        printf("\033[38;1f 이제부터 당신은 탑을 오르는 위대한 여정을 시작하게 됩니다.\n");
        printf("\033[40;1f 시작하기에 앞서 이 탑을 공략하기 위한 튜토리얼을 시작하겠습니다.\n");

        printf("\033[42;1f 계속하려면 스페이스바를 누르세요\n");
        while (getchar() != ' '); // 사용자의 스페이스바 입력을 기다림
        clear_screen();

        // 카드 설명 출력
        tutorial();
        space_bar_cls();

        // 튜토리얼 스테이지 시작
        탑의_1층();
    }
    else if (choice == 2) {
        printf("\033[38;1f 게임을 종료합니다.\n");
    }
}

void tutorial() {
    printf("\033[2;1f 카드는 플레이어가 전투를 할 때 사용하는 '스킬'의 개념으로,");
    printf("\033[3;1f 공격력과 속성, 사용횟수를 가지게 됩니다.\n\n");

    printf("◑ ━━━「₪」━━━ ◑\n");
    printf(" |             |\n");
    printf(" |             |\n");
    printf(" |             |\n");
    printf(" |             |\n");
    printf(" |             |\n");
    printf(" |             |\n");
    printf("◑ ━━━「₪」━━━ ◑\n");

    printf("이 카드는 바람타입의 카드입니다. 이 카드는 바람1, 바람2 두 가지 스킬이 존재합니다.\n");
    printf("바람1 스킬은\n");
    printf("바람2 스킬은\n\n");

    printf("◑ ━━━ ▣ ━━━ ◐\n");
    printf(" |            |\n");
    printf(" |            |\n");
    printf(" |            |\n");
    printf(" |            |\n");
    printf(" |            |\n");
    printf(" |            |\n");
    printf("◑ ━━━ ▣ ━━━ ◐\n");

    printf("이 카드는 땅 타입의 카드입니다. 이 카드는 땅1, 땅2 두 가지 스킬이 존재합니다.\n");
    printf("땅1 스킬은\n");
    printf("땅2 스킬은\n\n");

    printf(" ━━━┛ ✠ ┗━━━\n");
    printf("|            |\n");
    printf("|            |\n");
    printf("|            |\n");
    printf("|            |\n");
    printf("|            |\n");
    printf("|            |\n");
    printf(" ━━━┓ ✠ ┏━━━ \n");

    printf("이 카드는 물 타입의 카드입니다. 이 카드는 물1, 물2 두 가지 스킬이 존재합니다.\n");
    printf("물1스킬은\n");
    printf("물2스킬은\n\n");

    printf(" ═──═ ◇ ═──═\n");
    printf(" |           |\n");
    printf(" |           |\n");
    printf(" |           |\n");
    printf(" |           |\n");
    printf(" |           |\n");
    printf(" |           |\n");
    printf(" ═──═ ◇ ═──═\n");

    printf("이 카드는 불 타입의 카드입니다. 이 카드는 불1, 불2 두 가지 스킬이 존재합니다.\n");
    printf("불1 스킬은\n");
    printf("불2 스킬은\n\n");

    printf("고유 속성들은 저마다의 상성이 존재합니다. 물->불->풀->전기->물 의 순서대로 상성을 가집니다.\n");
    printf("예를 들어, 보스의 속성이 물타입이라면 전기 속성의 카드가 더 큰 공격력을 가지게 되고, 풀타입의 보스에게는 불타입의 카드가 더 큰 공격력을 가지게 됩니다.\n");
    printf("스페이스바를 누르면 튜토리얼 스테이지로 입장합니다.");
}

void draw_status(int player_hp, int boss_hp) {
    clear_screen();
    Hero(player_hp);
    Monster(boss_hp);
    printf("\n");
    printf("\033[2;2f ╔════╗");
    printf("\033[3;4f 1F");
    printf("\033[4;2f ╚════╝");

    printf("\033[5;2f ╭─────────────╮");
    printf("\033[6;3f ■■■ LV. 1");
    printf("\033[7;3f HP ----------");
    printf("\033[8;2f ╰─────────────╯");

    printf("\033[18;2f ================================================");
    printf("\033[19;2f ╭─────────────╮");
    printf("\033[20;3f HP ----------");
    printf("\033[21;2f ╰─────────────╯");
    printf("\033[22;2f ╭────────────────────────────╮");
    printf("\033[24;4f 1. 공격하기    2. 방어하기");
    printf("\033[25;4f 3. 도망치기    4. 시작화면");
    printf("\033[27;2f ╰────────────────────────────╯");

    printf("\n");
}

// 1층 튜토리얼
void 탑의_1층() {
    int choice_number;
    int choice_card_attack;
    int choice_card_protect;
    int choice_card_skill_water;
    int choice_card_skill_fire;
    int choice_card_skill_electric;
    int choice_card_skill_plant;
    int boss_hp = 20;
    int player_hp = 20;
    int boss_damage;
    int card_uses[4] = { 10, 10, 10, 10 }; // 각 카드의 사용 횟수 (물, 불, 전기, 풀)
    int water_boost_turns = 0;
    int skip_boss_turn = 0;
    int dodge_next = 0;
    int reflect_damage = 0;

    draw_status(player_hp, boss_hp);

    while (player_hp > 0 && boss_hp > 0) {
        printf("번호를 선택하세요 : ");
        scanf("%d", &choice_number);

        if (choice_number == 1) {
            printf("\n1. 물 (%d회 남음) 2. 불 (%d회 남음) 3. 전기 (%d회 남음) 4. 풀 (%d회 남음)\n",
                card_uses[0], card_uses[1], card_uses[2], card_uses[3]);
            printf("공격에 사용할 네 가지 카드 중 하나를 선택하세요 : ");
            scanf("%d", &choice_card_attack);

            if (card_uses[choice_card_attack - 1] <= 0) {
                printf("이 카드는 더 이상 사용할 수 없습니다.\n");
                continue;
            }

            card_uses[choice_card_attack - 1]--;

            if (choice_card_attack == 1) { // 물 카드
                printf("\n1. 물1   2. 물2\n");
                printf(" 스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_water);
                if (choice_card_skill_water == 1) {
                    printf("\n물1 스킬을 사용했다. ");
                    boss_hp -= 3;
                }
                else if (choice_card_skill_water == 2) {
                    printf("\n물2 스킬을 사용했다. ");
                    boss_hp -= 2;
                }
                if (rand() % 3 == 0) {
                    water_boost_turns = 1;
                }
            }
            else if (choice_card_attack == 2) { // 불 카드
                printf("\n1. 불1  2. 불2\n");
                printf(" 스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_fire);
                if (choice_card_skill_fire == 1) {
                    printf("\n불1 스킬을 사용했다\n");
                    boss_hp -= 2;
                }
                else if (choice_card_skill_fire == 2) {
                    printf("\n불2 스킬을 사용했다\n");
                    boss_hp -= 1;
                }
                int reflect_chance = rand() % 15;
                if (reflect_chance < 5) {
                    reflect_damage = 25;
                }
                else if (reflect_chance < 8) {
                    reflect_damage = 50;
                }
                else if (reflect_chance < 10) {
                    reflect_damage = 75;
                }
            }
            else if (choice_card_attack == 3) { // 전기 카드
                printf("\n1. 전기1  2. 전기2\n");
                printf(" 스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_electric);
                if (choice_card_skill_electric == 1) {
                    printf("\n전기1 스킬을 사용했다\n");
                    printf("상성 효과로 스킬의 위력이 증가합니다!");
                    boss_hp -= 5;
                }
                else if (choice_card_skill_electric == 2) {
                    printf("\n전기2 스킬을 사용했다\n");
                    printf("상성 효과로 스킬의 위력이 증가합니다!");
                    boss_hp -= 7;
                }
                if (rand() % 10 < 6) {
                    skip_boss_turn = 1;
                }
            }
            else if (choice_card_attack == 4) { // 풀 카드
                printf("\n1. 풀1  2. 풀2\n");
                printf(" 스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_plant);
                if (choice_card_skill_plant == 1) {
                    printf("\n풀1 스킬을 사용했다\n");
                    boss_hp -= 3;
                }
                else if (choice_card_skill_plant == 2) {
                    printf("\n풀2 스킬을 사용했다\n");
                    boss_hp -= 2;
                }
                if (rand() % 2 == 0) {
                    dodge_next = 1;
                }
            }
            printf("보스의 체력이 %d 남았습니다.\n", boss_hp);
        }
        else if (choice_number == 2) {
            printf("1. 물 2. 불. 3. 풀. 4. 땅\n");
            printf("방어에 사용할 네 가지 카드 중 하나를 선택하세요 : ");
            scanf("%d", &choice_card_protect);
            if (choice_card_protect == 1) {
                printf("\n1. 물1  2. 물2\n");
                printf("스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_water);
                if (choice_card_skill_water == 1) {
                    printf("\n물1 방어 스킬을 사용했다\n");
                    boss_damage -= 1;
                }
                else if (choice_card_skill_water == 2) {
                    printf("\n물2 방어 스킬을 사용했다\n");
                    boss_damage -= 1;
                }
            }
            else if (choice_card_protect == 2) {
                printf("\n1. 불1  2. 불2\n");
                printf("스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_fire);
                if (choice_card_skill_fire == 1) {
                    printf("\n불1 방어 스킬을 사용했다\n");
                    boss_damage -= 1;
                }
                else if (choice_card_skill_fire == 2) {
                    printf("\n불2 방어 스킬을 사용했다\n");
                    boss_damage -= 1;
                }
            }
            else if (choice_card_protect == 3) {
                printf("\n1. 풀1  2. 풀2\n");
                printf("스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_plant);
                if (choice_card_skill_plant == 1) {
                    printf("\n풀1 방어 스킬을 사용했다\n");
                    boss_damage -= 2;
                }
                else if (choice_card_skill_plant == 2) {
                    printf("\n풀2 방어 스킬을 사용했다\n");
                    boss_damage -= 3;
                }
            }
            else if (choice_card_protect == 4) {
                printf("\n1. 전기1  2. 전기2\n");
                printf("스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_electric);
                if (choice_card_skill_electric == 1) {
                    printf("\n전기1 방어 스킬을 사용했다\n");
                    boss_damage -= 5;
                }
                else if (choice_card_skill_electric == 2) {
                    printf("\n전기2 방어 스킬을 사용했다\n");
                    boss_damage -= 4;
                }
            }
        }
        else if (choice_number == 3) {
            printf("당신은 튜토리얼에서 도망쳤습니다.\n");
            break;
        }
        else if (choice_number == 4) {
            clear_screen();
            main_menu();
            break;
        }

        // 상태 갱신 후 화면 다시 그리기
        draw_status(player_hp, boss_hp);

        // 보스의 공격 차례
        if (boss_hp > 0 && !skip_boss_turn) {
            boss_damage = 2; // 보스의 공격력 설정

            if (dodge_next) {
                printf("보스의 공격을 회피했습니다!\n");
                dodge_next = 0;
            }
            else {
                player_hp -= boss_damage;
                printf("물마법사가 당신을 공격했습니다. 플레이어의 체력이 %d 남았습니다.\n", player_hp);
                if (reflect_damage > 0) {
                    printf("공격 데미지의 %d%%를 반사했습니다!\n", reflect_damage);
                    boss_hp -= boss_damage * reflect_damage / 100;
                    reflect_damage = 0;
                    printf("보스의 체력이 %d 남았습니다.\n", boss_hp);
                }
            }
        }
        else if (skip_boss_turn) {
            printf("보스가 기절하여 공격하지 못했습니다.\n");
            skip_boss_turn = 0;
        }

        // 물 카드 사용 후 플레이어 공격력 증가 처리
        if (water_boost_turns > 0) {
            if (rand() % 3 == 0) {
                double boost = 1.8 + (rand() % 8) / 10.0;
                printf("플레이어의 공격력이 %.1f배 증가했습니다!\n", boost);
                boss_hp -= boss_damage * boost;
                printf("보스의 체력이 %d 남았습니다.\n", boss_hp);
            }
            water_boost_turns = 0;
        }

        if (player_hp <= 0) {
            printf("당신은 튜토리얼에서 죽었습니다.\n");
            printf("스페이스바를 누르면 메인화면으로 돌아갑니다.");
            space_bar_cls();
            main_menu();
            break;
        }
        else if (boss_hp <= 0) {
            printf("보스를 처치했습니다! 스테이지 클리어!\n");
            printf("탑의 2층으로 가려면 스페이스바를 누르세요 : ");
            while (getchar() != ' '); // 사용자의 스페이스바 입력을 기다림
            clear_screen();
            탑의_2층();
            break;
        }

        draw_status(player_hp, boss_hp); // 상태 갱신 후 화면 다시 그리기
    }
}

void 탑의_2층() {
    int choice_number;
    int choice_card_attack;
    int choice_card_protect;
    int choice_card_skill_water;
    int choice_card_skill_fire;
    int choice_card_skill_electric;
    int choice_card_skill_plant;
    int boss_hp = 40;
    int player_hp = 20;
    int boss_damage;
    int card_uses[4] = { 10, 10, 10, 10 }; // 각 카드의 사용 횟수 (물, 불, 전기, 풀)
    int water_boost_turns = 0;
    int skip_boss_turn = 0;
    int dodge_next = 0;
    int reflect_damage = 0;

    draw_status(player_hp, boss_hp);

    while (player_hp > 0 && boss_hp > 0) {
        printf("번호를 선택하세요 : ");
        scanf("%d", &choice_number);

        if (choice_number == 1) {
            printf("\n1. 물 (%d회 남음) 2. 불 (%d회 남음) 3. 전기 (%d회 남음) 4. 풀 (%d회 남음)\n",
                card_uses[0], card_uses[1], card_uses[2], card_uses[3]);
            printf("공격에 사용할 네 가지 카드 중 하나를 선택하세요 : ");
            scanf("%d", &choice_card_attack);

            if (card_uses[choice_card_attack - 1] <= 0) {
                printf("이 카드는 더 이상 사용할 수 없습니다.\n");
                continue;
            }

            card_uses[choice_card_attack - 1]--;

            if (choice_card_attack == 1) { // 물 카드
                printf("\n1. 물1   2. 물2\n");
                printf(" 스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_water);
                if (choice_card_skill_water == 1) {
                    printf("\n물1 스킬을 사용했다. ");
                    boss_hp -= 2; // 물타입 공격력 감소
                }
                else if (choice_card_skill_water == 2) {
                    printf("\n물2 스킬을 사용했다. ");
                    boss_hp -= 1; // 물타입 공격력 감소
                }
                if (rand() % 3 == 0) {
                    water_boost_turns = 1;
                }
            }
            else if (choice_card_attack == 2) { // 불 카드
                printf("\n1. 불1  2. 불2\n");
                printf(" 스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_fire);
                if (choice_card_skill_fire == 1) {
                    printf("\n불1 스킬을 사용했다\n");
                    boss_hp -= 2;
                }
                else if (choice_card_skill_fire == 2) {
                    printf("\n불2 스킬을 사용했다\n");
                    boss_hp -= 1;
                }
                int reflect_chance = rand() % 15;
                if (reflect_chance < 5) {
                    reflect_damage = 25;
                }
                else if (reflect_chance < 8) {
                    reflect_damage = 50;
                }
                else if (reflect_chance < 10) {
                    reflect_damage = 75;
                }
            }
            else if (choice_card_attack == 3) { // 전기 카드
                printf("\n1. 전기1  2. 전기2\n");
                printf(" 스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_electric);
                if (choice_card_skill_electric == 1) {
                    printf("\n전기1 스킬을 사용했다\n");
                    printf("상성 효과로 스킬의 위력이 증가합니다!");
                    boss_hp -= 5;
                }
                else if (choice_card_skill_electric == 2) {
                    printf("\n전기2 스킬을 사용했다\n");
                    printf("상성 효과로 스킬의 위력이 증가합니다!");
                    boss_hp -= 7;
                }
                if (rand() % 10 < 6) {
                    skip_boss_turn = 1;
                }
            }
            else if (choice_card_attack == 4) { // 풀 카드
                printf("\n1. 풀1  2. 풀2\n");
                printf(" 스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_plant);
                if (choice_card_skill_plant == 1) {
                    printf("\n풀1 스킬을 사용했다\n");
                    boss_hp -= 2; // 풀타입 공격력 감소
                }
                else if (choice_card_skill_plant == 2) {
                    printf("\n풀2 스킬을 사용했다\n");
                    boss_hp -= 1; // 풀타입 공격력 감소
                }
                if (rand() % 2 == 0) {
                    dodge_next = 1;
                }
            }
            printf("보스의 체력이 %d 남았습니다.\n", boss_hp);
        }
        else if (choice_number == 2) {
            printf("1. 물 2. 불. 3. 풀. 4. 땅\n");
            printf("방어에 사용할 네 가지 카드 중 하나를 선택하세요 : ");
            scanf("%d", &choice_card_protect);
            if (choice_card_protect == 1) {
                printf("\n1. 물1  2. 물2\n");
                printf("스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_water);
                if (choice_card_skill_water == 1) {
                    printf("\n물1 방어 스킬을 사용했다\n");
                    boss_damage -= 0; // 물타입 방어력 감소
                }
                else if (choice_card_skill_water == 2) {
                    printf("\n물2 방어 스킬을 사용했다\n");
                    boss_damage -= 0; // 물타입 방어력 감소
                }
            }
            else if (choice_card_protect == 2) {
                printf("\n1. 불1  2. 불2\n");
                printf("스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_fire);
                if (choice_card_skill_fire == 1) {
                    printf("\n불1 방어 스킬을 사용했다\n");
                    boss_damage -= 1;
                }
                else if (choice_card_skill_fire == 2) {
                    printf("\n불2 방어 스킬을 사용했다\n");
                    boss_damage -= 1;
                }
            }
            else if (choice_card_protect == 3) {
                printf("\n1. 풀1  2. 풀2\n");
                printf("스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_plant);
                if (choice_card_skill_plant == 1) {
                    printf("\n풀1 방어 스킬을 사용했다\n");
                    boss_damage -= 1; // 풀타입 방어력 감소
                }
                else if (choice_card_skill_plant == 2) {
                    printf("\n풀2 방어 스킬을 사용했다\n");
                    boss_damage -= 2; // 풀타입 방어력 감소
                }
            }
            else if (choice_card_protect == 4) {
                printf("\n1. 전기1  2. 전기2\n");
                printf("스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_electric);
                if (choice_card_skill_electric == 1) {
                    printf("\n전기1 방어 스킬을 사용했다\n");
                    boss_damage -= 5;
                }
                else if (choice_card_skill_electric == 2) {
                    printf("\n전기2 방어 스킬을 사용했다\n");
                    boss_damage -= 4;
                }
            }
        }
        else if (choice_number == 3) {
            printf("당신은 2층에서 도망쳤습니다.\n");
            break;
        }
        else if (choice_number == 4) {
            clear_screen();
            main_menu();
            break;
        }

        // 상태 갱신 후 화면 다시 그리기
        draw_status(player_hp, boss_hp);

        // 보스의 공격 차례
        if (boss_hp > 0 && !skip_boss_turn) {
            boss_damage = 3; // 보스의 기본 공격력 설정 (불타입 보스의 공격력 증가)

            if (dodge_next) {
                printf("보스의 공격을 회피했습니다!\n");
                dodge_next = 0;
            }
            else {
                player_hp -= boss_damage;
                printf("불마법사가 당신을 공격했습니다. 플레이어의 체력이 %d 남았습니다.\n", player_hp);
                if (reflect_damage > 0) {
                    printf("공격 데미지의 %d%%를 반사했습니다!\n", reflect_damage);
                    boss_hp -= boss_damage * reflect_damage / 100;
                    reflect_damage = 0;
                    printf("보스의 체력이 %d 남았습니다.\n", boss_hp);
                }
            }
        }
        else if (skip_boss_turn) {
            printf("보스가 기절하여 공격하지 못했습니다.\n");
            skip_boss_turn = 0;
        }

        // 물 카드 사용 후 플레이어 공격력 증가 처리
        if (water_boost_turns > 0) {
            if (rand() % 3 == 0) {
                double boost = 1.8 + (rand() % 8) / 10.0;
                printf("플레이어의 공격력이 %.1f배 증가했습니다!\n", boost);
                boss_hp -= boss_damage * boost;
                printf("보스의 체력이 %d 남았습니다.\n", boss_hp);
            }
            water_boost_turns = 0;
        }

        if (player_hp <= 0) {
            printf("당신은 2층에서 죽었습니다.\n");
            printf("스페이스바를 누르면 메인화면으로 돌아갑니다.");
            space_bar_cls();
            main_menu();
            break;
        }
        else if (boss_hp <= 0) {
            printf("보스를 처치했습니다! 스테이지 클리어!\n");
            printf("탑의 3층으로 가려면 스페이스바를 누르세요 : ");
            while (getchar() != ' '); // 사용자의 스페이스바 입력을 기다림
            clear_screen();
            탑의_3층();
            break;
        }

        draw_status(player_hp, boss_hp); // 상태 갱신 후 화면 다시 그리기
    }
}

void 탑의_3층() {
    int choice_number;
    int choice_card_attack;
    int choice_card_protect;
    int choice_card_skill_water;
    int choice_card_skill_fire;
    int choice_card_skill_electric;
    int choice_card_skill_plant;
    int boss_hp = 60;
    int player_hp = 20;
    int boss_damage;
    int card_uses[4] = { 10, 10, 10, 10 }; // 각 카드의 사용 횟수 (물, 불, 전기, 풀)
    int water_boost_turns = 0;
    int skip_boss_turn = 0;
    int dodge_next = 0;
    int reflect_damage = 0;

    draw_status(player_hp, boss_hp);

    while (player_hp > 0 && boss_hp > 0) {
        printf("번호를 선택하세요 : ");
        scanf("%d", &choice_number);

        if (choice_number == 1) {
            printf("\n1. 물 (%d회 남음) 2. 불 (%d회 남음) 3. 전기 (%d회 남음) 4. 풀 (%d회 남음)\n",
                card_uses[0], card_uses[1], card_uses[2], card_uses[3]);
            printf("공격에 사용할 네 가지 카드 중 하나를 선택하세요 : ");
            scanf("%d", &choice_card_attack);

            if (card_uses[choice_card_attack - 1] <= 0) {
                printf("이 카드는 더 이상 사용할 수 없습니다.\n");
                continue;
            }

            card_uses[choice_card_attack - 1]--;

            if (choice_card_attack == 1) { // 물 카드
                printf("\n1. 물1   2. 물2\n");
                printf(" 스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_water);
                if (choice_card_skill_water == 1) {
                    printf("\n물1 스킬을 사용했다. ");
                    boss_hp -= 5; // 물타입 공격력 증가
                }
                else if (choice_card_skill_water == 2) {
                    printf("\n물2 스킬을 사용했다. ");
                    boss_hp -= 4; // 물타입 공격력 증가
                }
                if (rand() % 3 == 0) {
                    water_boost_turns = 1;
                }
            }
            else if (choice_card_attack == 2) { // 불 카드
                printf("\n1. 불1  2. 불2\n");
                printf(" 스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_fire);
                if (choice_card_skill_fire == 1) {
                    printf("\n불1 스킬을 사용했다\n");
                    boss_hp -= 2;
                }
                else if (choice_card_skill_fire == 2) {
                    printf("\n불2 스킬을 사용했다\n");
                    boss_hp -= 1;
                }
                int reflect_chance = rand() % 15;
                if (reflect_chance < 5) {
                    reflect_damage = 25;
                }
                else if (reflect_chance < 8) {
                    reflect_damage = 50;
                }
                else if (reflect_chance < 10) {
                    reflect_damage = 75;
                }
            }
            else if (choice_card_attack == 3) { // 전기 카드
                printf("\n1. 전기1  2. 전기2\n");
                printf(" 스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_electric);
                if (choice_card_skill_electric == 1) {
                    printf("\n전기1 스킬을 사용했다\n");
                    printf("상성 효과로 스킬의 위력이 증가합니다!");
                    boss_hp -= 5;
                }
                else if (choice_card_skill_electric == 2) {
                    printf("\n전기2 스킬을 사용했다\n");
                    printf("상성 효과로 스킬의 위력이 증가합니다!");
                    boss_hp -= 7;
                }
                if (rand() % 10 < 6) {
                    skip_boss_turn = 1;
                }
            }
            else if (choice_card_attack == 4) { // 풀 카드
                printf("\n1. 풀1  2. 풀2\n");
                printf(" 스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_plant);
                if (choice_card_skill_plant == 1) {
                    printf("\n풀1 스킬을 사용했다\n");
                    boss_hp -= 3;
                }
                else if (choice_card_skill_plant == 2) {
                    printf("\n풀2 스킬을 사용했다\n");
                    boss_hp -= 2;
                }
                if (rand() % 2 == 0) {
                    dodge_next = 1;
                }
            }
            printf("보스의 체력이 %d 남았습니다.\n", boss_hp);
        }
        else if (choice_number == 2) {
            printf("1. 물 2. 불. 3. 풀. 4. 땅\n");
            printf("방어에 사용할 네 가지 카드 중 하나를 선택하세요 : ");
            scanf("%d", &choice_card_protect);
            if (choice_card_protect == 1) {
                printf("\n1. 물1  2. 물2\n");
                printf("스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_water);
                if (choice_card_skill_water == 1) {
                    printf("\n물1 방어 스킬을 사용했다\n");
                    boss_damage -= 2; // 물타입 방어력 증가
                }
                else if (choice_card_skill_water == 2) {
                    printf("\n물2 방어 스킬을 사용했다\n");
                    boss_damage -= 2; // 물타입 방어력 증가
                }
            }
            else if (choice_card_protect == 2) {
                printf("\n1. 불1  2. 불2\n");
                printf("스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_fire);
                if (choice_card_skill_fire == 1) {
                    printf("\n불1 방어 스킬을 사용했다\n");
                    boss_damage -= 1;
                }
                else if (choice_card_skill_fire == 2) {
                    printf("\n불2 방어 스킬을 사용했다\n");
                    boss_damage -= 1;
                }
            }
            else if (choice_card_protect == 3) {
                printf("\n1. 풀1  2. 풀2\n");
                printf("스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_plant);
                if (choice_card_skill_plant == 1) {
                    printf("\n풀1 방어 스킬을 사용했다\n");
                    boss_damage -= 2;
                }
                else if (choice_card_skill_plant == 2) {
                    printf("\n풀2 방어 스킬을 사용했다\n");
                    boss_damage -= 3;
                }
            }
            else if (choice_card_protect == 4) {
                printf("\n1. 전기1  2. 전기2\n");
                printf("스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_electric);
                if (choice_card_skill_electric == 1) {
                    printf("\n전기1 방어 스킬을 사용했다\n");
                    boss_damage -= 5;
                }
                else if (choice_card_skill_electric == 2) {
                    printf("\n전기2 방어 스킬을 사용했다\n");
                    boss_damage -= 4;
                }
            }
        }
        else if (choice_number == 3) {
            printf("당신은 3층에서 도망쳤습니다.\n");
            break;
        }
        else if (choice_number == 4) {
            clear_screen();
            main_menu();
            break;
        }

        // 상태 갱신 후 화면 다시 그리기
        draw_status(player_hp, boss_hp);

        // 보스의 공격 차례
        if (boss_hp > 0 && !skip_boss_turn) {
            boss_damage = 3; // 보스의 기본 공격력 설정 (전기타입 보스의 공격력 증가)

            if (dodge_next) {
                printf("보스의 공격을 회피했습니다!\n");
                dodge_next = 0;
            }
            else {
                player_hp -= boss_damage;
                printf("전기마법사가 당신을 공격했습니다. 플레이어의 체력이 %d 남았습니다.\n", player_hp);
                if (reflect_damage > 0) {
                    printf("공격 데미지의 %d%%를 반사했습니다!\n", reflect_damage);
                    boss_hp -= boss_damage * reflect_damage / 100;
                    reflect_damage = 0;
                    printf("보스의 체력이 %d 남았습니다.\n", boss_hp);
                }
            }
        }
        else if (skip_boss_turn) {
            printf("보스가 기절하여 공격하지 못했습니다.\n");
            skip_boss_turn = 0;
        }

        // 물 카드 사용 후 플레이어 공격력 증가 처리
        if (water_boost_turns > 0) {
            if (rand() % 3 == 0) {
                double boost = 1.8 + (rand() % 8) / 10.0;
                printf("플레이어의 공격력이 %.1f배 증가했습니다!\n", boost);
                boss_hp -= boss_damage * boost;
                printf("보스의 체력이 %d 남았습니다.\n", boss_hp);
            }
            water_boost_turns = 0;
        }

        if (player_hp <= 0) {
            printf("당신은 3층에서 죽었습니다.\n");
            printf("스페이스바를 누르면 메인화면으로 돌아갑니다.");
            space_bar_cls();
            main_menu();
            break;
        }
        else if (boss_hp <= 0) {
            printf("보스를 처치했습니다! 스테이지 클리어!\n");
            printf("탑의 4층으로 가려면 스페이스바를 누르세요 : ");
            while (getchar() != ' '); // 사용자의 스페이스바 입력을 기다림
            clear_screen();
            탑의_4층();
            break;
        }

        draw_status(player_hp, boss_hp); // 상태 갱신 후 화면 다시 그리기
    }
}

void 탑의_4층() {
    int choice_number;
    int choice_card_attack;
    int choice_card_protect;
    int choice_card_skill_water;
    int choice_card_skill_fire;
    int choice_card_skill_electric;
    int choice_card_skill_plant;
    int boss_hp = 80;
    int player_hp = 20;
    int boss_damage;
    int card_uses[4] = { 10, 10, 10, 10 }; // 각 카드의 사용 횟수 (물, 불, 전기, 풀)
    int water_boost_turns = 0;
    int skip_boss_turn = 0;
    int dodge_next = 0;
    int reflect_damage = 0;

    draw_status(player_hp, boss_hp);

    while (player_hp > 0 && boss_hp > 0) {
        printf("번호를 선택하세요 : ");
        scanf("%d", &choice_number);

        if (choice_number == 1) {
            printf("\n1. 물 (%d회 남음) 2. 불 (%d회 남음) 3. 전기 (%d회 남음) 4. 풀 (%d회 남음)\n",
                card_uses[0], card_uses[1], card_uses[2], card_uses[3]);
            printf("공격에 사용할 네 가지 카드 중 하나를 선택하세요 : ");
            scanf("%d", &choice_card_attack);

            if (card_uses[choice_card_attack - 1] <= 0) {
                printf("이 카드는 더 이상 사용할 수 없습니다.\n");
                continue;
            }

            card_uses[choice_card_attack - 1]--;

            if (choice_card_attack == 1) { // 물 카드
                printf("\n1. 물1   2. 물2\n");
                printf(" 스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_water);
                if (choice_card_skill_water == 1) {
                    printf("\n물1 스킬을 사용했다. ");
                    boss_hp -= 4; // 물타입 공격력 감소 (20% 감소)
                }
                else if (choice_card_skill_water == 2) {
                    printf("\n물2 스킬을 사용했다. ");
                    boss_hp -= 3; // 물타입 공격력 감소 (20% 감소)
                }
                if (rand() % 3 == 0) {
                    water_boost_turns = 1;
                }
            }
            else if (choice_card_attack == 2) { // 불 카드
                printf("\n1. 불1  2. 불2\n");
                printf(" 스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_fire);
                if (choice_card_skill_fire == 1) {
                    printf("\n불1 스킬을 사용했다\n");
                    boss_hp -= 2;
                }
                else if (choice_card_skill_fire == 2) {
                    printf("\n불2 스킬을 사용했다\n");
                    boss_hp -= 1;
                }
                int reflect_chance = rand() % 15;
                if (reflect_chance < 5) {
                    reflect_damage = 25;
                }
                else if (reflect_chance < 8) {
                    reflect_damage = 50;
                }
                else if (reflect_chance < 10) {
                    reflect_damage = 75;
                }
            }
            else if (choice_card_attack == 3) { // 전기 카드
                printf("\n1. 전기1  2. 전기2\n");
                printf(" 스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_electric);
                if (choice_card_skill_electric == 1) {
                    printf("\n전기1 스킬을 사용했다\n");
                    printf("상성 효과로 스킬의 위력이 증가합니다!");
                    boss_hp -= 5;
                }
                else if (choice_card_skill_electric == 2) {
                    printf("\n전기2 스킬을 사용했다\n");
                    printf("상성 효과로 스킬의 위력이 증가합니다!");
                    boss_hp -= 7;
                }
                if (rand() % 10 < 6) {
                    skip_boss_turn = 1;
                }
            }
            else if (choice_card_attack == 4) { // 풀 카드
                printf("\n1. 풀1  2. 풀2\n");
                printf(" 스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_plant);
                if (choice_card_skill_plant == 1) {
                    printf("\n풀1 스킬을 사용했다\n");
                    boss_hp -= 4; // 풀타입 공격력 증가 (20% 증가)
                }
                else if (choice_card_skill_plant == 2) {
                    printf("\n풀2 스킬을 사용했다\n");
                    boss_hp -= 3; // 풀타입 공격력 증가 (20% 증가)
                }
                if (rand() % 2 == 0) {
                    dodge_next = 1;
                }
            }
            printf("보스의 체력이 %d 남았습니다.\n", boss_hp);
        }
        else if (choice_number == 2) {
            printf("1. 물 2. 불. 3. 풀. 4. 땅\n");
            printf("방어에 사용할 네 가지 카드 중 하나를 선택하세요 : ");
            scanf("%d", &choice_card_protect);
            if (choice_card_protect == 1) {
                printf("\n1. 물1  2. 물2\n");
                printf("스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_water);
                if (choice_card_skill_water == 1) {
                    printf("\n물1 방어 스킬을 사용했다\n");
                    boss_damage -= 2; // 물타입 방어력 증가 (20% 감소)
                }
                else if (choice_card_skill_water == 2) {
                    printf("\n물2 방어 스킬을 사용했다\n");
                    boss_damage -= 2; // 물타입 방어력 증가 (20% 감소)
                }
            }
            else if (choice_card_protect == 2) {
                printf("\n1. 불1  2. 불2\n");
                printf("스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_fire);
                if (choice_card_skill_fire == 1) {
                    printf("\n불1 방어 스킬을 사용했다\n");
                    boss_damage -= 1;
                }
                else if (choice_card_skill_fire == 2) {
                    printf("\n불2 방어 스킬을 사용했다\n");
                    boss_damage -= 1;
                }
            }
            else if (choice_card_protect == 3) {
                printf("\n1. 풀1  2. 풀2\n");
                printf("스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_plant);
                if (choice_card_skill_plant == 1) {
                    printf("\n풀1 방어 스킬을 사용했다\n");
                    boss_damage -= 2; // 풀타입 방어력 증가 (20% 증가)
                }
                else if (choice_card_skill_plant == 2) {
                    printf("\n풀2 방어 스킬을 사용했다\n");
                    boss_damage -= 3; // 풀타입 방어력 증가 (20% 증가)
                }
            }
            else if (choice_card_protect == 4) {
                printf("\n1. 전기1  2. 전기2\n");
                printf("스킬 두 가지 중 하나를 선택하세요 : ");
                scanf("%d", &choice_card_skill_electric);
                if (choice_card_skill_electric == 1) {
                    printf("\n전기1 방어 스킬을 사용했다\n");
                    boss_damage -= 5;
                }
                else if (choice_card_skill_electric == 2) {
                    printf("\n전기2 방어 스킬을 사용했다\n");
                    boss_damage -= 4;
                }
            }
        }
        else if (choice_number == 3) {
            printf("당신은 4층에서 도망쳤습니다.\n");
            break;
        }
        else if (choice_number == 4) {
            clear_screen();
            main_menu();
            break;
        }

        // 상태 갱신 후 화면 다시 그리기
        draw_status(player_hp, boss_hp);

        // 보스의 공격 차례
        if (boss_hp > 0 && !skip_boss_turn) {
            boss_damage = 3; // 보스의 기본 공격력 설정 (전기타입 보스의 공격력 증가)

            if (dodge_next) {
                printf("보스의 공격을 회피했습니다!\n");
                dodge_next = 0;
            }
            else {
                player_hp -= boss_damage;
                printf("전기마법사가 당신을 공격했습니다. 플레이어의 체력이 %d 남았습니다.\n", player_hp);
                if (reflect_damage > 0) {
                    printf("공격 데미지의 %d%%를 반사했습니다!\n", reflect_damage);
                    boss_hp -= boss_damage * reflect_damage / 100;
                    reflect_damage = 0;
                    printf("보스의 체력이 %d 남았습니다.\n", boss_hp);
                }
            }
        }
        else if (skip_boss_turn) {
            printf("보스가 기절하여 공격하지 못했습니다.\n");
            skip_boss_turn = 0;
        }

        // 물 카드 사용 후 플레이어 공격력 증가 처리
        if (water_boost_turns > 0) {
            if (rand() % 3 == 0) {
                double boost = 1.8 + (rand() % 8) / 10.0;
                printf("플레이어의 공격력이 %.1f배 증가했습니다!\n", boost);
                boss_hp -= boss_damage * boost;
                printf("보스의 체력이 %d 남았습니다.\n", boss_hp);
            }
            water_boost_turns = 0;
        }

        if (player_hp <= 0) {
            printf("당신은 4층에서 죽었습니다.\n");
            printf("스페이스바를 누르면 메인화면으로 돌아갑니다.");
            space_bar_cls();
            main_menu();
            break;
        }
        else if (boss_hp <= 0) {
            printf("보스를 처치했습니다! 스테이지 클리어!\n");
            printf("당신은 탑의 모든 보스를 물리쳤습니다. 수고하셨습니다.\n");
            printf("엔터 키를 누르면 게임이 종료됩니다.\n");
            while (getchar() != '\n');
            exit(0);
        }

        draw_status(player_hp, boss_hp); // 상태 갱신 후 화면 다시 그리기
    }
}
