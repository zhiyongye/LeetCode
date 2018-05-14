// 447. Number of Boomerangs
// https://leetcode.com/problems/number-of-boomerangs/description/
// 时间复杂度: O(n^2)
// 空间复杂度: O(n)

class Solution {
public:
    int numberOfBoomerangs(vector<pair<int, int>>& points) {
		int res;
		for (int i=0; i<points.size(); i++) {
			unordered_map<int, int> record;
			for (int j=0; j<points.size(); ++j) {
				if (i != j) {
					int distance = (points[i].first - points[j].first) * (points[i].first - points[j].first)
									+ (points[i].second - points[j].second) * (points[i].second - points[j].second);
					record[distance] ++ ;
				}		
			}
			
			unordered_map<int, int>::iterator iter;
			for (iter = record.begin(); iter!=record.end(); ++iter) {
				res += (iter->second) * (iter->second - 1);
			}
		}
        
		return res;
    }
};