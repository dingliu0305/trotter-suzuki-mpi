/**
 * Massively Parallel Trotter-Suzuki Solver
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef __COMMON_H
#define __COMMON_H
#include "trottersuzuki.h"

void stamp(Lattice *grid, State *state, string fileprefix);
void stamp_matrix(Lattice *grid, double *matrix, string filename);

void calculate_borders(int coord, int dim, int * start, int *end, int *inner_start, int *inner_end, int length, int halo, int periodic_bound);
void my_abort(string err);
void memcpy2D(void * dst, size_t dstride, const void * src, size_t sstride, size_t width, size_t height);

#endif
