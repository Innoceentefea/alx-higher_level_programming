#!/usr/bin/node
const list = require('./100-data.js').list;

console.log(list);
console.log(list.map(function (x, idx) {
  return (x * idx);
}));
