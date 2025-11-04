// Update the require to destructure fruits
//const { fruits } = require('./fruits');

// Add console.log to see output
//console.log("Available fruits:", fruits);

/* We use import after ES6 of javascript was launched.
but we need "type:"module" in package.json (of parent dir)
to use import statement in node.js */
import { sum, PI } from './math.js';
import { generate} from 'random-words';

console.log(generate());
console.log("Sum of 2 and 3 is:", sum(2, 3));
