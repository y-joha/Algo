class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) 
    {
        int result = 0;
        int i_city = 0;
        int cities_to_visit = isConnected.size();
        vector<bool> visited_cities(cities_to_visit);

        for(i_city = 0 ; i_city < cities_to_visit ; ++i_city)
        {
            if(!visited_cities[i_city])
            {
                result++;
                IsProvinceBFS(i_city,isConnected,visited_cities);
            }
        }
        return result;
    }

    void IsProvinceDFS(int i_city, vector<vector<int>>& Provences,vector<bool>& visited)
    {
        visited[i_city] = true;
        for(int i = 0; i < Provences.size() ; i++)
        {
            if(Provences[i_city][i] && !visited[i])
            {
                IsProvinceDFS(i,Provences, visited);
            }
        }
    }
    

    void IsProvinceBFS(int i_city, vector<vector<int>>& Provences,vector<bool>& visited)
    {
        queue<int> q;
        q.push(i_city);
        visited[i_city] = true;

        while(!q.empty())
        {
            i_city = q.front();
            q.pop();

            for(int i = 0; i < Provences.size(); ++i)
            {
                if(Provences[i_city][i] && !visited[i])
                {
                    q.push(i);
                    visited[i] = true;
                }
            }
        }
    }

};