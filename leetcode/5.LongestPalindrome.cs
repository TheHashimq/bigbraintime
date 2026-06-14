public class Solution {
    public bool IsPalindrome(string s){
        char[] c = s.ToCharArray();
        int left = 0;
        int right = s.Length - 1;
        while (left < right){
            if (c[left] != c[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    public string LongestPalindrome(string s){
        string max = "";
        int left = 0;
        int right = s.Length - 1;
        string ss = "";
        for (; left <= right; left++){
            while (left <= right){
                ss = s.Substring(left, right - left  + 1);
                if (IsPalindrome(ss)){
                    if (max.Length < ss.Length){
                        max = ss;
                    }
                }
                right--;
            }
            right = s.Length -1;
        }
        return max;
    }
}
