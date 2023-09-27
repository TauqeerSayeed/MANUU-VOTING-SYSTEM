#include"election.h"

int main(){
	printf("******	MANUU VOTING SYSTEM	******\nStudent user id must be of 14 chracter (e.g-year_code_zero should be added to make the length to 14(2023btecs00064) _rollno.)");
	
    while(1){
        printf("\n\t\t\t   1.Student panel \n\t\t\t   2.Admin panel \n\t\t\t   3.Exit \n\t\t\t   Option:");
		char input;
        scanf(" %c",&input);

        switch(input){
            case '1':
                studentPanel();
                break;
            case '2':
                adminPanel();
                break;
            case '3':
                return 0;
            default:
                printf("\nInvalid option");
                getch();
        }
    }
    return 0;
}
