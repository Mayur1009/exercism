#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> res;
    for(auto x: student_scores) 
        res.emplace_back(static_cast<int>(x));
    return res;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int cnt = 0;
    for(auto x: student_scores) 
        if (x <= 40) cnt ++;
    return cnt;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    int inter = (highest_score - 40) / 4;
    return {41, 41 + inter, 41 + 2 * inter, 41 + 3 * inter};
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> res;
    for (int i = 0; i < student_scores.size(); ++i) {
        res.emplace_back(std::to_string(i + 1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]));
    }
    return res;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    for(int i = 0; i < student_scores.size(); ++i)
        if (student_scores[i] == 100) 
            return student_names[i];
    return "";
}
