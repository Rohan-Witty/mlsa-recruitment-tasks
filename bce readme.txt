Tried out DecisionTreeRegressor, DecisionTreeRegressor with optiizied no of max leaf nodes and RandomForestRegressor
on the 4 sets of features containing the mean values, se values, worst values and all values and got the following sets of mae values

Using mean
Validation MAE when not specifying max_leaf_nodes: 0.0699300699
25
Validation MAE for best value of max_leaf_nodes: 0.0839160839
Validation MAE for Random Forest Model: 0.10944055944055946
    
Using se
Validation MAE when not specifying max_leaf_nodes: 0.1258741259
35
Validation MAE for best value of max_leaf_nodes: 0.1258741259
Validation MAE for Random Forest Model: 0.1630769230769231

Using worst
Validation MAE when not specifying max_leaf_nodes: 0.0839160839
10
Validation MAE for best value of max_leaf_nodes: 0.1024765748
Validation MAE for Random Forest Model: 0.08874125874125872
    
Using all
Validation MAE when not specifying max_leaf_nodes: 0.0699300699
14
Validation MAE for best value of max_leaf_nodes: 0.0559440559
Validation MAE for Random Forest Model: 0.08545454545454545
    
Best model among the above has been optimized Regression tree for all values with leaf size 14
