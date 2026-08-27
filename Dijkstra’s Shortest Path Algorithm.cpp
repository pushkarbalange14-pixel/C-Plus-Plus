void dijkstra(int n, vector<vector<pair<int, int>>> &graph, int source)
{
    vector<int> distance(n, INT_MAX);

    priority_queue<
        pair<int, int>,
        vector<pair<int, int>>,
        greater<pair<int, int>>
    > pq;

    distance[source] = 0;
    pq.push({0, source});

    while (!pq.empty())
    {
        int currentDistance = pq.top().first;
        int currentNode = pq.top().second;
        pq.pop();

        if (currentDistance > distance[currentNode])
            continue;

        for (auto edge : graph[currentNode])
        {
            int nextNode = edge.first;
            int weight = edge.second;

            if (distance[currentNode] + weight < distance[nextNode])
            {
                distance[nextNode] =
                    distance[currentNode] + weight;

                pq.push({distance[nextNode], nextNode});
            }
        }
    }

    cout << "Shortest distances from node "
         << source << ":\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Node " << i << " = ";

        if (distance[i] == INT_MAX)
            cout << "INF";
        else
            cout << distance[i];

        cout << endl;
    }
}
