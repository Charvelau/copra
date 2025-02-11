// This file is part of copra.

// copra is free software: you can redistribute it and/or
// modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// copra is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with copra.  If not, see
// <http://www.gnu.org/licenses/>.

#pragma once

#include <Eigen/Core>
#include <utility>
#include <vector>

namespace tools {

using solver_timers_t = std::vector<std::pair<std::string, double>>;

struct SolverTimers {
    solver_timers_t st; // solve time
    solver_timers_t bt; // build time
    solver_timers_t ct; // coombine time
};

Eigen::MatrixXd spanMatrix(const Eigen::MatrixXd& m, int size, int addCols = 0);

Eigen::VectorXd spanVector(const Eigen::VectorXd& v, int size);

void printSortedTimers(SolverTimers& solT);

} // namespace