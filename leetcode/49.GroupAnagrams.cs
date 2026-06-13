public class Solution {
    public string strId(string str){
        int[] arr = new int[26];
        StringBuilder sb = new StringBuilder();
        foreach(char c in str){
            arr[c-'a']++;
        }
        foreach(int i in arr){
            sb.Append(i);  
            sb.Append('#');  
        }
        string id = sb.ToString();
        return id;
    }
    public IList<IList<string>> GroupAnagrams(string[] strs) {
        var groups = new Dictionary<string, List<string>>();
        foreach(string str in strs){
             string id = strId(str);
            if (!groups.ContainsKey(id)){
                groups[id] = new List<string>();
            }
            groups[id].Add(str);
        }
       IList<IList<string>> res = new List<IList<string>>();
        foreach (var (key, value) in groups){
            res.Add(value);
        }
        return res;
    }
}
