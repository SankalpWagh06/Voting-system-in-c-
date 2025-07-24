#include <iostream>
using namespace std;

const int NUM_PARTIES = 8;
const int MIN_VOTING_AGE = 18;

int main() {
    int votes[NUM_PARTIES] = {0}; // Votes for each party
    int spoiltVotes = 0;
    int n;

    string parties[NUM_PARTIES] = {
        "BMK", "IAADMK", "CMK", "DAMK",
        "DKDK", "AMKM", "NSK", "Others"
    };

    cout << "Enter the number of voters: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        int age, vote;
        cout << "\nVoter " << i << ", enter your age: ";
        cin >> age;

        if (age >= MIN_VOTING_AGE) {
            cout << "You are eligible to vote.\n";
            cout << "List of Political Parties in Tamil Nadu:\n";
            for (int j = 0; j < NUM_PARTIES; ++j) {
                cout << j + 1 << ". " << parties[j] << endl;
            }

            cout << "Enter the number corresponding to your vote: ";
            cin >> vote;

            if (vote >= 1 && vote <= NUM_PARTIES) {
                votes[vote - 1]++;
            } else {
                spoiltVotes++;
                cout << "Invalid vote. Counted as spoilt vote.\n";
            }

        } else {
            cout << "You are not eligible to vote.\n";
        }
    }

    cout << "\n🗳️ Voting Results:\n";
    for (int i = 0; i < NUM_PARTIES; ++i) {
        cout << parties[i] << ": " << votes[i] << " votes\n";
    }
    cout << "Spoilt Votes: " << spoiltVotes << endl;

    return 0;
}
