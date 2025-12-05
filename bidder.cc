#include <fstream>
#include <iostream>
#include <string>
#include <vector>

// ============================================================================
// INSTRUCTIONS
// ============================================================================
// 1. Implement the three functions below.
// 2. You may use the main() function at the bottom to test your code locally.
// 3. Do not change the function signatures.
// ============================================================================

// TODO: Implement this function to return a vector of strings
// containing the names of everyone on your team.
std::vector<std::string> GetTeamMembers() {
  // Your code here

  return {"alexa_castro", "andrew_talavera"};
}

// TODO: Implement this function to return a string that describes
// the strategy your logic uses to bid (e.g., "We bid high early on").
std::string GetStrategy() {
  // Your code here
  return "Save in the beginning. Dump in the middle. Release any leftovers toward the end.";
}

// TODO: Implement the bidding logic.
// parameters:
//   rounds: The total number of rounds in the game.
//   budget: The total points available to spend across all rounds.
//   output_filename: The name of the file where the bids should be written.
//
// Logic:
//   1. Calculate how much to bid in each round.
//   2. Open 'output_filename' for writing.
//   3. Write the bid for each round on a new line in the file.
//
// Constraints:
//   - You must write exactly 'rounds' number of lines.
//   - The sum of all bids must not exceed 'budget'.
//   - Bids must be non-negative integers.
void GenerateBids(int rounds, int budget, std::string output_filename) {
  // Your code here

  std::ofstream output{output_filename};

  //we want to divide the rounds into different thirds and any remaining rounds
  //will be placed in the middle set of rounds
  int third_of_rounds {rounds / 3};
  int remaining_rounds {rounds % 3};

  //since the thirds are equal to one another. We need to mulitply them by their
  //repective section
  //first is 1
  //middle is 2
  //last is 3
  int first_third {third_of_rounds};
  int middle_third {third_of_rounds * 2 + remaining_rounds};
  int last_third {third_of_rounds * 3};

  std::cout << first_third << '\n' << middle_third << '\n' << last_third << '\n';

  //since the budget will move around, we have to make a temperary budget
  //to make sure we don't go over the total budget
  int new_budget{budget};
  int const total_budget{budget};


  for (int round{1}; round <= rounds; round++) {
  std::cout << round;

    int bid{0};
    if (round <= first_third) {
      std::cout << " first" << '\n';
      //bid = 0;
      //output << bid << '\n';
      continue;
    }

    if (round <= middle_third){
      std::cout << " second" << '\n';

      continue;
    } else {
      std::cout << " third" << '\n';
    }






  }
}

// ============================================================================
// MAIN FUNCTION
// Use this to test your code.
// This function will be ignored by the "make test" command.
// ============================================================================
int main() {
  // You can write code here to call your functions and see if they work.
  // Example:
  // GenerateBids(10, 100, "test_output.txt");
  GenerateBids(10,100,"test_output.txt");
  std::cout << '\n';
  GenerateBids(9,100,"test_output.txt");
  std::cout << '\n';
  GenerateBids(11,100,"test_output.txt");
  std::cout << '\n';
  GenerateBids(12,100,"test_output.txt");

  return 0;
}
