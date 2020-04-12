

void reverseString(char* s, int sSize){
    int left = 0, right = sSize-1;
    while (left<right){
        char anan = s[left];
        s[left] = s[right];
        s[right] = anan;
        left++;
        right--;
    }
}
