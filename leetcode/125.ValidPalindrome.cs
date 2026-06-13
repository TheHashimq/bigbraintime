public class Solution {
    public bool IsPalindrome(string s) {
        string cleaned = new string(s.Where(char.IsLetterOrDigit).ToArray()).ToLower();
        char [] c = cleaned.ToCharArray();
        int left = 0;
        int right = cleaned.Length -1;
        while(left < right){
            if(c[left] != c[right]){
                return false;
            }
            left ++;
            right --;
        }
        return true;
    }
}
