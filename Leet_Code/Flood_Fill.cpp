class Solution {
public:
    void do_job(vector<vector<int>>& image, int sr, int sc, int newColor, int need_color) {
        if (image[sr][sc] == need_color) {
            image[sr][sc] = newColor;
            if (sr - 1 >= 0) {
                do_job(image, sr-1, sc, newColor, need_color);
            }
            if (sc - 1 >= 0) {
                do_job(image, sr, sc-1, newColor, need_color);
            }
            if (sr + 1 < image.size()) {
                do_job(image, sr+1, sc, newColor, need_color);
            }
            if (sc + 1 < image[0].size()) {
                do_job(image, sr, sc+1, newColor, need_color);
            }
        } else;
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int color = image[sr][sc];
        if (color != newColor) do_job(image, sr, sc, newColor, image[sr][sc]);
        return image;
    }
};