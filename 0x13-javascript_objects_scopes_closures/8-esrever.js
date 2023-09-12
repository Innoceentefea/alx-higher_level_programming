#!/usr/bin/node
// Write a function that returns the reversed version of a list:
// Prototype: exports.esrever = function (list)
// You are not allow to use the built-in method reverse

exports.esrever = function (list) {
  const listReverse = list.map((_, index, arr) => arr[arr.length - 1 - index]);
  return listReverse;
};
