#include <iostream>
using namespace std;
/*
Definition: The Tower of Hanoi is a problem where you move N disks from one peg to another using an auxiliary peg while following these rules:

Only one disk can be moved at a time.
A disk can only be placed on a larger disk.
Use an auxiliary peg for intermediate steps.
Base Case: If 
𝑛
=
1
n=1, move the disk directly.
Recursive Case:
Move 
𝑛
−
1
n−1 disks from Source to Auxiliary.
Move the largest disk to Destination.
Move 
𝑛
−
1
n−1 disks from Auxiliary to Destination.
 */
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        cout << "Move disk 1 from " << from_rod << " to " << to_rod << endl;
        return;
    }
    
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);  // Move n-1 disks to auxiliary
    cout << "Move disk " << n << " from " << from_rod << " to " << to_rod << endl;  // Move nth disk
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);  // Move n-1 disks to destination
}

int main() {
    int num_disks = 3;
    towerOfHanoi(num_disks, 'A', 'C', 'B');  // A = source, C = destination, B = auxiliary
    return 0;
}
