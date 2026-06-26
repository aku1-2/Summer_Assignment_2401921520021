/*
Serialization is the process of converting a data structure or object into a sequence of bits so that it can be stored in a file or memory buffer, 
or transmitted across a network connection link to be reconstructed later in the same or another computer environment.
Design an algorithm to serialize and deserialize a binary tree. There is no restriction on how your serialization/deserialization algorithm should work. 
You just need to ensure that a binary tree can be serialized to a string and this string can be deserialized to the original tree structure.
Clarification: The input/output format is the same as how LeetCode serializes a binary tree. You do not necessarily need to follow this format, 
so please be creative and come up with different approaches yourself.
*/

class Codec {
public:

    //Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s;
    serializeHelper(root, s);
    return s;
    }
    void serializeHelper(TreeNode* root, string &s) {
    if (!root) {
        s += "# ";
        return;
    }
    s += to_string(root->val) + " ";
    serializeHelper(root->left, s);
    serializeHelper(root->right, s);
}

    //Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        stringstream ss(data);
    return deserializeHelper(ss);
    }
    TreeNode* deserializeHelper(stringstream &ss) {
    string val;
    if (!(ss >> val))
        return nullptr;
    if (val == "#")
        return nullptr;
    TreeNode* node = new TreeNode(stoi(val));
    node->left = deserializeHelper(ss);
    node->right = deserializeHelper(ss);
    return node;
}
};
