#include <vector>

void WeakEdge(std::vector<std::vector<int>> &data, std::vector<bool> &visited,
              std::vector<int> &time_in, std::vector<int> &min_time_in,
              std::vector<std::pair<int, int>> &bridges, int time, int v,
              int p = -1);

std::vector<std::pair<int, int>> CuttingEdge(
    std::vector<std::vector<int>> &data);