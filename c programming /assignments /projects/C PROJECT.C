#include <stdio.h>
#include <string.h>

// Define structure for a cricket player
typedef struct {
    int jerseyNo;
    char name[50];
    int runs;
    int wickets;
    int matches;
} Player;

// Function declarations
void addPlayer(Player[], int*);
void removePlayer(Player[], int*);
void searchPlayer(Player[], int);
void updatePlayer(Player[], int);
void displayAllPlayers(Player[], int);
void displayTopPlayers(Player[], int);	

int main() {
    Player players[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\n===== Player Management System =====\n");
        printf("1. Add Player\n");
        printf("2. Remove Player\n");
        printf("3. Search Player\n");
        printf("4. Update Player\n");
        printf("5. Display All Players\n");
        printf("6. Display Top 3 Players\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) 
		{
            addPlayer(players, &count);
        } 
		else if (choice == 2) {
            removePlayer(players, &count);
        } else if (choice == 3) {
            searchPlayer(players, count);
        } else if (choice == 4) {
            updatePlayer(players, count);
        } else if (choice == 5) {
            displayAllPlayers(players, count);
        } else if (choice == 6) {
            displayTopPlayers(players, count);
        } else if (choice == 7) {
            break;
        } else {
            printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}

// Function to add a new player
void addPlayer(Player players[], int *count)
 {
    printf("Enter Jersey Number: ");
    scanf("%d", &players[*count].jerseyNo);
    printf("Enter Name: ");
    scanf("%s", players[*count].name);
    printf("Enter Runs: ");
    scanf("%d", &players[*count].runs);
    printf("Enter Wickets: ");
    scanf("%d", &players[*count].wickets);
    printf("Enter Matches Played: ");
    scanf("%d", &players[*count].matches);
    (*count)++;
    printf("Player added successfully.\n");
}

// Function to remove a player by jersey number
void removePlayer(Player players[], int *count) {
    int jersey, i, found = 0;
    printf("Enter Jersey Number to Remove: "); // arry pahije tich value display ktoy remove nahi krt 
    scanf("%d", &jersey);
         
        }
    }
    if (!found) {
        printf("Player not found.\n");
    }
}

// Function to search for a player
void searchPlayer(Player players[], int count) {
    int jersey, found = 0;
    char name[50];
    printf("Search by:\n1. Jersey Number\n2. Name\nEnter choice: ");
    int opt;
    scanf("%d", &opt);
    if (opt == 1) {
        printf("Enter Jersey Number: ");
        scanf("%d", &jersey);
        for (int i = 0; i < count; i++) {
            if (players[i].jerseyNo == jersey) {
                found = 1;
                printf("\nJersey: %d, Name: %s, Runs: %d, Wickets: %d, Matches: %d\n",
                    players[i].jerseyNo, players[i].name,
                    players[i].runs, players[i].wickets, players[i].matches);
                break;
            }
        }
    } else if (opt == 2) {
        printf("Enter Name: ");
        scanf("%s", name);
        for (int i = 0; i < count; i++) {
            if (strcmp(players[i].name, name) == 0) {
                found = 1;
                printf("\nJersey: %d, Name: %s, Runs: %d, Wickets: %d, Matches: %d\n",
                    players[i].jerseyNo, players[i].name,
                    players[i].runs, players[i].wickets, players[i].matches);
            }
        }
    }
    if (!found) {
        printf("Player not found.\n");
    }
}

// Function to update player data
void updatePlayer(Player players[], int count) {
    int jersey, found = 0;
    printf("Enter Jersey Number to Update: ");
    scanf("%d", &jersey);
    for (int i = 0; i < count; i++) {
        if (players[i].jerseyNo == jersey) {
            found = 1;
            printf("Enter New Runs: ");
            scanf("%d", &players[i].runs);
            printf("Enter New Wickets: ");
            scanf("%d", &players[i].wickets);
            printf("Enter New Matches Played: ");
            scanf("%d", &players[i].matches);
            printf("Player data updated.\n");
            break;
        }
    }
    if (!found) {
        printf("Player not found.\n");
    }
}

// Function to display all players
void displayAllPlayers(Player players[], int count)
 {
 	
    if (count == 0) {
        printf("No players to display.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        printf("\nJersey: %d, Name: %s, Runs: %d, Wickets: %d, Matches: %d\n",
            players[i].jerseyNo, players[i].name,
            players[i].runs, players[i].wickets, players[i].matches);
    }
}

// Function to display top 3 players by runs and wickets
void displayTopPlayers(Player players[], int count) {
    if (count < 3) {
        printf("Need at least 3 players to show top performers.\n");
        return;
    }
    Player temp;
    // Sort players by runs (descending)
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (players[i].runs < players[j].runs) {
                //temp = players[i];
                players[i] =   players[i]+ players[j];
                players[j] = players[i]- players[j];
                players[i] =   players[i]- players[j];
                
            }
        }
    }
    printf("\nTop 3 Players by Runs:\n");
    for (int i = 0; i < 3 && i < count; i++) {
        printf("%d. %s - Runs: %d\n", i+1, players[i].name, players[i].runs);
    }

    // Sort players by wickets (descending)
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (players[i].wickets < players[j].wickets) {
                temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }
    printf("\nTop 3 Players by Wickets:\n");
    for (int i = 0; i < 3 && i < count; i++) {
        printf("%d. %s - Wickets: %d\n", i+1, players[i].name, players[i].wickets);
    }
    
}
