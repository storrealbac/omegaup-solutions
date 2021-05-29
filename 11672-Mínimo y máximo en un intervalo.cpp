#include<bits/stdc++.h>

#define leftn n*2
#define rightn (n*2)+1
#define INF 1000000000
#define ll long long

using namespace std;

struct Node {
    int minimun = INF, maximum = -INF;
};

struct SegmentTree {
 
    vector<Node> ST;
    size_t arr_size;
 
    SegmentTree(vector<ll> &arr) {
        arr_size = arr.size();
        ST.resize(4*arr_size);
        build(arr, 1, 0, arr_size-1);
    }
 
 
    void build(vector<ll> &arr, ll n, ll start, ll end) {
 
        if (start == end) {
            Node values;
            values.maximum = arr[start];
            values.minimun = arr[start];
            ST[n] = values;
        } else {
            ll middle = (start+end)/2;
 
            build(arr, leftn, start, middle);
            build(arr, rightn, middle+1, end);
 
            ST[n].maximum = max(ST[leftn].maximum, ST[rightn].maximum);
            ST[n].minimun = min(ST[leftn].minimun, ST[rightn].minimun);
        }
        
    }
 
    Node query(ll a, ll b) {
        return query(1, 0, arr_size-1, a, b);
    }
 
    Node query(ll n, ll start, ll end, ll i, ll j) {
 
        if (j < start or i > end) {
            Node values;
            return values;
        }
        
        if (i <= start and end <= j)
            return ST[n];
 
        ll mid = (start+end)/2;

        if (j <= mid)
            return query(leftn, start, mid, i, j);
        if (i > mid)
            return query(rightn, mid+1, end, i, j);
       
        Node node_left  = query(leftn, start, mid, i, j);
        Node node_right = query(rightn, mid+1, end, i, j);
 
        Node response;
        response.maximum = max(node_left.maximum, node_right.maximum);
        response.minimun = min(node_left.minimun, node_right.minimun);

        return response;
    }
 
    void update(ll pos, ll value, vector<ll> &arr) {
        update(1, pos, 0, arr_size-1, value, arr);
    }
 
    void update(ll n, ll index, ll start, ll end, ll value, vector<ll> &arr) {
        if (start == end) {
            Node values;
            
            values.minimun = value;
            values.maximum = value;

            ST[n] = values;
            arr[index] = value;
        } else {
            ll middle = (start+end)/2;
            
            if (index <= middle)    update(leftn, index, start, middle, value, arr);
            else                    update(rightn, index, middle+1, end, value, arr);
 
            Node response;
            response.maximum = max(ST[leftn].maximum, ST[rightn].maximum);
            response.minimun = min(ST[leftn].minimun, ST[rightn].minimun);

            ST[n] = response;
        }
    }
 
};

int main() {

    ll n, q;
    scanf("%lld %lld\n", &n, &q);

    vector<ll> arr(n);
    for(int i = 0; i < n; i++)
        scanf("%lld", &arr[i]);
        

    SegmentTree ST(arr);
    while (q--) {
        char option;
        int a, b;
        cin >> option >> a >> b;
        if (option == 'C') {
            a--; b--;
            Node response = ST.query(a, b);
            printf("%d %d\n", response.minimun,  response.maximum);
        } else {
            a--;
            ST.update(a, b, arr);
        }


    }
    return 0;
}