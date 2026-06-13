public class Solution {
    public void ReverseString(char[] s) {
        int right = s.Length -1;
        int left = 0;
        char temp ;
        while (right > left){
            temp = s[right];
            s[right] = s[left];
            s[left] = temp;
            left++;
            right--;
        }
    }
}
