#include "binary_search_tree.hpp"
#include <gtest/gtest.h>

using namespace CS270;

TEST(BST, constructor){
  BinarySearchTree<int> intbst;
  BinarySearchTree<float> floatbst;
}

TEST(BST, root){
  BinarySearchTree<int> intbst;
  EXPECT_EQ(NULL, intbst.getRoot()); 
}

TEST(BST, insert){
  // Integer binary search tree
  BinarySearchTree<int> intbst;
  // Base case
  intbst.insert(7);
  EXPECT_EQ(7, intbst.getRoot() -> value);
  // Left case
  intbst.insert(5);
  EXPECT_EQ(5, intbst.getRoot() -> left -> value);
  // Right case
  intbst.insert(12);
  EXPECT_EQ(12, intbst.getRoot() -> right -> value);
  // Double binary search tree
  BinarySearchTree<double> doublebst;
  // Base case
  doublebst.insert(7.3);
  EXPECT_EQ(7.3, doublebst.getRoot() -> value);
  // Left case
  doublebst.insert(5.7);
  EXPECT_EQ(5.7, doublebst.getRoot() -> left -> value);
  // Right case
  doublebst.insert(12.3);
  EXPECT_EQ(12.3, doublebst.getRoot() -> right -> value);
}

TEST(BST, empty) {
  // Integer binary search tree
  BinarySearchTree<int> intbst;
  ASSERT_EQ(true, intbst.isEmpty());
  intbst.insert(13);
  ASSERT_EQ(false, intbst.isEmpty());
  // Double binary search tree
  BinarySearchTree<double> doublebst;
  ASSERT_EQ(true, doublebst.isEmpty());
  doublebst.insert(3.0);
  ASSERT_EQ(false, doublebst.isEmpty());
}

TEST(BST, deleteTree){
  BinarySearchTree<int> intbst;
  intbst.insert(40);
  intbst.insert(10);
  intbst.insert(60);
  EXPECT_EQ(false, intbst.isEmpty());
  intbst.deleteTree();
  EXPECT_EQ(true, intbst.isEmpty());
}

TEST(BST, preOrderTraversal){
  BinarySearchTree<int> intbst;
  intbst.insert(20);
  intbst.insert(12);
  intbst.insert(5);
  intbst.insert(15);
  intbst.insert(31);
  intbst.insert(43);
  intbst.insert(41);
  intbst.insert(53);

  std::vector<int> expected = {20, 12, 5, 15, 31, 43, 41, 53};
  EXPECT_EQ(expected, intbst.preOrderTraversal());
}

TEST(BST, inOrderTraversal) {
  BinarySearchTree<int> intbst;
  intbst.insert(20);
  intbst.insert(12);
  intbst.insert(5);
  intbst.insert(15);
  intbst.insert(31);
  intbst.insert(43);
  intbst.insert(41);
  intbst.insert(53);

  std::vector<int> expected = {5, 12, 15, 20, 31, 41, 43, 53};
  EXPECT_EQ(expected, intbst.inOrderTraversal());
}

TEST(BST, postOrderTraversal) {
  BinarySearchTree<int> intbst;
  intbst.insert(20);
  intbst.insert(12);
  intbst.insert(5);
  intbst.insert(15);
  intbst.insert(31);
  intbst.insert(43);
  intbst.insert(41);
  intbst.insert(53);

  std::vector<int> expected = {5, 15, 12, 41, 53, 43, 31, 20};
  EXPECT_EQ(expected, intbst.postOrderTraversal());
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
