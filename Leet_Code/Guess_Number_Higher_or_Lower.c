/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

int guessNumber(int n){
	int a = 1;
    int b = n;
    while (a <= b){
        long mid = ((long)a+b)/2;
        int trfl = guess(mid);
        if (trfl == 0){
            return mid;
        }else if (trfl == 1){
            a = mid + 1;
        }else if (trfl == -1){
            b = mid -1;
        }
    }return -1;
}
