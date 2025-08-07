class Solution {
public:
     bool canPlaceFlowers(vector<int>& flo, int n) {
        int i = 0;
        int size = flo.size();

        while (i < size && n > 0) {
            if (flo[i] == 0) {
                bool emptyLeft = (i == 0) || (flo[i - 1] == 0);
                bool emptyRight = (i == size - 1) || (flo[i + 1] == 0);

                if (emptyLeft && emptyRight) {
                    flo[i] = 1;
                    n--;
                    i += 2; // Skip next spot
                    continue;
                }
            }
            i++;
        }

        return n == 0;
    }
};