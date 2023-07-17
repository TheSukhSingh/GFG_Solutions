void gmm(PII *st, int *arr, int qs, int qe, int ss, int se, int si, PII &ans){
    if(se < qs || ss > qe){
        return;
    }
    if(qs <= ss && qe >= se){
        ans.first = min(ans.first, st[si].first);
        ans.second = max(ans.second, st[si].second);
        return;
    }
    int mid = ss + (se - ss)/2;
    gmm(st, arr, qs, qe, ss, mid, 2*si + 1, ans);
    gmm(st, arr, qs, qe, mid + 1, se, 2*si + 2, ans);
    return;
}

PII getMinMax(PII *st, int *arr, int n, int qs, int qe)
{
    PII ans = {INT_MAX, INT_MIN};
    gmm(st, arr, qs, qe, 0, n - 1, 0, ans);
    if(ans.first == INT_MAX || ans.second == INT_MIN){
        return {-1, -1};
    }
    return ans;
}

//Function to return minimum and maximum of elements in range from index
//qs (quey start) to qe (query end).

void ud(int* arr, PII *st, int ss, int se, int index, int si , int new_val){
    if(index < ss || index > se)
        return;
    if(index == ss && index == se){
        st[si].first = new_val;
        st[si].second = new_val;
        return;
    }
    if(se > ss){
        int mid = ss + (se - ss)/2;
        ud(arr, st, ss, mid, index, 2*si + 1, new_val);
        ud(arr, st, mid + 1, se, index, 2*si + 2, new_val);
        st[si].second = max(st[2*si + 1].second, st[2*si + 2].second);
        st[si].first = min(st[2*si + 1].first, st[2*si + 2].first);
    }
}


void updateValue(int *arr, PII *st, int n, int index, int new_val)
{
   ud(arr, st, 0, n - 1, index,0,  new_val);
}